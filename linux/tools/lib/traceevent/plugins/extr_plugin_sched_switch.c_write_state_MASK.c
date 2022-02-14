
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
typedef int states ;


 int FUNC_0 (struct trace_seq*,char const) ;

__attribute__((used)) static void FUNC_1(struct trace_seq *VAR_0, int VAR_1)
{
 const char VAR_2[] = "SDTtZXxW";
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (sizeof(VAR_2) - 1); VAR_4++) {
  if (!(VAR_1 & (1 << VAR_4)))
   continue;

  if (VAR_3)
   FUNC_0(VAR_0, '|');

  VAR_3 = 1;
  FUNC_0(VAR_0, VAR_2[VAR_4]);
 }

 if (!VAR_3)
  FUNC_0(VAR_0, 'R');
}
