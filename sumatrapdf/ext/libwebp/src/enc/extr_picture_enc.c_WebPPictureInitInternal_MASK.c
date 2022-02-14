
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int writer; } ;
typedef TYPE_1__ WebPPicture ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int FUNC_3(WebPPicture* VAR_3, int VAR_4) {
  if (FUNC_0(VAR_4, VAR_2)) {
    return 0;
  }
  if (VAR_3 != ((void*)0)) {
    FUNC_2(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->writer = VAR_0;
    FUNC_1(VAR_3, VAR_1);
  }
  return 1;
}
