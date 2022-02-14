
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int cpu; int data; } ;
struct tep_handle {int dummy; } ;
struct tep_event {int dummy; } ;
struct print_event_type {int format; } ;





 int FUNC_0 (struct tep_handle*,int ) ;
 void FUNC_1 (struct tep_handle*,struct trace_seq*,int ,struct tep_event*,struct tep_record*) ;
 int FUNC_2 (struct trace_seq*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct tep_handle *VAR_0, struct trace_seq *VAR_1,
        struct tep_record *VAR_2, struct tep_event *VAR_3,
        int VAR_4, struct print_event_type *VAR_5)
{
 int VAR_6;

 switch (VAR_4) {
 case 130:
  VAR_6 = VAR_2->cpu;
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_0, VAR_2->data);
  break;
 case 128:
  return FUNC_1(VAR_0, VAR_1, VAR_5->format, VAR_3, VAR_2);
 default:
  return;
 }
 FUNC_2(VAR_1, VAR_5->format, VAR_6);
}
