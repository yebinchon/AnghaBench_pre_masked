
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_5__ {size_t num_bits; size_t num_fields; TYPE_1__* fields; } ;
typedef TYPE_2__ gdbr_xml_flags_t ;
struct TYPE_4__ {int sz; size_t bit_num; int * name; } ;


 int FUNC_0 (char*,char,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, const gdbr_xml_flags_t *VAR_1) {
 bool VAR_2[26] = { 0 };
 ut32 VAR_3, VAR_4;
 FUNC_0 (VAR_0, '.', VAR_1->num_bits);
 VAR_0[VAR_1->num_bits] = '\0';
 for (VAR_3 = 0; VAR_3 < VAR_1->num_fields; VAR_3++) {

  if (VAR_1->fields[VAR_3].sz != 1) {
   continue;
  }



  VAR_4 = FUNC_1 (VAR_1->fields[VAR_3].name[0]) - 'a';
  if (VAR_2[VAR_4]) {
   continue;
  }
  VAR_2[VAR_4] = 1;
  VAR_0[VAR_1->fields[VAR_3].bit_num] = 'a' + VAR_4;
 }
}
