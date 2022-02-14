
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long*,int*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_1,
    unsigned long *VAR_2,
    int *VAR_3)
{
 unsigned long VAR_4 = 0, VAR_5;

 FUNC_2(&VAR_0);

 VAR_4 = FUNC_0();
 if (VAR_4 <= VAR_1) {

  *VAR_2 = 0;
  return 1;
 }
 VAR_5 = VAR_4 - VAR_1;
 return FUNC_1(VAR_5, VAR_2, VAR_3);
}
