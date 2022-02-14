
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int buffer_size; int len; scalar_t__ buffer; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(struct trace_seq *VAR_0, const char *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = FUNC_3(VAR_1);

 while (VAR_2 > ((VAR_0->buffer_size - 1) - VAR_0->len))
  FUNC_1(VAR_0);

 FUNC_0(VAR_0);

 FUNC_2(VAR_0->buffer + VAR_0->len, VAR_1, VAR_2);
 VAR_0->len += VAR_2;

 return VAR_2;
}
