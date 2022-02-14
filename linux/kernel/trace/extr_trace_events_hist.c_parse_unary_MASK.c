
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int tr; } ;
struct hist_trigger_data {int dummy; } ;
struct hist_field {int flags; int type; int name; int operator; struct hist_field** operands; int fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hist_field* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct hist_field*) ;
 int FUNC_2 (struct hist_field*) ;
 struct hist_field* FUNC_3 (struct hist_trigger_data*,int *,unsigned long,char*) ;
 int FUNC_4 (struct hist_field*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct hist_field*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ) ;
 struct hist_field* FUNC_9 (struct hist_trigger_data*,struct trace_event_file*,char*,unsigned long,int *,unsigned int) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (char*,char) ;

__attribute__((used)) static struct hist_field *FUNC_12(struct hist_trigger_data *VAR_9,
          struct trace_event_file *VAR_10,
          char *VAR_11, unsigned long VAR_12,
          char *VAR_13, unsigned int VAR_14)
{
 struct hist_field *VAR_15, *VAR_16 = ((void*)0);
 unsigned long VAR_17;
 int VAR_18 = 0;
 char *VAR_19;



 if (VAR_14 > 3) {
  FUNC_7(VAR_10->tr, VAR_4, FUNC_5(VAR_11));
  VAR_18 = -VAR_0;
  goto free;
 }

 VAR_11++;

 VAR_19 = FUNC_10(VAR_11, '(');
 if (VAR_19)
  VAR_11++;
 else {
  VAR_18 = -VAR_0;
  goto free;
 }

 VAR_19 = FUNC_11(VAR_11, ')');
 if (VAR_19)
  *VAR_19 = '\0';
 else {
  VAR_18 = -VAR_0;
  goto free;
 }

 VAR_12 |= VAR_5;
 VAR_16 = FUNC_3(VAR_9, ((void*)0), VAR_12, VAR_13);
 if (!VAR_16) {
  VAR_18 = -VAR_1;
  goto free;
 }

 VAR_17 = 0;
 VAR_15 = FUNC_9(VAR_9, VAR_10, VAR_11, VAR_17, ((void*)0), ++VAR_14);
 if (FUNC_1(VAR_15)) {
  VAR_18 = FUNC_2(VAR_15);
  goto free;
 }

 VAR_16->flags |= VAR_15->flags &
  (VAR_6 | VAR_7);
 VAR_16->fn = VAR_8;
 VAR_16->operands[0] = VAR_15;
 VAR_16->operator = VAR_2;
 VAR_16->name = FUNC_6(VAR_16, 0);
 VAR_16->type = FUNC_8(VAR_15->type, VAR_3);
 if (!VAR_16->type) {
  VAR_18 = -VAR_1;
  goto free;
 }

 return VAR_16;
 free:
 FUNC_4(VAR_16, 0);
 return FUNC_0(VAR_18);
}
