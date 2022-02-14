
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int *) ;
 char* FUNC_1 (char const*) ;

char *
FUNC_2(const char *VAR_2, int VAR_3)
{
 char *VAR_4;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
 {
  FUNC_0(VAR_3, VAR_0, VAR_1, ((void*)0));
  return ((void*)0);
 }

 return VAR_4;
}
