
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int full_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (char*,int ,int) ;

void
FUNC_11(const char *VAR_6)
{
 int VAR_7;

 if ((VAR_7 = FUNC_3(VAR_6, "postgres", VAR_1,
          VAR_2)) < 0)
 {
  char VAR_8[VAR_0];

  if (FUNC_2(VAR_6, VAR_8) < 0)
   FUNC_10(VAR_8, VAR_4, sizeof(VAR_8));

  if (VAR_7 == -1)
   FUNC_7("The program \"postgres\" is needed by %s but was not found in the\n"
       "same directory as \"%s\".\n"
       "Check your installation.",
       VAR_4, VAR_8);
  else
   FUNC_7("The program \"postgres\" was found by \"%s\"\n"
       "but was not the same version as %s.\n"
       "Check your installation.",
       VAR_8, VAR_4);
  FUNC_1(1);
 }


 FUNC_9(VAR_3, VAR_2);
 *FUNC_6(VAR_3) = '\0';
 FUNC_0(VAR_3);

 if (!VAR_5)
 {
  VAR_5 = FUNC_8(VAR_0);
  FUNC_4(VAR_2, VAR_5);
 }
 else if (!FUNC_5(VAR_5))
 {
  FUNC_7("input file location must be an absolute path");
  FUNC_1(1);
 }

 FUNC_0(VAR_5);
}
