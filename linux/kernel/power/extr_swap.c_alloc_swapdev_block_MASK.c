
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sector_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (int,unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long) ;

sector_t FUNC_6(int VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = FUNC_4(FUNC_0(VAR_0));
 if (VAR_1) {
  if (FUNC_5(VAR_1))
   FUNC_1(FUNC_3(VAR_0, VAR_1));
  else
   return FUNC_2(VAR_0, VAR_1);
 }
 return 0;
}
