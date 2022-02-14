
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {scalar_t__ index; } ;
struct dsa_notifier_mdb_info {scalar_t__ sw_index; int port; } ;


 scalar_t__ FUNC_0 (struct dsa_switch*,int) ;

__attribute__((used)) static bool FUNC_1(struct dsa_switch *VAR_0, int VAR_1,
     struct dsa_notifier_mdb_info *VAR_2)
{
 if (VAR_0->index == VAR_2->sw_index && VAR_1 == VAR_2->port)
  return 1;

 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 return 0;
}
