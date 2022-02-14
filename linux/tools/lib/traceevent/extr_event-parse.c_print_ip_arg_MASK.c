
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_print_arg {int dummy; } ;
struct tep_event {int dummy; } ;


 int FUNC_0 (struct trace_seq*,char const*,char,void*,int,struct tep_event*,struct tep_print_arg*) ;
 int FUNC_1 (struct trace_seq*,char const*,char,void*,int,struct tep_event*,struct tep_print_arg*) ;
 int FUNC_2 (struct trace_seq*,char const*,char,void*,int,struct tep_event*,struct tep_print_arg*) ;

__attribute__((used)) static int FUNC_3(struct trace_seq *VAR_0, const char *VAR_1,
   void *VAR_2, int VAR_3, struct tep_event *VAR_4,
   struct tep_print_arg *VAR_5)
{
 char VAR_6 = *VAR_1;
 char VAR_7;
 int VAR_8 = 0;

 VAR_1++;
 VAR_8++;

 VAR_7 = *VAR_1;
 VAR_1++;
 VAR_8++;

 switch (VAR_7) {
 case '4':
  VAR_8 += FUNC_1(VAR_0, VAR_1, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 case '6':
  VAR_8 += FUNC_2(VAR_0, VAR_1, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 case 'S':
  VAR_8 += FUNC_0(VAR_0, VAR_1, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 default:
  return 0;
 }

 return VAR_8;
}
