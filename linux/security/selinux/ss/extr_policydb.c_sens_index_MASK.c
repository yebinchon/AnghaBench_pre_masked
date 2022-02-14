
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nprim; } ;
struct policydb {void*** sym_val_to_name; TYPE_2__ p_levels; } ;
struct level_datum {TYPE_1__* level; int isalias; } ;
struct TYPE_3__ {int sens; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2, void *VAR_3, void *VAR_4)
{
 struct policydb *VAR_5;
 struct level_datum *VAR_6;

 VAR_6 = VAR_3;
 VAR_5 = VAR_4;

 if (!VAR_6->isalias) {
  if (!VAR_6->level->sens ||
      VAR_6->level->sens > VAR_5->p_levels.nprim)
   return -VAR_0;

  VAR_5->sym_val_to_name[VAR_1][VAR_6->level->sens - 1] = VAR_2;
 }

 return 0;
}
