
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* progress_hook ) (int,TYPE_1__ const* const) ;} ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const* const,int ) ;
 int FUNC_1 (int,TYPE_1__ const* const) ;

int FUNC_2(const WebPPicture* const VAR_1,
                       int VAR_2, int* const VAR_3) {
  if (VAR_3 != ((void*)0) && VAR_2 != *VAR_3) {
    *VAR_3 = VAR_2;
    if (VAR_1->progress_hook && !VAR_1->progress_hook(VAR_2, VAR_1)) {

      FUNC_0(VAR_1, VAR_0);
      return 0;
    }
  }
  return 1;
}
