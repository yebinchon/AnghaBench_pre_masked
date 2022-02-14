
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int events; int revents; int fd; } ;
struct input_event {int type; int value; int code; } ;
typedef int event ;
struct TYPE_3__ {int last_x; int last_y; int fd; } ;
typedef TYPE_1__ TouchState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int ,struct input_event*,int) ;

int FUNC_3(TouchState *VAR_4, int* VAR_5, int* VAR_6, int VAR_7) {
  FUNC_0(VAR_5 && VAR_6);
  bool VAR_8 = 0;
  while (1) {
    struct pollfd VAR_9[] = {{
      .fd = VAR_4->fd,
      .events = VAR_3,
    }};
    int VAR_10 = FUNC_1(VAR_9, 1, VAR_7);
    if (VAR_10 < 0) {
      return -1;
    }
    if (!(VAR_9[0].revents & VAR_3)) {
      break;
    }

    struct input_event VAR_11;
    VAR_10 = FUNC_2(VAR_9[0].fd, &VAR_11, sizeof(VAR_11));
    if (VAR_10 < sizeof(VAR_11)) {
      return -1;
    }

    switch (VAR_11.type) {
    case 128:
      if (VAR_11.code == VAR_0) {
        VAR_4->last_x = VAR_11.value;
      } else if (VAR_11.code == VAR_1) {
        VAR_4->last_y = VAR_11.value;
      } else if (VAR_11.code == VAR_2 && VAR_11.value != -1) {
        VAR_8 = 1;
      }
      break;
    default:
      break;
    }
  }
  if (VAR_8) {

    *VAR_5 = VAR_4->last_y;
    *VAR_6 = 1080 - VAR_4->last_x;
  }
  return VAR_8;
}
