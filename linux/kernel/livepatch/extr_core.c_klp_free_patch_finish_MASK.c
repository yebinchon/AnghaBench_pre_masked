
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_patch {int mod; int forced; int finish; int kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct klp_patch *VAR_0)
{






 FUNC_0(&VAR_0->kobj);
 FUNC_2(&VAR_0->finish);


 if (!VAR_0->forced)
  FUNC_1(VAR_0->mod);
}
