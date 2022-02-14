
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (void**,size_t) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 size_t VAR_0;
 size_t VAR_1 = 20;
 void *VAR_2[VAR_1];
 const char *VAR_3 = "addr2line -s -e /proc/$PPID/exe -fpai";
 const char *VAR_4 = "|cat -n 1>&2";
 char VAR_5[FUNC_2(VAR_3) + FUNC_2(VAR_4) +

   VAR_1 * (((sizeof(void *)) * 2) + 1) +

   1];
 char *VAR_6;

 VAR_1 = FUNC_0(VAR_2, VAR_1);
 VAR_6 = &VAR_5[0];
 VAR_6 += FUNC_1(VAR_6, "%s", VAR_3);





 for (VAR_0 = 2; VAR_0 < VAR_1; VAR_0++)
  VAR_6 += FUNC_1(VAR_6, " %lx", ((unsigned long) VAR_2[VAR_0]) - 1);
 VAR_6 += FUNC_1(VAR_6, "%s", VAR_4);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-result"
 FUNC_3(VAR_5);
#pragma GCC diagnostic pop
}
