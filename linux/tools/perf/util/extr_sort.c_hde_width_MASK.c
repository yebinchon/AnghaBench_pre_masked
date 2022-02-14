
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct hpp_dynamic_entry {int dynamic_len; TYPE_1__ hpp; TYPE_2__* field; } ;
struct TYPE_4__ {int size; int flags; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hpp_dynamic_entry *VAR_1)
{
 if (!VAR_1->hpp.len) {
  int VAR_2 = VAR_1->dynamic_len;
  int VAR_3 = FUNC_0(VAR_1->field->name);
  int VAR_4 = VAR_1->field->size;

  if (VAR_3 > VAR_2)
   VAR_2 = VAR_3;

  if (!(VAR_1->field->flags & VAR_0)) {

   VAR_4 = VAR_1->field->size * 2 + 2;
  }
  if (VAR_4 > VAR_2)
   VAR_2 = VAR_4;

  VAR_1->hpp.len = VAR_2;
 }
 return VAR_1->hpp.len;
}
