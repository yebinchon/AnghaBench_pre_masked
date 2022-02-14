
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {unsigned long long ts; } ;
struct tep_handle {int dummy; } ;
struct tep_event {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (struct trace_seq*,char*,unsigned long long,...) ;

__attribute__((used)) static void FUNC_4(struct tep_handle *VAR_0, struct trace_seq *VAR_1,
     char *VAR_2, struct tep_event *VAR_3,
     struct tep_record *VAR_4)
{
 unsigned long long VAR_5;
 char *VAR_6;
 int VAR_7 = 0, VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 1;

 if (FUNC_1(*(VAR_2 + 1)))
  VAR_7 = FUNC_0(VAR_2 + 1);
 VAR_6 = FUNC_2(VAR_2, '.');
 if (VAR_6 && FUNC_1(*(VAR_6 + 1)))
  VAR_9 = FUNC_0(VAR_6 + 1);
 VAR_5 = VAR_4->ts;
 if (VAR_9) {
  VAR_5 += VAR_9 / 2;
  VAR_5 /= VAR_9;
 }
 VAR_8 = VAR_7;
 while (VAR_8--)
  VAR_10 *= 10;

 if (VAR_10 > 1 && VAR_10 < VAR_5)
  FUNC_3(VAR_1, "%5llu.%0*llu", VAR_5 / VAR_10, VAR_7, VAR_5 % VAR_10);
 else
  FUNC_3(VAR_1, "%12llu\n", VAR_5);
}
