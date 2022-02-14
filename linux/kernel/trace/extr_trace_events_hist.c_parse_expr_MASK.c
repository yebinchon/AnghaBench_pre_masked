
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int tr; } ;
struct hist_trigger_data {int dummy; } ;
struct hist_field {unsigned long flags; int read_once; int operator; int fn; int type; int name; struct hist_field** operands; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hist_field* FUNC_0 (int) ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_1 (struct hist_field*) ;
 int FUNC_2 (struct hist_field*) ;
 int FUNC_3 (int ,struct hist_field*,struct hist_field*) ;
 int FUNC_4 (char*) ;
 struct hist_field* FUNC_5 (struct hist_trigger_data*,int *,unsigned long,char*) ;
 int FUNC_6 (struct hist_field*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct hist_field*,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,int ) ;
 struct hist_field* FUNC_11 (struct hist_trigger_data*,struct trace_event_file*,char*,unsigned long*,char*) ;
 struct hist_field* FUNC_12 (struct hist_trigger_data*,struct trace_event_file*,char*,unsigned long,char*,unsigned int) ;
 char* FUNC_13 (char**,char*) ;

__attribute__((used)) static struct hist_field *FUNC_14(struct hist_trigger_data *VAR_11,
         struct trace_event_file *VAR_12,
         char *VAR_13, unsigned long VAR_14,
         char *VAR_15, unsigned int VAR_16)
{
 struct hist_field *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 unsigned long VAR_20;
 int VAR_21, VAR_22 = -VAR_0;
 char *VAR_23, *VAR_24;

 if (VAR_16 > 3) {
  FUNC_9(VAR_12->tr, VAR_5, FUNC_7(VAR_13));
  return FUNC_0(-VAR_0);
 }

 VAR_21 = FUNC_4(VAR_13);

 if (VAR_21 == VAR_2)
  return FUNC_11(VAR_11, VAR_12, VAR_13, &VAR_14, VAR_15);

 if (VAR_21 == VAR_3)
  return FUNC_12(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, ++VAR_16);

 switch (VAR_21) {
 case 129:
  VAR_23 = "-";
  break;
 case 128:
  VAR_23 = "+";
  break;
 default:
  goto free;
 }

 VAR_24 = FUNC_13(&VAR_13, VAR_23);
 if (!VAR_24 || !VAR_13)
  goto free;

 VAR_20 = 0;
 VAR_17 = FUNC_11(VAR_11, VAR_12, VAR_24,
         &VAR_20, ((void*)0));
 if (FUNC_1(VAR_17)) {
  VAR_22 = FUNC_2(VAR_17);
  VAR_17 = ((void*)0);
  goto free;
 }


 VAR_20 = 0;
 VAR_18 = FUNC_14(VAR_11, VAR_12, VAR_13, VAR_20, ((void*)0), ++VAR_16);
 if (FUNC_1(VAR_18)) {
  VAR_22 = FUNC_2(VAR_18);
  VAR_18 = ((void*)0);
  goto free;
 }

 VAR_22 = FUNC_3(VAR_12->tr, VAR_17, VAR_18);
 if (VAR_22)
  goto free;

 VAR_14 |= VAR_6;

 VAR_14 |= VAR_17->flags &
  (VAR_7 | VAR_8);

 VAR_19 = FUNC_5(VAR_11, ((void*)0), VAR_14, VAR_15);
 if (!VAR_19) {
  VAR_22 = -VAR_1;
  goto free;
 }

 VAR_17->read_once = 1;
 VAR_18->read_once = 1;

 VAR_19->operands[0] = VAR_17;
 VAR_19->operands[1] = VAR_18;
 VAR_19->operator = VAR_21;
 VAR_19->name = FUNC_8(VAR_19, 0);
 VAR_19->type = FUNC_10(VAR_17->type, VAR_4);
 if (!VAR_19->type) {
  VAR_22 = -VAR_1;
  goto free;
 }

 switch (VAR_21) {
 case 129:
  VAR_19->fn = VAR_9;
  break;
 case 128:
  VAR_19->fn = VAR_10;
  break;
 default:
  VAR_22 = -VAR_0;
  goto free;
 }

 return VAR_19;
 free:
 FUNC_6(VAR_17, 0);
 FUNC_6(VAR_18, 0);
 FUNC_6(VAR_19, 0);

 return FUNC_0(VAR_22);
}
