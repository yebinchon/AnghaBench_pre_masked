
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sort_dimension {TYPE_1__* entry; } ;
struct TYPE_4__ {int elide; int level; scalar_t__ user_len; scalar_t__ len; int sort_list; int list; int free; int equal; int sort; int collapse; int cmp; int * color; int entry; int width; int header; int name; } ;
struct hpp_sort_entry {TYPE_2__ hpp; TYPE_1__* se; } ;
struct TYPE_3__ {int se_header; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hpp_sort_entry* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct hpp_sort_entry *
FUNC_3(struct sort_dimension *VAR_8, int VAR_9)
{
 struct hpp_sort_entry *VAR_10;

 VAR_10 = FUNC_1(sizeof(*VAR_10));
 if (VAR_10 == ((void*)0)) {
  FUNC_2("Memory allocation failed\n");
  return ((void*)0);
 }

 VAR_10->se = VAR_8->entry;
 VAR_10->hpp.name = VAR_8->entry->se_header;
 VAR_10->hpp.header = VAR_4;
 VAR_10->hpp.width = VAR_6;
 VAR_10->hpp.entry = VAR_2;
 VAR_10->hpp.color = ((void*)0);

 VAR_10->hpp.cmp = VAR_0;
 VAR_10->hpp.collapse = VAR_1;
 VAR_10->hpp.sort = VAR_5;
 VAR_10->hpp.equal = VAR_3;
 VAR_10->hpp.free = VAR_7;

 FUNC_0(&VAR_10->hpp.list);
 FUNC_0(&VAR_10->hpp.sort_list);
 VAR_10->hpp.elide = 0;
 VAR_10->hpp.len = 0;
 VAR_10->hpp.user_len = 0;
 VAR_10->hpp.level = VAR_9;

 return VAR_10;
}
