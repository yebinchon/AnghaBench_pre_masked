
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum rcutorture_type { ____Placeholder_rcutorture_type } rcutorture_type ;
struct TYPE_2__ {int gp_seq; int gp_flags; } ;



 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(enum rcutorture_type VAR_1, int *VAR_2,
       unsigned long *VAR_3)
{
 switch (VAR_1) {
 case 128:
  *VAR_2 = FUNC_0(VAR_0.gp_flags);
  *VAR_3 = FUNC_1(&VAR_0.gp_seq);
  break;
 default:
  break;
 }
}
