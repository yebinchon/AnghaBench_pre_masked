
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct config_generic*) ;
 struct config_generic** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_2(void)
{
 int VAR_7;





 if (VAR_6 != VAR_0 ||
  FUNC_0(VAR_1) < 3)
  return;

 VAR_5 = 1;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 {
  struct config_generic *VAR_8 = VAR_3[VAR_7];

  if (VAR_8->flags & VAR_2)
   FUNC_1(VAR_8);
 }
}
