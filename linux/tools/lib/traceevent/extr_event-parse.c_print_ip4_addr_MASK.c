
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 int FUNC_0 (struct trace_seq*,char const*,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct trace_seq *VAR_0, char VAR_1, unsigned char *VAR_2)
{
 const char *VAR_3;

 if (VAR_1 == 'i')
  VAR_3 = "%03d.%03d.%03d.%03d";
 else
  VAR_3 = "%d.%d.%d.%d";

 FUNC_0(VAR_0, VAR_3, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
}
