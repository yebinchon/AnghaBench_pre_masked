
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zsock_t ;
typedef int zpoller_t ;
typedef int zmq_msg_t ;
typedef int uint64_t ;
typedef int cmsg ;
struct TYPE_8__ {int last_sag_ts; float last_sag_acc_z; } ;
struct TYPE_7__ {int type; scalar_t__ camera_num; int grey_frac; } ;
struct TYPE_6__ {TYPE_4__ rear; TYPE_4__ front; } ;
typedef TYPE_1__ DualCameraState ;
typedef TYPE_2__ CameraMsg ;


 int VAR_0 ;
 int FUNC_0 (void*,float*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **) ;
 int * FUNC_13 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (int **) ;
 int * FUNC_16 (char*) ;
 int * FUNC_17 (char*,char*) ;
 void* FUNC_18 (int *) ;

__attribute__((used)) static void* FUNC_19(void* VAR_2) {
  int VAR_3;
  DualCameraState *VAR_4 = (DualCameraState*)VAR_2;

  FUNC_6("camera_settings");

  zsock_t *VAR_5 = FUNC_16("@inproc://cameraops");
  FUNC_1(*VAR_5);

  zsock_t *VAR_6 = FUNC_17(">tcp://127.0.0.1:8003", "");
  FUNC_1(*VAR_6);

  zsock_t *VAR_7 = FUNC_17(">inproc://terminate", "");
  FUNC_1(*VAR_7);

  zpoller_t *VAR_8 = FUNC_13(VAR_5, VAR_6, VAR_7, ((void*)0));
  FUNC_1(*VAR_8);

  while (!VAR_1) {

    zsock_t *VAR_9 = (zsock_t*)FUNC_14(VAR_8, -1);
    if (VAR_9 == VAR_7 || VAR_9 == ((void*)0)) {
      break;
    }
    void* VAR_10 = FUNC_18(VAR_9);

    if (VAR_9 == VAR_5) {
      zmq_msg_t VAR_11;
      VAR_3 = FUNC_9(&VAR_11);
      FUNC_1(VAR_3 == 0);

      VAR_3 = FUNC_10(&VAR_11, VAR_10, 0);
      FUNC_1(VAR_3 >= 0);

      CameraMsg VAR_12;
      if (FUNC_11(&VAR_11) == sizeof(VAR_12)) {
        FUNC_4(&VAR_12, FUNC_8(&VAR_11), FUNC_11(&VAR_11));



        if (VAR_12.type == VAR_0) {
          if (VAR_12.camera_num == 0) {
            FUNC_2(&VAR_4->rear, VAR_12.grey_frac);
            FUNC_3(&VAR_4->rear);
          } else {
            FUNC_2(&VAR_4->front, VAR_12.grey_frac);
          }
        } else if (VAR_12.type == -1) {
          break;
        }
      }

      FUNC_7(&VAR_11);

    } else if (VAR_9 == VAR_6) {
      float VAR_13[3] = {0.0};
      bool VAR_14 = FUNC_0(VAR_10, VAR_13);

      uint64_t VAR_15 = FUNC_5();
      if (VAR_14 && VAR_15 - VAR_4->rear.last_sag_ts > 10000000) {
        VAR_4->rear.last_sag_ts = VAR_15;
        VAR_4->rear.last_sag_acc_z = -VAR_13[2];
      }
    }
  }

  FUNC_12(&VAR_8);
  FUNC_15(&VAR_5);
  FUNC_15(&VAR_6);
  FUNC_15(&VAR_7);

  return ((void*)0);
}
