
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct module*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (struct module*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct module *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(&VAR_1,
         VAR_0, VAR_2);
 return 0;
}
