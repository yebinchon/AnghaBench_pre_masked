
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* writer ) (int const*,int,TYPE_1__ const* const) ;} ;
typedef TYPE_1__ WebPPicture ;
typedef scalar_t__ WebPEncodingError ;
typedef int VP8LBitWriter ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 int * FUNC_0 (int * const) ;
 size_t FUNC_1 (int * const) ;
 size_t const VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__ const* const,size_t const,size_t const) ;
 int FUNC_3 (int const* const,size_t const,TYPE_1__ const* const) ;
 int FUNC_4 (int const*,int,TYPE_1__ const* const) ;

__attribute__((used)) static WebPEncodingError FUNC_5(const WebPPicture* const VAR_5,
                                    VP8LBitWriter* const VAR_6,
                                    size_t* const VAR_7) {
  WebPEncodingError VAR_8 = VAR_4;
  const uint8_t* const VAR_9 = FUNC_0(VAR_6);
  const size_t VAR_10 = FUNC_1(VAR_6);
  const size_t VAR_11 = VAR_2 + VAR_10;
  const size_t VAR_12 = VAR_11 & 1;
  const size_t VAR_13 = VAR_1 + VAR_0 + VAR_11 + VAR_12;

  VAR_8 = FUNC_2(VAR_5, VAR_13, VAR_11);
  if (VAR_8 != VAR_4) goto Error;

  if (!VAR_5->writer(VAR_9, VAR_10, VAR_5)) {
    VAR_8 = VAR_3;
    goto Error;
  }

  if (VAR_12) {
    const uint8_t VAR_14[1] = { 0 };
    if (!VAR_5->writer(VAR_14, 1, VAR_5)) {
      VAR_8 = VAR_3;
      goto Error;
    }
  }
  *VAR_7 = VAR_0 + VAR_13;
  return VAR_4;

 Error:
  return VAR_8;
}
