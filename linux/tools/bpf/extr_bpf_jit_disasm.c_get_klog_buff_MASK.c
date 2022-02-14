
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3(unsigned int *VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_1(VAR_1, ((void*)0), 0);
 if (VAR_4 < 0)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_4);
 if (VAR_3 < 0) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 *VAR_2 = VAR_3;
 return VAR_5;
}
