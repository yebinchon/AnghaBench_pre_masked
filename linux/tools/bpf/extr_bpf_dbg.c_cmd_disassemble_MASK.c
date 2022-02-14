
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int * VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 unsigned long FUNC_4 (char*,int *,int) ;

__attribute__((used)) static int FUNC_5(char *VAR_4)
{
 bool VAR_5 = 0;
 unsigned long VAR_6;

 if (!FUNC_2())
  return VAR_0;
 if (FUNC_3(VAR_4) > 0 &&
     (VAR_6 = FUNC_4(VAR_4, ((void*)0), 10)) < VAR_3)
  VAR_5 = 1;
 if (VAR_5)
  FUNC_0(VAR_2[VAR_6], VAR_6);
 else
  FUNC_1(VAR_2, VAR_3);

 return VAR_1;
}
