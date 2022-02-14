
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;
 double FUNC_3 (char const*,char**) ;

int FUNC_4(const char *VAR_2, char **VAR_3, double *VAR_4)
{
 char *VAR_5;
 int VAR_6 = 0;




 VAR_5 = FUNC_1(VAR_1, ((void*)0));






 VAR_5 = FUNC_2(VAR_5);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }






 FUNC_1(VAR_1, "C");

 *VAR_4 = FUNC_3(VAR_2, VAR_3);

out:

 FUNC_1(VAR_1, VAR_5);
 FUNC_0(VAR_5);
 return VAR_6;
}
