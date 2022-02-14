
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long*,unsigned long*,char*) ;
 int FUNC_1 (unsigned long,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long*,unsigned long*,int *,char*) ;

int FUNC_4(unsigned long VAR_1, unsigned long *VAR_2,
    unsigned long *VAR_3)
{
 char VAR_4[VAR_0];

 if (FUNC_2(VAR_1)) {
  FUNC_1(VAR_1, VAR_2, VAR_3);
  return 1;
 }
 return !!FUNC_3(VAR_1, VAR_2, VAR_3, ((void*)0), VAR_4) ||
        !!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
