
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int size; int data; } ;
struct tep_event {int flags; int (* handler ) (struct trace_seq*,struct tep_record*,struct tep_event*,int ) ;int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_seq*,int ,int ,struct tep_event*) ;
 int FUNC_1 (struct trace_seq*,struct tep_record*,struct tep_event*,int ) ;
 int FUNC_2 (struct trace_seq*,int ,int ,struct tep_event*) ;
 int FUNC_3 (struct trace_seq*) ;

__attribute__((used)) static void FUNC_4(struct trace_seq *VAR_2, char *VAR_3, bool VAR_4,
        struct tep_event *VAR_5, struct tep_record *VAR_6)
{
 int VAR_7 = 1;

 if (VAR_4 || (VAR_5->flags & VAR_1))
  FUNC_2(VAR_2, VAR_6->data, VAR_6->size, VAR_5);
 else {

  if (VAR_5->handler && !(VAR_5->flags & VAR_0))
   VAR_7 = VAR_5->handler(VAR_2, VAR_6, VAR_5,
            VAR_5->context);

  if (VAR_7)
   FUNC_0(VAR_2, VAR_6->data, VAR_6->size, VAR_5);
 }

 FUNC_3(VAR_2);
}
