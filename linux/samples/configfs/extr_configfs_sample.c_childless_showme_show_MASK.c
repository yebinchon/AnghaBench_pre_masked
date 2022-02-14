
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct childless {int showme; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct childless* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 struct childless *VAR_2 = FUNC_1(VAR_0);
 ssize_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, "%d\n", VAR_2->showme);
 VAR_2->showme++;

 return VAR_3;
}
