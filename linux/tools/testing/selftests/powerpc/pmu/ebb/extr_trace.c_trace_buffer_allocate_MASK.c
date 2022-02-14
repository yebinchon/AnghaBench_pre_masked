
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace_buffer {int size; int overflow; int data; int tail; } ;


 int VAR_0 ;
 struct trace_buffer* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct trace_buffer* FUNC_1 (int *,int,int,int,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;

struct trace_buffer *FUNC_3(u64 VAR_6)
{
 struct trace_buffer *VAR_7;

 if (VAR_6 < sizeof(*VAR_7)) {
  FUNC_0(VAR_5, "Error: trace buffer too small\n");
  return ((void*)0);
 }

 VAR_7 = FUNC_1(((void*)0), VAR_6, VAR_3 | VAR_4,
    VAR_0 | VAR_2, -1, 0);
 if (VAR_7 == VAR_1) {
  FUNC_2("mmap");
  return ((void*)0);
 }

 VAR_7->size = VAR_6;
 VAR_7->tail = VAR_7->data;
 VAR_7->overflow = 0;

 return VAR_7;
}
