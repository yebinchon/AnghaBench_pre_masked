
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_load_ent {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct aa_load_ent* FUNC_1 (int,int ) ;

struct aa_load_ent *FUNC_2(void)
{
 struct aa_load_ent *VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_1->list);
 return VAR_1;
}
