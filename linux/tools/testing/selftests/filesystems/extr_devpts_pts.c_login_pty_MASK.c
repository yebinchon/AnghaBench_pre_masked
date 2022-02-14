
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_2)
{
 int VAR_3;

 FUNC_2();

 VAR_3 = FUNC_1(VAR_2, VAR_1, ((void*)0));
 if (VAR_3 < 0)
  return -1;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return -1;

 if (VAR_2 > VAR_0)
  FUNC_0(VAR_2);

 return 0;
}
