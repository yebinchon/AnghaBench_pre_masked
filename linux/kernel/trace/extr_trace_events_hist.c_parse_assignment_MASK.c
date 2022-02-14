
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct hist_trigger_attrs {int map_bits; scalar_t__ n_assignments; char** assignment_str; void* clock; void* name; void* sort_key_str; void* vals_str; void* keys_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct trace_array*,int ,int ) ;
 void* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char**,char*) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct trace_array *VAR_5,
       char *VAR_6, struct hist_trigger_attrs *VAR_7)
{
 int VAR_8 = 0;

 if ((FUNC_4(VAR_6, "key=")) ||
     (FUNC_4(VAR_6, "keys="))) {
  VAR_7->keys_str = FUNC_2(VAR_6, VAR_2);
  if (!VAR_7->keys_str) {
   VAR_8 = -VAR_1;
   goto out;
  }
 } else if ((FUNC_4(VAR_6, "val=")) ||
     (FUNC_4(VAR_6, "vals=")) ||
     (FUNC_4(VAR_6, "values="))) {
  VAR_7->vals_str = FUNC_2(VAR_6, VAR_2);
  if (!VAR_7->vals_str) {
   VAR_8 = -VAR_1;
   goto out;
  }
 } else if (FUNC_4(VAR_6, "sort=")) {
  VAR_7->sort_key_str = FUNC_2(VAR_6, VAR_2);
  if (!VAR_7->sort_key_str) {
   VAR_8 = -VAR_1;
   goto out;
  }
 } else if (FUNC_4(VAR_6, "name=")) {
  VAR_7->name = FUNC_2(VAR_6, VAR_2);
  if (!VAR_7->name) {
   VAR_8 = -VAR_1;
   goto out;
  }
 } else if (FUNC_4(VAR_6, "clock=")) {
  FUNC_5(&VAR_6, "=");
  if (!VAR_6) {
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_6 = FUNC_6(VAR_6);
  VAR_7->clock = FUNC_2(VAR_6, VAR_2);
  if (!VAR_7->clock) {
   VAR_8 = -VAR_1;
   goto out;
  }
 } else if (FUNC_4(VAR_6, "size=")) {
  int VAR_9 = FUNC_3(VAR_6);

  if (VAR_9 < 0) {
   VAR_8 = VAR_9;
   goto out;
  }
  VAR_7->map_bits = VAR_9;
 } else {
  char *VAR_10;

  if (VAR_7->n_assignments == VAR_4) {
   FUNC_1(VAR_5, VAR_3, FUNC_0(VAR_6));
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_10 = FUNC_2(VAR_6, VAR_2);
  if (!VAR_10) {
   VAR_8 = -VAR_1;
   goto out;
  }

  VAR_7->assignment_str[VAR_7->n_assignments++] = VAR_10;
 }
 out:
 return VAR_8;
}
