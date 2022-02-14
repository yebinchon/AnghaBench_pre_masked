
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long expires; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 unsigned long VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(int VAR_6)
{
 unsigned long VAR_7 = VAR_5;
 int VAR_8 = !FUNC_3();

 if (VAR_6 < 0)
  VAR_6 = VAR_4;

 FUNC_4(&VAR_1);

 if (FUNC_1(&VAR_2) && VAR_6 > 0 && VAR_0) {
  long VAR_9 = (long)(VAR_0 - VAR_7);

  if (VAR_8 && VAR_9 < VAR_3 - VAR_4)
   VAR_9 = 0;

  if (VAR_6 > VAR_9)
   VAR_6 = VAR_9;
 }

 if (VAR_6 <= 0) {
  FUNC_5(&VAR_1);
  FUNC_2(((void*)0));
  return;
 }

 if (VAR_0 == 0)
  VAR_0 = VAR_7 + VAR_3;

 VAR_2.expires = VAR_7 + VAR_6;
 FUNC_0(&VAR_2);
 FUNC_5(&VAR_1);
}
