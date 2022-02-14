
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (unsigned long,unsigned long*,unsigned long*,char*,char*) ;

int FUNC_5(unsigned long VAR_1, unsigned long *VAR_2,
   unsigned long *VAR_3, char *VAR_4, char *VAR_5)
{
 VAR_5[0] = '\0';
 VAR_5[VAR_0 - 1] = '\0';

 if (FUNC_2(VAR_1)) {
  unsigned long VAR_6;

  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);

  FUNC_3(FUNC_0(VAR_6),
           VAR_5, VAR_0);
  VAR_4[0] = '\0';
  return 0;
 }

 return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
