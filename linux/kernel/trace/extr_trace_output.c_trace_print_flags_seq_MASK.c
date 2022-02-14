
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_print_flags {char* name; unsigned long mask; } ;


 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,unsigned long) ;
 int FUNC_2 (struct trace_seq*,int ) ;
 int FUNC_3 (struct trace_seq*,char const*) ;

const char *
FUNC_4(struct trace_seq *VAR_0, const char *VAR_1,
        unsigned long VAR_2,
        const struct trace_print_flags *VAR_3)
{
 unsigned long VAR_4;
 const char *VAR_5;
 const char *VAR_6 = FUNC_0(VAR_0);
 int VAR_7, VAR_8 = 1;

 for (VAR_7 = 0; VAR_3[VAR_7].name && VAR_2; VAR_7++) {

  VAR_4 = VAR_3[VAR_7].mask;
  if ((VAR_2 & VAR_4) != VAR_4)
   continue;

  VAR_5 = VAR_3[VAR_7].name;
  VAR_2 &= ~VAR_4;
  if (!VAR_8 && VAR_1)
   FUNC_3(VAR_0, VAR_1);
  else
   VAR_8 = 0;
  FUNC_3(VAR_0, VAR_5);
 }


 if (VAR_2) {
  if (!VAR_8 && VAR_1)
   FUNC_3(VAR_0, VAR_1);
  FUNC_1(VAR_0, "0x%lx", VAR_2);
 }

 FUNC_2(VAR_0, 0);

 return VAR_6;
}
