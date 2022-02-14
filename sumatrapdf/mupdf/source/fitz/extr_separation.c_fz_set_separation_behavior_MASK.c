
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_separations; int* state; int controllable; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_separation_behavior ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;

void FUNC_2(fz_context *VAR_3, fz_separations *VAR_4, int VAR_5, fz_separation_behavior VAR_6)
{
 int VAR_7;
 fz_separation_behavior VAR_8;

 if (!VAR_4 || VAR_5 < 0 || VAR_5 >= VAR_4->num_separations)
  FUNC_1(VAR_3, VAR_0, "can't control non-existent separation");

 if (VAR_6 == VAR_1 && !VAR_4->controllable)
  VAR_6 = VAR_2;

 VAR_7 = ((2*VAR_5) & 31);
 VAR_5 >>= 4;

 VAR_8 = (VAR_4->state[VAR_5]>>VAR_7) & 3;

 if (VAR_8 == (fz_separation_behavior)VAR_2)
  VAR_8 = VAR_1;


 if (VAR_8 == VAR_6)
  return;

 VAR_4->state[VAR_5] = (VAR_4->state[VAR_5] & ~(3<<VAR_7)) | (VAR_6<<VAR_7);



 FUNC_0(VAR_3);
}
