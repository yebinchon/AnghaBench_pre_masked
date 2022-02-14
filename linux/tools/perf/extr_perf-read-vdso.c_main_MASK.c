
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void**,void**,int ) ;
 size_t FUNC_2 (void*,int,size_t,int ) ;
 int VAR_1 ;

int FUNC_3(void)
{
 void *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;

 if (FUNC_1(&VAR_2, &VAR_3, VAR_0))
  return 1;

 VAR_4 = VAR_3 - VAR_2;

 while (VAR_4) {
  VAR_5 = FUNC_2(VAR_2, 1, VAR_4, VAR_1);
  if (!VAR_5)
   return 1;
  VAR_2 += VAR_5;
  VAR_4 -= VAR_5;
 }

 if (FUNC_0(VAR_1))
  return 1;

 return 0;
}
