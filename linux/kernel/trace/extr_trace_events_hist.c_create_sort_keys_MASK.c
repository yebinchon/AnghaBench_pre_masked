
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracing_map_sort_key {int descending; unsigned int field_idx; } ;
struct hist_trigger_data {int n_sort_keys; unsigned int n_fields; struct hist_field** fields; struct tracing_map_sort_key* sort_keys; TYPE_1__* attrs; } ;
struct hist_field {int flags; } ;
struct TYPE_2__ {char* sort_key_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 char* FUNC_0 (struct hist_field*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(struct hist_trigger_data *VAR_3)
{
 char *VAR_4 = VAR_3->attrs->sort_key_str;
 struct tracing_map_sort_key *VAR_5;
 int VAR_6, VAR_7 = 0;
 unsigned int VAR_8, VAR_9, VAR_10;

 VAR_3->n_sort_keys = 1;

 if (!VAR_4)
  goto out;

 FUNC_3(&VAR_4, "=");
 if (!VAR_4) {
  VAR_7 = -VAR_0;
  goto out;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct hist_field *VAR_11;
  char *VAR_12, *VAR_13;
  const char *VAR_14;

  VAR_5 = &VAR_3->sort_keys[VAR_8];

  VAR_12 = FUNC_3(&VAR_4, ",");
  if (!VAR_12) {
   if (VAR_8 == 0)
    VAR_7 = -VAR_0;
   break;
  }

  if ((VAR_8 == VAR_2 - 1) && VAR_4) {
   VAR_7 = -VAR_0;
   break;
  }

  VAR_13 = FUNC_3(&VAR_12, ".");
  if (!VAR_13) {
   VAR_7 = -VAR_0;
   break;
  }

  if (FUNC_2(VAR_13, "hitcount") == 0) {
   VAR_6 = FUNC_1(VAR_12);
   if (VAR_6 < 0) {
    VAR_7 = VAR_6;
    break;
   }
   VAR_5->descending = VAR_6;
   continue;
  }

  for (VAR_9 = 1, VAR_10 = 1; VAR_9 < VAR_3->n_fields; VAR_9++) {
   unsigned int VAR_15;

   VAR_11 = VAR_3->fields[VAR_9];
   if (VAR_11->flags & VAR_1)
    continue;

   VAR_15 = VAR_10++;

   VAR_14 = FUNC_0(VAR_11, 0);

   if (FUNC_2(VAR_13, VAR_14) == 0) {
    VAR_5->field_idx = VAR_15;
    VAR_6 = FUNC_1(VAR_12);
    if (VAR_6 < 0) {
     VAR_7 = VAR_6;
     goto out;
    }
    VAR_5->descending = VAR_6;
    break;
   }
  }
  if (VAR_9 == VAR_3->n_fields) {
   VAR_7 = -VAR_0;
   break;
  }
 }

 VAR_3->n_sort_keys = VAR_8;
 out:
 return VAR_7;
}
