
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct bputs_entry {unsigned long ip; char const* str; } ;
struct TYPE_4__ {struct ring_buffer* buffer; } ;
struct TYPE_5__ {int trace_flags; TYPE_1__ trace_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_2 (TYPE_2__*,struct ring_buffer*,unsigned long,int,int,int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 struct bputs_entry* FUNC_5 (struct ring_buffer_event*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(unsigned long VAR_5, const char *VAR_6)
{
 struct ring_buffer_event *VAR_7;
 struct ring_buffer *VAR_8;
 struct bputs_entry *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = sizeof(struct bputs_entry);
 int VAR_12;

 if (!(VAR_2.trace_flags & VAR_1))
  return 0;

 VAR_12 = FUNC_4();

 if (FUNC_6(VAR_4 || VAR_3))
  return 0;

 FUNC_3(VAR_10);
 VAR_8 = VAR_2.trace_buffer.buffer;
 VAR_7 = FUNC_1(VAR_8, VAR_0, VAR_11,
         VAR_10, VAR_12);
 if (!VAR_7)
  return 0;

 VAR_9 = FUNC_5(VAR_7);
 VAR_9->ip = VAR_5;
 VAR_9->str = VAR_6;

 FUNC_0(VAR_8, VAR_7);
 FUNC_2(&VAR_2, VAR_8, VAR_10, 4, VAR_12, ((void*)0));

 return 1;
}
