
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double vfrontporch; double vsync; double vbackporch; double il_vfrontporch; double il_vsync; double il_vbackporch; double hfrontporch; double hsync; double hbackporch; scalar_t__ interlaced; scalar_t__ height; scalar_t__ width; scalar_t__ pixelclock; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;
struct dstr {int array; } ;
typedef int obs_property_t ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char*,scalar_t__,scalar_t__,char,double) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,struct v4l2_dv_timings*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_0, obs_property_t *VAR_1)
{
 struct v4l2_dv_timings VAR_2;
 struct dstr VAR_3;
 int VAR_4 = 0;
 FUNC_1(&VAR_3);

 FUNC_5(VAR_1);

 FUNC_4(VAR_1, FUNC_3("LeaveUnchanged"), -1);

 while (FUNC_6(VAR_0, &VAR_2, VAR_4) == 0) {

  double VAR_5 = (double)VAR_2.bt.height + VAR_2.bt.vfrontporch +
      VAR_2.bt.vsync + VAR_2.bt.vbackporch +
      VAR_2.bt.il_vfrontporch + VAR_2.bt.il_vsync +
      VAR_2.bt.il_vbackporch;
  double VAR_6 = (double)VAR_2.bt.width + VAR_2.bt.hfrontporch +
      VAR_2.bt.hsync + VAR_2.bt.hbackporch;
  double VAR_7 = (VAR_2.bt.interlaced) ? 2.0f : 1.0f;
  double VAR_8 = (double)VAR_2.bt.pixelclock / (VAR_6 * (VAR_5 / VAR_7));

  FUNC_2(&VAR_3, "%ux%u%c %.2f", VAR_2.bt.width, VAR_2.bt.height,
       (VAR_2.bt.interlaced) ? 'i' : 'p', VAR_8);

  FUNC_4(VAR_1, VAR_3.array, VAR_4);

  VAR_4++;
 }

 FUNC_0(&VAR_3);
}
