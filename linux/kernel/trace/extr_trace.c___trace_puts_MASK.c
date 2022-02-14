
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct print_entry {unsigned long ip; char* buf; } ;
struct TYPE_4__ {struct ring_buffer* buffer; } ;
struct TYPE_5__ {int trace_flags; TYPE_1__ trace_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer*,int ,int,unsigned long,int) ;
 int FUNC_2 (TYPE_2__*,struct ring_buffer*,unsigned long,int,int,int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char**,char const*,int) ;
 int FUNC_5 () ;
 struct print_entry* FUNC_6 (struct ring_buffer_event*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(unsigned long VAR_5, const char *VAR_6, int VAR_7)
{
 struct ring_buffer_event *VAR_8;
 struct ring_buffer *VAR_9;
 struct print_entry *VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;

 if (!(VAR_2.trace_flags & VAR_0))
  return 0;

 VAR_13 = FUNC_5();

 if (FUNC_7(VAR_4 || VAR_3))
  return 0;

 VAR_12 = sizeof(*VAR_10) + VAR_7 + 2;

 FUNC_3(VAR_11);
 VAR_9 = VAR_2.trace_buffer.buffer;
 VAR_8 = FUNC_1(VAR_9, VAR_1, VAR_12,
         VAR_11, VAR_13);
 if (!VAR_8)
  return 0;

 VAR_10 = FUNC_6(VAR_8);
 VAR_10->ip = VAR_5;

 FUNC_4(&VAR_10->buf, VAR_6, VAR_7);


 if (VAR_10->buf[VAR_7 - 1] != '\n') {
  VAR_10->buf[VAR_7] = '\n';
  VAR_10->buf[VAR_7 + 1] = '\0';
 } else
  VAR_10->buf[VAR_7] = '\0';

 FUNC_0(VAR_9, VAR_8);
 FUNC_2(&VAR_2, VAR_9, VAR_11, 4, VAR_13, ((void*)0));

 return VAR_7;
}
