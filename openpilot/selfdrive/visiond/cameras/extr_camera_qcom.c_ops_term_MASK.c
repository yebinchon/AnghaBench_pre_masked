
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zsock_t ;
typedef int msg ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ CameraMsg ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5() {
  zsock_t *VAR_1 = FUNC_3(">inproc://cameraops");
  FUNC_0(VAR_1);

  CameraMsg VAR_2 = {.type = -1};
  FUNC_1(FUNC_4(VAR_1), &VAR_2, sizeof(VAR_2), VAR_0);

  FUNC_2(&VAR_1);
}
