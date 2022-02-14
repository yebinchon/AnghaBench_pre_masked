
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef int u32 ;
struct trace_event_call {int dummy; } ;
struct TYPE_2__ {struct ring_buffer* buffer; } ;
struct trace_array {TYPE_1__ trace_buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct bprint_entry {unsigned long ip; char const* fmt; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_2 (struct trace_event_call*,struct bprint_entry*,struct ring_buffer*,struct ring_buffer_event*) ;
 struct trace_event_call VAR_2 ;
 int FUNC_3 (struct trace_array*,struct ring_buffer*,unsigned long,int,int,int *) ;
 char* FUNC_4 () ;
 struct trace_array VAR_3 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct bprint_entry* FUNC_12 (struct ring_buffer_event*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int,char const*,int ) ;

int FUNC_16(unsigned long VAR_6, const char *VAR_7, va_list VAR_8)
{
 struct trace_event_call *VAR_9 = &VAR_2;
 struct ring_buffer_event *VAR_10;
 struct ring_buffer *VAR_11;
 struct trace_array *VAR_12 = &VAR_3;
 struct bprint_entry *VAR_13;
 unsigned long VAR_14;
 char *VAR_15;
 int VAR_16 = 0, VAR_17, VAR_18;

 if (FUNC_13(VAR_5 || VAR_4))
  return 0;


 FUNC_7();

 VAR_18 = FUNC_8();
 FUNC_9();

 VAR_15 = FUNC_4();
 if (!VAR_15) {
  VAR_16 = 0;
  goto out_nobuffer;
 }

 VAR_16 = FUNC_15((u32 *)VAR_15, VAR_1/sizeof(int), VAR_7, VAR_8);

 if (VAR_16 > VAR_1/sizeof(int) || VAR_16 < 0)
  goto out;

 FUNC_5(VAR_14);
 VAR_17 = sizeof(*VAR_13) + sizeof(u32) * VAR_16;
 VAR_11 = VAR_12->trace_buffer.buffer;
 VAR_10 = FUNC_1(VAR_11, VAR_0, VAR_17,
         VAR_14, VAR_18);
 if (!VAR_10)
  goto out;
 VAR_13 = FUNC_12(VAR_10);
 VAR_13->ip = VAR_6;
 VAR_13->fmt = VAR_7;

 FUNC_6(VAR_13->buf, VAR_15, sizeof(u32) * VAR_16);
 if (!FUNC_2(VAR_9, VAR_13, VAR_11, VAR_10)) {
  FUNC_0(VAR_11, VAR_10);
  FUNC_3(VAR_12, VAR_11, VAR_14, 6, VAR_18, ((void*)0));
 }

out:
 FUNC_11();

out_nobuffer:
 FUNC_10();
 FUNC_14();

 return VAR_16;
}
