
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_instance {int dummy; } ;


 int FUNC_0 (struct table_instance*,struct table_instance*,int) ;
 struct table_instance* FUNC_1 (int) ;

__attribute__((used)) static struct table_instance *FUNC_2(struct table_instance *VAR_0,
          int VAR_1, bool VAR_2)
{
 struct table_instance *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_0, VAR_3, VAR_2);

 return VAR_3;
}
