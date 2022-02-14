
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int table; } ;
struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int table; } ;
struct policydb {scalar_t__ policyvers; TYPE_3__ p_types; TYPE_2__ p_roles; TYPE_1__ p_users; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct policydb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct policydb *VAR_4)
{
 int VAR_5;

 if (VAR_4->policyvers < VAR_0)
  return 0;

 VAR_5 = FUNC_0(VAR_4->p_users.table,
    VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4->p_roles.table,
    VAR_1, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4->p_types.table,
    VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 return 0;
}
