
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double plan_rows; int plan_width; } ;
typedef TYPE_1__ Plan ;


 double FUNC_0 (int ) ;
 int VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static bool
FUNC_1(Plan *VAR_2)
{
 double VAR_3;







 VAR_3 = VAR_2->plan_rows *
  (FUNC_0(VAR_2->plan_width) + FUNC_0(VAR_0));
 if (VAR_3 > VAR_1 * 1024L)
  return 0;

 return 1;
}
