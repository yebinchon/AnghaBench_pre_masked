
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int WebPPicture ;
typedef scalar_t__ WebPEncodingError ;
struct TYPE_7__ {int profile_; scalar_t__ has_alpha_; int * pic_; } ;
typedef TYPE_1__ VP8Encoder ;


 scalar_t__ FUNC_0 (TYPE_1__ const* const) ;
 scalar_t__ FUNC_1 (TYPE_1__ const* const) ;
 scalar_t__ FUNC_2 (TYPE_1__ const* const,size_t) ;
 scalar_t__ FUNC_3 (int * const,int ,size_t) ;
 scalar_t__ FUNC_4 (int * const,size_t) ;
 scalar_t__ FUNC_5 (TYPE_1__ const* const) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int * const,scalar_t__) ;

__attribute__((used)) static int FUNC_7(const VP8Encoder* const VAR_1, size_t VAR_2,
                          size_t VAR_3, size_t VAR_4) {
  WebPPicture* const VAR_5 = VAR_1->pic_;
  WebPEncodingError VAR_6 = VAR_0;


  VAR_6 = FUNC_2(VAR_1, VAR_4);
  if (VAR_6 != VAR_0) goto Error;


  if (FUNC_0(VAR_1)) {
    VAR_6 = FUNC_5(VAR_1);
    if (VAR_6 != VAR_0) goto Error;
  }


  if (VAR_1->has_alpha_) {
    VAR_6 = FUNC_1(VAR_1);
    if (VAR_6 != VAR_0) goto Error;
  }


  VAR_6 = FUNC_4(VAR_5, VAR_3);
  if (VAR_6 != VAR_0) goto Error;


  VAR_6 = FUNC_3(VAR_5, VAR_1->profile_, VAR_2);
  if (VAR_6 != VAR_0) goto Error;


  return 1;


 Error:
  return FUNC_6(VAR_5, VAR_6);
}
