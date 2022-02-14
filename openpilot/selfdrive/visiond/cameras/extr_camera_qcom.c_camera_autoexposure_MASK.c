
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int msg ;
struct TYPE_6__ {float grey_frac; int camera_num; int type; } ;
struct TYPE_5__ {int ops_sock; int camera_num; } ;
typedef TYPE_1__ CameraState ;
typedef TYPE_2__ CameraMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int,int ) ;

void FUNC_1(CameraState *VAR_2, float VAR_3) {
  CameraMsg VAR_4 = {
    .type = VAR_0,
    .camera_num = VAR_2->camera_num,
    .grey_frac = VAR_3,
  };

  FUNC_0(VAR_2->ops_sock, &VAR_4, sizeof(VAR_4), VAR_1);
}
