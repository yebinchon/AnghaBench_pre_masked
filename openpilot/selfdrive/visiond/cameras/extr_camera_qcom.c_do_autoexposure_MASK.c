
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float cur_exposure_frac; float cur_gain_frac; } ;
typedef TYPE_1__ CameraState ;


 float FUNC_0 (double,float const) ;
 int FUNC_1 (TYPE_1__*,float,float) ;

__attribute__((used)) static void FUNC_2(CameraState *VAR_0, float VAR_1) {
  const float VAR_2 = 0.3;

  float VAR_3 = VAR_0->cur_exposure_frac;
  VAR_3 *= FUNC_0(1.05, (VAR_2 - VAR_1) / 0.05 );


  float VAR_4 = VAR_0->cur_gain_frac;
  if (VAR_3 < 0.10) {
    VAR_4 *= 0.95;
  } else if (VAR_3 > 0.40) {
    VAR_4 *= 1.05;
  }

  FUNC_1(VAR_0, VAR_3, VAR_4);
}
