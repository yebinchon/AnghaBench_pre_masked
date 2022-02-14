
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hist_trigger_data {int dummy; } ;
struct TYPE_2__ {void* name; } ;
struct hist_field {int size; char* type; unsigned long flags; TYPE_1__ var; struct ftrace_event_field* field; int fn; int is_signed; struct hist_field** operands; struct hist_trigger_data* hist_data; } ;
struct ftrace_event_field {char* type; scalar_t__ filter_type; int size; int is_signed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hist_field*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (struct ftrace_event_field*) ;
 scalar_t__ FUNC_3 (struct ftrace_event_field*) ;
 void* FUNC_4 (char*,int ) ;
 struct hist_field* FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static struct hist_field *FUNC_7(struct hist_trigger_data *VAR_22,
         struct ftrace_event_field *VAR_23,
         unsigned long VAR_24,
         char *VAR_25)
{
 struct hist_field *VAR_26;

 if (VAR_23 && FUNC_2(VAR_23))
  return ((void*)0);

 VAR_26 = FUNC_5(sizeof(struct hist_field), VAR_2);
 if (!VAR_26)
  return ((void*)0);

 VAR_26->hist_data = VAR_22;

 if (VAR_24 & VAR_5 || VAR_24 & VAR_3)
  goto out;

 if (VAR_24 & VAR_11) {
  VAR_26->fn = VAR_21;
  goto out;
 }

 if (VAR_24 & VAR_6) {
  VAR_26->fn = VAR_13;
  VAR_26->size = sizeof(u64);
  VAR_26->type = FUNC_4("u64", VAR_2);
  if (!VAR_26->type)
   goto free;
  goto out;
 }

 if (VAR_24 & VAR_8) {
  VAR_26->fn = VAR_17;
  goto out;
 }

 if (VAR_24 & VAR_7) {
  unsigned long VAR_27 = VAR_24 & ~VAR_7;
  VAR_26->fn = VAR_16;
  VAR_26->operands[0] = FUNC_7(VAR_22, VAR_23, VAR_27, ((void*)0));
  VAR_26->size = VAR_26->operands[0]->size;
  VAR_26->type = FUNC_4(VAR_26->operands[0]->type, VAR_2);
  if (!VAR_26->type)
   goto free;
  goto out;
 }

 if (VAR_24 & VAR_10) {
  VAR_26->fn = VAR_20;
  VAR_26->size = sizeof(u64);
  VAR_26->type = FUNC_4("u64", VAR_2);
  if (!VAR_26->type)
   goto free;
  goto out;
 }

 if (VAR_24 & VAR_4) {
  VAR_26->fn = VAR_14;
  VAR_26->size = sizeof(int);
  VAR_26->type = FUNC_4("unsigned int", VAR_2);
  if (!VAR_26->type)
   goto free;
  goto out;
 }

 if (FUNC_0(!VAR_23))
  goto out;

 if (FUNC_3(VAR_23)) {
  VAR_24 |= VAR_9;

  VAR_26->size = VAR_12;
  VAR_26->type = FUNC_4(VAR_23->type, VAR_2);
  if (!VAR_26->type)
   goto free;

  if (VAR_23->filter_type == VAR_1)
   VAR_26->fn = VAR_19;
  else if (VAR_23->filter_type == VAR_0)
   VAR_26->fn = VAR_15;
  else
   VAR_26->fn = VAR_18;
 } else {
  VAR_26->size = VAR_23->size;
  VAR_26->is_signed = VAR_23->is_signed;
  VAR_26->type = FUNC_4(VAR_23->type, VAR_2);
  if (!VAR_26->type)
   goto free;

  VAR_26->fn = FUNC_6(VAR_23->size,
       VAR_23->is_signed);
  if (!VAR_26->fn) {
   FUNC_1(VAR_26, 0);
   return ((void*)0);
  }
 }
 out:
 VAR_26->field = VAR_23;
 VAR_26->flags = VAR_24;

 if (VAR_25) {
  VAR_26->var.name = FUNC_4(VAR_25, VAR_2);
  if (!VAR_26->var.name)
   goto free;
 }

 return VAR_26;
 free:
 FUNC_1(VAR_26, 0);
 return ((void*)0);
}
