
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_event_file {struct trace_event_call* event_call; } ;
struct trace_event_call {TYPE_1__* class; } ;
struct TYPE_2__ {char* system; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,char*,char const*,char const*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 char* FUNC_2 (struct trace_event_call*) ;

__attribute__((used)) static void FUNC_3(struct trace_event_file *VAR_3, char *VAR_4)
{
 const char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 struct trace_event_call *VAR_7;

 if (!VAR_4)
  return;

 FUNC_1(VAR_1, VAR_4, VAR_0 - 1);

 if (VAR_3) {
  VAR_7 = VAR_3->event_call;

  VAR_5 = VAR_7->class->system;
  if (VAR_5) {
   VAR_6 = FUNC_2(VAR_7);
   if (!VAR_6)
    VAR_5 = ((void*)0);
  }
 }

 if (VAR_5)
  FUNC_0(VAR_2, VAR_0, "hist:%s:%s", VAR_5, VAR_6);
}
