
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 char* FUNC_2 (char**) ;
 int VAR_0 ;

const char *
FUNC_3(const char *VAR_1)
{
 const char *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_2(&VAR_3);

 if (!VAR_2)
 {
  FUNC_1(VAR_0, "%s: %s\n", VAR_1, VAR_3);
  FUNC_0(1);
 }
 return VAR_2;
}
