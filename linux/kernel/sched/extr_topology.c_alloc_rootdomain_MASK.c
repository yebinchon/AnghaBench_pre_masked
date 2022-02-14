
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_domain {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct root_domain*) ;
 int FUNC_1 (struct root_domain*) ;
 struct root_domain* FUNC_2 (int,int ) ;

__attribute__((used)) static struct root_domain *FUNC_3(void)
{
 struct root_domain *VAR_1;

 VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_1) != 0) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
