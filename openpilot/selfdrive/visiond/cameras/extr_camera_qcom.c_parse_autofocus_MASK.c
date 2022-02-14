
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int* confidence; int* focus; int focus_err; } ;
typedef TYPE_1__ CameraState ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(CameraState *VAR_1, uint8_t *VAR_2) {
  int VAR_3 = 0;
  int16_t VAR_4 = -32767;
  int VAR_5 = 0;






  for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    int VAR_7 = VAR_6*5+5;
    VAR_1->confidence[VAR_6] = VAR_2[VAR_7];
    int16_t VAR_8 = (VAR_2[VAR_7+1] << 3) | (VAR_2[VAR_7+2] >> 5);
    if (VAR_8 >= 1024) VAR_8 = -(2048-VAR_8);
    VAR_1->focus[VAR_6] = VAR_8;

    if (VAR_1->confidence[VAR_6] > 0x20) {
      VAR_3++;
      VAR_4 = FUNC_1(VAR_4, VAR_1->focus[VAR_6]);
      VAR_5 += VAR_1->focus[VAR_6];
    }
  }


  if (VAR_3 < 4) {
    VAR_1->focus_err = FUNC_2("");
    return;
  }

  VAR_5 /= VAR_3;


  if (FUNC_0(VAR_5 - VAR_4) > 200) {
    VAR_1->focus_err = FUNC_2("");
    return;
  }

  VAR_1->focus_err = VAR_4*1.0;
}
