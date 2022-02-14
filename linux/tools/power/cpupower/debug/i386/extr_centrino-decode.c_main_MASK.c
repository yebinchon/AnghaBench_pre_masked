
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (char*,int *,int ) ;

int FUNC_3 (int VAR_1, char **VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 if (VAR_1 < 2)
  VAR_3 = 0;
 else {
  VAR_3 = FUNC_2(VAR_2[1], ((void*)0), 0);
  if (VAR_3 >= VAR_0)
   VAR_4 = 1;
 }

 if (VAR_4)
  FUNC_0(VAR_3);
 else
  FUNC_1(VAR_3);

 return 0;
}
