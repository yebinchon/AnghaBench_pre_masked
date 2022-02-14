
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * funcs; } ;
struct trace_event_call {TYPE_2__ event; int * tp; struct synth_event* data; TYPE_1__* class; int flags; } ;
struct TYPE_4__ {int probe; int reg; int define_fields; int fields; int system; } ;
struct synth_event {int * tp; int name; TYPE_1__ class; struct trace_event_call call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct trace_event_call*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct trace_event_call*) ;
 int FUNC_9 (struct trace_event_call*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct trace_event_call*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct synth_event *VAR_9)
{
 struct trace_event_call *VAR_10 = &VAR_9->call;
 int VAR_11 = 0;

 VAR_9->call.class = &VAR_9->class;
 VAR_9->class.system = FUNC_4(VAR_3, VAR_2);
 if (!VAR_9->class.system) {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_9->tp = FUNC_3(VAR_9->name);
 if (FUNC_1(VAR_9->tp)) {
  VAR_11 = FUNC_2(VAR_9->tp);
  VAR_9->tp = ((void*)0);
  goto out;
 }

 FUNC_0(&VAR_10->class->fields);
 VAR_10->event.funcs = &VAR_6;
 VAR_10->class->define_fields = VAR_5;

 VAR_11 = FUNC_6(&VAR_10->event);
 if (!VAR_11) {
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_10->flags = VAR_4;
 VAR_10->class->reg = VAR_8;
 VAR_10->class->probe = VAR_7;
 VAR_10->data = VAR_9;
 VAR_10->tp = VAR_9->tp;

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11) {
  FUNC_5("Failed to register synthetic event: %s\n",
   FUNC_9(VAR_10));
  goto err;
 }

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11 < 0) {
  FUNC_10(VAR_10);
  goto err;
 }
 out:
 return VAR_11;
 err:
 FUNC_11(&VAR_10->event);
 goto out;
}
