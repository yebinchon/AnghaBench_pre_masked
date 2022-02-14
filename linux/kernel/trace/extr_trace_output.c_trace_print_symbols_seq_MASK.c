
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_print_flags {unsigned long mask; scalar_t__ name; } ;


 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,unsigned long) ;
 int FUNC_2 (struct trace_seq*,int ) ;
 int FUNC_3 (struct trace_seq*,scalar_t__) ;

const char *
FUNC_4(struct trace_seq *VAR_0, unsigned long VAR_1,
   const struct trace_print_flags *VAR_2)
{
 int VAR_3;
 const char *VAR_4 = FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_2[VAR_3].name; VAR_3++) {

  if (VAR_1 != VAR_2[VAR_3].mask)
   continue;

  FUNC_3(VAR_0, VAR_2[VAR_3].name);
  break;
 }

 if (VAR_4 == (const char *)(FUNC_0(VAR_0)))
  FUNC_1(VAR_0, "0x%lx", VAR_1);

 FUNC_2(VAR_0, 0);

 return VAR_4;
}
