
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_idx; int lock; int cv; int efd; int cb_cookie; int (* release_cb ) (int ,int) ;} ;
typedef TYPE_1__ TBuffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(TBuffer *VAR_0, int VAR_1) {
  FUNC_2(&VAR_0->lock);

  if (VAR_0->pending_idx != -1) {

    if (VAR_0->release_cb) {
      VAR_0->release_cb(VAR_0->cb_cookie, VAR_0->pending_idx);
    }
    VAR_0->pending_idx = -1;
  }

  VAR_0->pending_idx = VAR_1;

  FUNC_0(VAR_0->efd);
  FUNC_1(&VAR_0->cv);

  FUNC_3(&VAR_0->lock);
}
