
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned long*,int,int,int *,int *,int ) ;
 int FUNC_2 (unsigned long*,int) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_1;
 if (!VAR_2)
  VAR_5 |= VAR_0;

 VAR_4 = FUNC_0(VAR_3, 0, 1);
 if (!VAR_4)
  return 0;

 if (VAR_4 == 1)
  VAR_4 = FUNC_2(VAR_3, 2);

 while (VAR_4) {
  FUNC_1(VAR_3, VAR_5, 2, ((void*)0), ((void*)0), 0);
  VAR_4 = FUNC_2(VAR_3, 2);
 }

 return 0;
}
