
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,int,int,int *,int *,int ) ;
 int FUNC_1 (unsigned long*,int ) ;

__attribute__((used)) static int FUNC_2(unsigned long *VAR_3)
{
 int VAR_4 = VAR_1;
 if (!VAR_2)
  VAR_4 |= VAR_0;

 if (*VAR_3 == 2)
  *VAR_3 = 0;
 else if (FUNC_1(VAR_3, 0) == 1)
  return 0;

 FUNC_0(VAR_3, VAR_4, 1, ((void*)0), ((void*)0), 0);

 return 0;
}
