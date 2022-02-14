
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct input_event {int type; int value; int code; } ;
typedef int event ;
struct TYPE_3__ {int last_x; int last_y; int fd; } ;
typedef TYPE_1__ TouchState ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct input_event*,int) ;

int FUNC_2(TouchState *VAR_2, int* VAR_3, int* VAR_4) {
  FUNC_0(VAR_3 && VAR_4);
  struct input_event VAR_5;
  int VAR_6 = FUNC_1(VAR_2->fd, &VAR_5, sizeof(VAR_5));
  if (VAR_6 < sizeof(VAR_5)) {
    return -1;
  }
  bool VAR_7 = 0;
  switch (VAR_5.type) {
  case 128:
    if (VAR_5.code == VAR_0) {
      VAR_2->last_x = VAR_5.value;
    } else if (VAR_5.code == VAR_1) {
      VAR_2->last_y = VAR_5.value;
    }
    VAR_7 = 1;
    break;
  default:
    break;
  }
  if (VAR_7) {

    *VAR_3 = VAR_2->last_y;
    *VAR_4 = 1080 - VAR_2->last_x;
  }
  return VAR_7;
}
