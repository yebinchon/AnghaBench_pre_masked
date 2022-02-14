
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct kobject*,char*,int) ;
 int FUNC_1 (struct kobject*) ;
 char* FUNC_2 (int,int ) ;

char *FUNC_3(struct kobject *VAR_0, gfp_t VAR_1)
{
 char *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == 0)
  return ((void*)0);
 VAR_2 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 FUNC_0(VAR_0, VAR_2, VAR_3);

 return VAR_2;
}
