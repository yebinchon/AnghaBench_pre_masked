
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_array {int trace_flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (unsigned long long,struct trace_seq*) ;
 int FUNC_2 (struct trace_seq*,char*,int ) ;
 int FUNC_3 (struct trace_seq*,char*) ;

__attribute__((used)) static void
FUNC_4(struct trace_array *VAR_4, unsigned long long VAR_5,
       struct trace_seq *VAR_6, u32 VAR_7)
{
 if (!(VAR_7 & VAR_0) ||
     !(VAR_4->trace_flags & VAR_3))
  return;


 switch (VAR_7 & VAR_1) {
 case 129:
  FUNC_3(VAR_6, "              |  ");
  return;
 case 128:
  FUNC_3(VAR_6, "  ");
  return;
 case 130:
  FUNC_3(VAR_6, " |");
  return;
 }


 if (VAR_7 & VAR_2)
  FUNC_2(VAR_6, "%c ", FUNC_0(VAR_5));
 else
  FUNC_3(VAR_6, "  ");

 FUNC_1(VAR_5, VAR_6);
 FUNC_3(VAR_6, "|  ");
}
