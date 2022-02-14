
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ error_code; } ;
typedef TYPE_1__ WebPPicture ;
typedef scalar_t__ WebPEncodingError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(const WebPPicture* const VAR_2,
                         WebPEncodingError VAR_3) {
  FUNC_0((int)VAR_3 < VAR_0);
  FUNC_0((int)VAR_3 >= VAR_1);
  ((WebPPicture*)VAR_2)->error_code = VAR_3;
  return 0;
}
