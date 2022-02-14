
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {char* buffer; scalar_t__ buffer_size; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 char* FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct trace_seq *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_1(VAR_2->buffer, VAR_2->buffer_size + VAR_0);
 if (FUNC_0(!VAR_3, "Can't allocate trace_seq buffer memory")) {
  VAR_2->state = VAR_1;
  return;
 }

 VAR_2->buffer = VAR_3;
 VAR_2->buffer_size += VAR_0;
}
