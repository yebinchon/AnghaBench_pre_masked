
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct tracing_map_elt {struct hist_elt_data* private_data; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {unsigned int idx; } ;
struct hist_field {int flags; TYPE_1__ var; scalar_t__ (* fn ) (struct hist_field*,struct tracing_map_elt*,struct ring_buffer_event*,void*) ;} ;
struct hist_elt_data {char** field_var_str; } ;
struct field_var {struct hist_field* val; struct hist_field* var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (struct hist_field*,struct tracing_map_elt*,struct ring_buffer_event*,void*) ;
 int FUNC_2 (struct tracing_map_elt*,unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct tracing_map_elt *VAR_2,
           struct ring_buffer_event *VAR_3,
           void *VAR_4,
           struct field_var **VAR_5,
           unsigned int VAR_6,
           unsigned int VAR_7)
{
 struct hist_elt_data *VAR_8 = VAR_2->private_data;
 unsigned int VAR_9, VAR_10, VAR_11;
 u64 VAR_12;

 for (VAR_9 = 0, VAR_10 = VAR_7; VAR_9 < VAR_6; VAR_9++) {
  struct field_var *VAR_13 = VAR_5[VAR_9];
  struct hist_field *VAR_14 = VAR_13->var;
  struct hist_field *VAR_15 = VAR_13->val;

  VAR_12 = VAR_15->fn(VAR_15, VAR_2, VAR_3, VAR_4);
  VAR_11 = VAR_14->var.idx;

  if (VAR_15->flags & VAR_0) {
   char *VAR_16 = VAR_8->field_var_str[VAR_10++];
   char *VAR_17 = (char *)(uintptr_t)VAR_12;

   FUNC_0(VAR_16, VAR_17, VAR_1);
   VAR_12 = (u64)(uintptr_t)VAR_16;
  }
  FUNC_2(VAR_2, VAR_11, VAR_12);
 }
}
