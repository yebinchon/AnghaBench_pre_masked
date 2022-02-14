
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dirty_buf; } ;
struct TYPE_5__ {TYPE_1__* ss; int isp_fd; } ;
struct TYPE_4__ {TYPE_3__* qbuf_info; } ;
typedef TYPE_2__ CameraState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(void* VAR_1, int VAR_2) {
  CameraState *VAR_3 = VAR_1;

  VAR_3->ss[0].qbuf_info[VAR_2].dirty_buf = 1;
  FUNC_0(VAR_3->isp_fd, VAR_0, &VAR_3->ss[0].qbuf_info[VAR_2]);
}
