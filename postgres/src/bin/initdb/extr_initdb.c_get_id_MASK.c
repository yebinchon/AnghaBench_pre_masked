
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_7(void)
{
 const char *VAR_2;


 if (FUNC_4() == 0)
 {
  FUNC_5("cannot be run as root");
  FUNC_2(VAR_1,
    "%s", FUNC_0("Please log in (using, e.g., \"su\") as the (unprivileged) user that will\n"
      "own the server process.\n"));
  FUNC_1(1);
 }


 VAR_2 = FUNC_3(VAR_0);

 return FUNC_6(VAR_2);
}
