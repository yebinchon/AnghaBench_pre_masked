
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct trace_event_call {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct print_entry {unsigned long ip; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_2 (struct trace_event_call*,struct print_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct trace_event_call VAR_2 ;
 int FUNC_3 (int *,struct ring_buffer*,unsigned long,int,int,int *) ;
 char* FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct print_entry* FUNC_12 (struct ring_buffer_event*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 () ;
 int FUNC_14 (char*,int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_15(struct ring_buffer *VAR_6,
        unsigned long VAR_7, const char *VAR_8, va_list VAR_9)
{
 struct trace_event_call *VAR_10 = &VAR_2;
 struct ring_buffer_event *VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14;
 struct print_entry *VAR_15;
 unsigned long VAR_16;
 char *VAR_17;

 if (VAR_4 || VAR_5)
  return 0;


 FUNC_7();

 VAR_14 = FUNC_8();
 FUNC_9();


 VAR_17 = FUNC_4();
 if (!VAR_17) {
  VAR_12 = 0;
  goto out_nobuffer;
 }

 VAR_12 = FUNC_14(VAR_17, VAR_0, VAR_8, VAR_9);

 FUNC_5(VAR_16);
 VAR_13 = sizeof(*VAR_15) + VAR_12 + 1;
 VAR_11 = FUNC_1(VAR_6, VAR_1, VAR_13,
         VAR_16, VAR_14);
 if (!VAR_11)
  goto out;
 VAR_15 = FUNC_12(VAR_11);
 VAR_15->ip = VAR_7;

 FUNC_6(&VAR_15->buf, VAR_17, VAR_12 + 1);
 if (!FUNC_2(VAR_10, VAR_15, VAR_6, VAR_11)) {
  FUNC_0(VAR_6, VAR_11);
  FUNC_3(&VAR_3, VAR_6, VAR_16, 6, VAR_14, ((void*)0));
 }

out:
 FUNC_11();

out_nobuffer:
 FUNC_10();
 FUNC_13();

 return VAR_12;
}
