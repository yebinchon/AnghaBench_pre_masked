
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int WebPBitstreamFeatures ;
typedef scalar_t__ VP8StatusCode ;


 int FUNC_0 (char const* const,int const**,size_t*) ;
 int FUNC_1 (char const* const,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int const*,size_t,int *) ;
 int FUNC_3 (void*) ;

int FUNC_4(const char* const VAR_1,
             const uint8_t** VAR_2, size_t* VAR_3,
             WebPBitstreamFeatures* VAR_4) {
  VP8StatusCode VAR_5;
  WebPBitstreamFeatures VAR_6;
  if (!FUNC_0(VAR_1, VAR_2, VAR_3)) return 0;

  if (VAR_4 == ((void*)0)) {
    VAR_4 = &VAR_6;
  }

  VAR_5 = FUNC_2(*VAR_2, *VAR_3, VAR_4);
  if (VAR_5 != VAR_0) {
    FUNC_3((void*)*VAR_2);
    *VAR_2 = ((void*)0);
    *VAR_3 = 0;
    FUNC_1(VAR_1, VAR_5);
    return 0;
  }
  return 1;
}
