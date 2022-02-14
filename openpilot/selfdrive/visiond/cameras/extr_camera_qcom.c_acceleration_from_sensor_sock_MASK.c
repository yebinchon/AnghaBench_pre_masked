
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zmq_msg_t ;
struct cereal_SensorEventData_SensorVec {int v; } ;
struct cereal_SensorEventData {scalar_t__ which; int acceleration; } ;
struct cereal_Event {scalar_t__ which; int sensorEvents; } ;
struct capn {int dummy; } ;
typedef int cereal_SensorEventData_list ;
struct TYPE_3__ {int p; } ;
typedef TYPE_1__ cereal_Event_ptr ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct capn*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct capn*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct capn*) ;
 float FUNC_7 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (struct cereal_SensorEventData*,int ,int) ;
 int FUNC_9 (struct cereal_Event*,TYPE_1__) ;
 int FUNC_10 (struct cereal_SensorEventData_SensorVec*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,void*,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static bool FUNC_16(void* VAR_2, float* VAR_3) {
  int VAR_4;

  zmq_msg_t VAR_5;
  VAR_4 = FUNC_13(&VAR_5);
  FUNC_0(VAR_4 == 0);

  VAR_4 = FUNC_14(&VAR_5, VAR_2, 0);
  FUNC_0(VAR_4 >= 0);

  struct capn VAR_6;
  FUNC_4(&VAR_6, FUNC_12(&VAR_5), FUNC_15(&VAR_5), 0);

  cereal_Event_ptr VAR_7;
  VAR_7.p = FUNC_3(FUNC_6(&VAR_6), 0, 1);
  struct cereal_Event VAR_8;
  FUNC_9(&VAR_8, VAR_7);

  bool VAR_9 = 0;

  if (VAR_8.which == VAR_0) {
    cereal_SensorEventData_list VAR_10 = VAR_8.sensorEvents;
    int VAR_11 = FUNC_5(VAR_10);
    for (int VAR_12=0; VAR_12<VAR_11; VAR_12++) {
      struct cereal_SensorEventData VAR_13;
      FUNC_8(&VAR_13, VAR_10, VAR_12);

      if (VAR_13.which == VAR_1) {
        struct cereal_SensorEventData_SensorVec VAR_14;
        FUNC_10(&VAR_14, VAR_13.acceleration);

        int VAR_15 = FUNC_5(VAR_14.v);
        if (VAR_15 < 3) {
          continue;
        }
        for (int VAR_16=0; VAR_16<3; VAR_16++) {
          VAR_3[VAR_16] = FUNC_7(FUNC_2(VAR_14.v, VAR_16));
        }
        VAR_9 = 1;
        break;
      }
    }
  }

  FUNC_1(&VAR_6);
  FUNC_11(&VAR_5);

  return VAR_9;
}
