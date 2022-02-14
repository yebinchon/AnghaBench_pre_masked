
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_export {int next; } ;
struct ring_buffer_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct trace_export* FUNC_2 (int ) ;
 int FUNC_3 (struct trace_export*,struct ring_buffer_event*) ;

__attribute__((used)) static void FUNC_4(struct ring_buffer_event *VAR_1)
{
 struct trace_export *VAR_2;

 FUNC_0();

 VAR_2 = FUNC_2(VAR_0);
 while (VAR_2) {
  FUNC_3(VAR_2, VAR_1);
  VAR_2 = FUNC_2(VAR_2->next);
 }

 FUNC_1();
}
