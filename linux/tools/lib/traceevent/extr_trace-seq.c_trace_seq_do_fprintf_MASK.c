
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int state; char* len; int buffer; } ;
typedef int FILE ;


 int FUNC_0 (struct trace_seq*) ;



 int FUNC_1 (int *,char*,char*,...) ;

int FUNC_2(struct trace_seq *VAR_0, FILE *VAR_1)
{
 FUNC_0(VAR_0);

 switch (VAR_0->state) {
 case 129:
  return FUNC_1(VAR_1, "%.*s", VAR_0->len, VAR_0->buffer);
 case 130:
  FUNC_1(VAR_1, "%s\n", "Usage of trace_seq after it was destroyed");
  break;
 case 128:
  FUNC_1(VAR_1, "%s\n", "Can't allocate trace_seq buffer memory");
  break;
 }
 return -1;
}
