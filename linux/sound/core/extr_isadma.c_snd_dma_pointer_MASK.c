
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (unsigned long) ;
 int VAR_0 ;
 int FUNC_5 (char*,unsigned int,unsigned long,unsigned int) ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

unsigned int FUNC_8(unsigned long VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_3 = FUNC_0();
 FUNC_1(VAR_1);
 if (!VAR_0)
  FUNC_2(VAR_1);
 VAR_4 = FUNC_4(VAR_1);





 VAR_5 = FUNC_4(VAR_1);
 if (!VAR_0)
  FUNC_3(VAR_1);
 FUNC_6(VAR_3);
 if (FUNC_7(VAR_4 < VAR_5))
  VAR_4 = VAR_5;




 if (VAR_4 >= VAR_2 || VAR_4 == 0)
  return 0;
 else
  return VAR_2 - VAR_4;
}
