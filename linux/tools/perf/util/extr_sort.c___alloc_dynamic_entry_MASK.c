
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_format_field {int name; } ;
struct TYPE_2__ {int elide; int level; scalar_t__ user_len; scalar_t__ len; int sort_list; int list; int free; int equal; void* sort; void* collapse; void* cmp; int * color; int entry; int width; int header; int name; } ;
struct hpp_dynamic_entry {TYPE_1__ hpp; scalar_t__ dynamic_len; struct tep_format_field* field; struct evsel* evsel; } ;
struct evsel {int dummy; } ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hpp_dynamic_entry* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct hpp_dynamic_entry *
FUNC_3(struct evsel *VAR_6, struct tep_format_field *VAR_7,
        int VAR_8)
{
 struct hpp_dynamic_entry *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_2("Memory allocation failed\n");
  return ((void*)0);
 }

 VAR_9->evsel = VAR_6;
 VAR_9->field = VAR_7;
 VAR_9->dynamic_len = 0;

 VAR_9->hpp.name = VAR_7->name;
 VAR_9->hpp.header = VAR_3;
 VAR_9->hpp.width = VAR_4;
 VAR_9->hpp.entry = VAR_1;
 VAR_9->hpp.color = ((void*)0);

 VAR_9->hpp.cmp = VAR_0;
 VAR_9->hpp.collapse = VAR_0;
 VAR_9->hpp.sort = VAR_0;
 VAR_9->hpp.equal = VAR_2;
 VAR_9->hpp.free = VAR_5;

 FUNC_0(&VAR_9->hpp.list);
 FUNC_0(&VAR_9->hpp.sort_list);
 VAR_9->hpp.elide = 0;
 VAR_9->hpp.len = 0;
 VAR_9->hpp.user_len = 0;
 VAR_9->hpp.level = VAR_8;

 return VAR_9;
}
