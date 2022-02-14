
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_4, 1);


 if (!(VAR_6 == VAR_5 ||
    VAR_6 == VAR_0 ||
    VAR_6 == -1 ||



    VAR_5 == VAR_0))
 {
  FUNC_4("encoding mismatch");
  FUNC_1(VAR_3,
    FUNC_0("The encoding you selected (%s) and the encoding that the\n"
      "selected locale uses (%s) do not match.  This would lead to\n"
      "misbehavior in various character string processing functions.\n"
      "Rerun %s and either do not specify an encoding explicitly,\n"
      "or choose a matching combination.\n"),
    FUNC_2(VAR_5),
    FUNC_2(VAR_6),
    VAR_2);
  return 0;
 }
 return 1;
}
