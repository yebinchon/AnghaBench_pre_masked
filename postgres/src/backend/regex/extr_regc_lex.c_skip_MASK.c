
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {scalar_t__* now; int cflags; } ;
typedef scalar_t__ chr ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct vars *VAR_2)
{
 const chr *VAR_3 = VAR_2->now;

 FUNC_4(VAR_2->cflags & VAR_0);

 for (;;)
 {
  while (!FUNC_0() && FUNC_5(*VAR_2->now))
   VAR_2->now++;
  if (FUNC_0() || *VAR_2->now != FUNC_1('#'))
   break;
  FUNC_4(FUNC_2('#'));
  while (!FUNC_0() && *VAR_2->now != FUNC_1('\n'))
   VAR_2->now++;

 }

 if (VAR_2->now != VAR_3)
  FUNC_3(VAR_1);
}
