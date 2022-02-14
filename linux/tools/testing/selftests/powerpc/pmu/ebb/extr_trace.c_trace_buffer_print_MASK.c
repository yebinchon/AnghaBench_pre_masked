
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {int length; } ;
struct trace_buffer {void* tail; void* data; scalar_t__ overflow; int size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct trace_buffer*,void*) ;
 int FUNC_2 (struct trace_entry*,int,int*) ;

void FUNC_3(struct trace_buffer *VAR_1)
{
 struct trace_entry *VAR_2;
 int VAR_3, VAR_4;
 void *VAR_5;

 FUNC_0("Trace buffer dump:\n");
 FUNC_0("  address  %p \n", VAR_1);
 FUNC_0("  tail     %p\n", VAR_1->tail);
 FUNC_0("  size     %llu\n", VAR_1->size);
 FUNC_0("  overflow %s\n", VAR_1->overflow ? "TRUE" : "false");
 FUNC_0("  Content:\n");

 VAR_5 = VAR_1->data;

 VAR_3 = 0;
 VAR_4 = VAR_0;

 while (FUNC_1(VAR_1, VAR_5) && VAR_5 < VAR_1->tail) {
  VAR_2 = VAR_5;

  FUNC_2(VAR_2, VAR_3, &VAR_4);

  VAR_3++;
  VAR_5 = (void *)VAR_2 + sizeof(*VAR_2) + VAR_2->length;
 }
}
