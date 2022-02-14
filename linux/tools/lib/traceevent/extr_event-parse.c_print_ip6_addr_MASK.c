
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 int FUNC_0 (struct trace_seq*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct trace_seq *VAR_0, char VAR_1, unsigned char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3 += 2) {
  FUNC_0(VAR_0, "%02x%02x", VAR_2[VAR_3], VAR_2[VAR_3+1]);
  if (VAR_1 == 'I' && VAR_3 < 14)
   FUNC_0(VAR_0, ":");
 }
}
