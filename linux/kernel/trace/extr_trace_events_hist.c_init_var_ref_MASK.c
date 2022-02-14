
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int hist_data; int idx; } ;
struct hist_field {int flags; char* system; char* event_name; char* name; char* type; TYPE_1__ var; int is_signed; int size; int hist_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct hist_field *VAR_4,
   struct hist_field *VAR_5,
   char *VAR_6, char *VAR_7)
{
 int VAR_8 = 0;

 VAR_4->var.idx = VAR_5->var.idx;
 VAR_4->var.hist_data = VAR_5->hist_data;
 VAR_4->size = VAR_5->size;
 VAR_4->is_signed = VAR_5->is_signed;
 VAR_4->flags |= VAR_5->flags &
  (VAR_2 | VAR_3);

 if (VAR_6) {
  VAR_4->system = FUNC_1(VAR_6, VAR_1);
  if (!VAR_4->system)
   return -VAR_0;
 }

 if (VAR_7) {
  VAR_4->event_name = FUNC_1(VAR_7, VAR_1);
  if (!VAR_4->event_name) {
   VAR_8 = -VAR_0;
   goto free;
  }
 }

 if (VAR_5->var.name) {
  VAR_4->name = FUNC_1(VAR_5->var.name, VAR_1);
  if (!VAR_4->name) {
   VAR_8 = -VAR_0;
   goto free;
  }
 } else if (VAR_5->name) {
  VAR_4->name = FUNC_1(VAR_5->name, VAR_1);
  if (!VAR_4->name) {
   VAR_8 = -VAR_0;
   goto free;
  }
 }

 VAR_4->type = FUNC_1(VAR_5->type, VAR_1);
 if (!VAR_4->type) {
  VAR_8 = -VAR_0;
  goto free;
 }
 out:
 return VAR_8;
 free:
 FUNC_0(VAR_4->system);
 FUNC_0(VAR_4->event_name);
 FUNC_0(VAR_4->name);

 goto out;
}
