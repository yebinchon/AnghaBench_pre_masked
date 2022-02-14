
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;
struct kmod_path {int name; scalar_t__ comp; scalar_t__ kmod; } ;
struct dso {scalar_t__ comp; int symtab_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dso*,int ,int) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct dso *VAR_2, struct kmod_path *VAR_3,
     struct machine *VAR_4)
{
 if (FUNC_1(VAR_4))
  VAR_2->symtab_type = VAR_1;
 else
  VAR_2->symtab_type = VAR_0;


 if (VAR_3->kmod && VAR_3->comp) {
  VAR_2->symtab_type++;
  VAR_2->comp = VAR_3->comp;
 }

 FUNC_0(VAR_2, FUNC_2(VAR_3->name), 1);
}
