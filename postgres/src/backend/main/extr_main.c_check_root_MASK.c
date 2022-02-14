
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0)
{

 if (FUNC_1() == 0)
 {
  FUNC_4("\"root\" execution of the PostgreSQL server is not permitted.\n"
      "The server must be started under an unprivileged user ID to prevent\n"
      "possible system security compromise.  See the documentation for\n"
      "more information on how to properly start the server.\n");
  FUNC_0(1);
 }
 if (FUNC_2() != FUNC_1())
 {
  FUNC_4("%s: real and effective user IDs must match\n",
      VAR_0);
  FUNC_0(1);
 }
}
