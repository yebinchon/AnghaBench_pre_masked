
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 unsigned long FUNC_1 (struct zone*,int ) ;

unsigned long FUNC_2(struct zone *VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_3) +
  FUNC_1(VAR_4, VAR_1);
 if (FUNC_0() > 0)
  VAR_5 += FUNC_1(VAR_4, VAR_2) +
   FUNC_1(VAR_4, VAR_0);

 return VAR_5;
}
