
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct trace_seq {int dummy; } ;
struct trace_iterator {struct trace_seq seq; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,char*) ;
 int FUNC_2 (struct trace_seq*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct trace_iterator *VAR_0, char *VAR_1,
       char *VAR_2, va_list VAR_3)
{
 struct trace_seq *VAR_4 = &VAR_0->seq;

 FUNC_1(VAR_4, "%s: ", VAR_1);
 FUNC_2(VAR_4, VAR_2, VAR_3);

 return FUNC_0(VAR_4);
}
