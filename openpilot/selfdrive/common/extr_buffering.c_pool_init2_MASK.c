
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* release_cb ) (void*,int) ;void* cb_cookie; } ;
typedef TYPE_1__ Pool ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(Pool *VAR_0, int VAR_1,
  void (*VAR_2)(void* VAR_3, int VAR_4), void* VAR_5) {

  FUNC_0(VAR_0, VAR_1);
  VAR_0->cb_cookie = VAR_5;
  VAR_0->release_cb = VAR_2;

}
