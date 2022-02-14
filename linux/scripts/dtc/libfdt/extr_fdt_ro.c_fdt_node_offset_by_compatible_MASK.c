
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (void const*,int,int *) ;
 int FUNC_2 (void const*,int,char const*) ;

int FUNC_3(const void *VAR_1, int VAR_2,
      const char *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(VAR_1);






 for (VAR_4 = FUNC_1(VAR_1, VAR_2, ((void*)0));
      VAR_4 >= 0;
      VAR_4 = FUNC_1(VAR_1, VAR_4, ((void*)0))) {
  VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_3);
  if ((VAR_5 < 0) && (VAR_5 != -VAR_0))
   return VAR_5;
  else if (VAR_5 == 0)
   return VAR_4;
 }

 return VAR_4;
}
