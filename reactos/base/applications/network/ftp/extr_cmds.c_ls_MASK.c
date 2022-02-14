
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,char const*,char const*,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

void FUNC_6(int VAR_2, const char *VAR_3[])
{
 const char *VAR_4;

 if (VAR_2 < 2)
  VAR_2++, VAR_3[1] = ((void*)0);
 if (VAR_2 < 3)
  VAR_2++, VAR_3[2] = "-";
 if (VAR_2 > 3) {
  FUNC_3("usage: %s remote-directory local-file\n", VAR_3[0]);
  (void) FUNC_1(VAR_1);
  VAR_0 = -1;
  return;
 }
 VAR_4 = VAR_3[0][0] == 'n' ? "NLST" : "LIST";

 if (FUNC_5(VAR_3[2], "-") && !FUNC_2(&VAR_3[2])) {
  VAR_0 = -1;
  return;
 }
 if (FUNC_5(VAR_3[2], "-") && *VAR_3[2] != '|')
  if (!FUNC_2(&VAR_3[2]) || !FUNC_0("output to local-file:", VAR_3[2])) {
   VAR_0 = -1;
   return;
 }
 FUNC_4(VAR_4, VAR_3[2], VAR_3[1], "w", 0);
}
