
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_bufs; scalar_t__* refcnt; int cb_cookie; int (* release_cb ) (int ,int) ;} ;
typedef TYPE_1__ Pool ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(Pool *VAR_0, int VAR_1) {


  FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->num_bufs);

  FUNC_0(VAR_0->refcnt[VAR_1] > 0);
  VAR_0->refcnt[VAR_1]--;


  if (VAR_0->refcnt[VAR_1] == 0 && VAR_0->release_cb) {

    VAR_0->release_cb(VAR_0->cb_cookie, VAR_1);
  }
}
