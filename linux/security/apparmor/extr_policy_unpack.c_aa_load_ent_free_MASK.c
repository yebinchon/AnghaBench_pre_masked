
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_load_ent {int ns_name; int new; int old; int rename; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aa_load_ent*) ;

void FUNC_3(struct aa_load_ent *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->rename);
  FUNC_0(VAR_0->old);
  FUNC_0(VAR_0->new);
  FUNC_1(VAR_0->ns_name);
  FUNC_2(VAR_0);
 }
}
