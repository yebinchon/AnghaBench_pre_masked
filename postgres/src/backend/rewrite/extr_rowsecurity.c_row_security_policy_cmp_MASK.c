
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * policy_name; } ;
typedef TYPE_1__ RowSecurityPolicy ;
typedef int ListCell ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(const ListCell *VAR_0, const ListCell *VAR_1)
{
 const RowSecurityPolicy *VAR_2 = (const RowSecurityPolicy *) FUNC_0(VAR_0);
 const RowSecurityPolicy *VAR_3 = (const RowSecurityPolicy *) FUNC_0(VAR_1);


 if (VAR_2->policy_name == ((void*)0))
  return VAR_3->policy_name == ((void*)0) ? 0 : 1;
 if (VAR_3->policy_name == ((void*)0))
  return -1;

 return FUNC_1(VAR_2->policy_name, VAR_3->policy_name);
}
