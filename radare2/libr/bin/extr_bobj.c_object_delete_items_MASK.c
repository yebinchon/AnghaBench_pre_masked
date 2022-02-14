
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_4__ {int * binsym; int mem; int kv; int lines; int methods_ht; int classes_ht; int classes; int symbols; int strings_db; int strings; int sections; int relocs; int libs; int imports; int fields; int entries; int addr2klassmethod; } ;
typedef TYPE_1__ RBinObject ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(RBinObject *VAR_2) {
 ut32 VAR_3 = 0;
 FUNC_5 (VAR_2);
 FUNC_6 (VAR_2->addr2klassmethod);
 FUNC_3 (VAR_2->entries);
 FUNC_3 (VAR_2->fields);
 FUNC_3 (VAR_2->imports);
 FUNC_3 (VAR_2->libs);
 FUNC_4 (VAR_2->relocs, VAR_1);
 FUNC_3 (VAR_2->sections);
 FUNC_3 (VAR_2->strings);
 FUNC_2 (VAR_2->strings_db);
 FUNC_3 (VAR_2->symbols);
 FUNC_3 (VAR_2->classes);
 FUNC_1 (VAR_2->classes_ht);
 FUNC_1 (VAR_2->methods_ht);
 FUNC_3 (VAR_2->lines);
 FUNC_6 (VAR_2->kv);
 FUNC_3 (VAR_2->mem);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0 (VAR_2->binsym[VAR_3]);
 }
}
