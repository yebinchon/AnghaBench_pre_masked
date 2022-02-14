
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int state; int * buffer; int buffer_size; scalar_t__ readpos; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;

void FUNC_1(struct trace_seq *VAR_3)
{
 VAR_3->len = 0;
 VAR_3->readpos = 0;
 VAR_3->buffer_size = VAR_0;
 VAR_3->buffer = FUNC_0(VAR_3->buffer_size);
 if (VAR_3->buffer != ((void*)0))
  VAR_3->state = VAR_1;
 else
  VAR_3->state = VAR_2;
}
