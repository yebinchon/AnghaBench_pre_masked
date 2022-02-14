
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int WebPIDecoder ;
typedef int WebPDecoderConfig ;
typedef int VP8StatusCode ;


 int FUNC_0 (int * const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int const* const,size_t,int * const) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int * const,int const* const,size_t) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;

VP8StatusCode FUNC_5(
    const uint8_t* const VAR_4, size_t VAR_5,
    WebPDecoderConfig* const VAR_6) {
  VP8StatusCode VAR_7 = VAR_1;
  if (VAR_6 == ((void*)0)) return VAR_0;

  FUNC_0(VAR_6);


  {
    WebPIDecoder* const VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);
    if (VAR_8 == ((void*)0)) {
      FUNC_4(VAR_3, "Failed during WebPINewDecoder().\n");
      return VAR_2;
    } else {
      VAR_7 = FUNC_3(VAR_8, VAR_4, VAR_5);
      FUNC_2(VAR_8);
    }
  }
  return VAR_7;
}
