
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 char* VAR_4 ;
 int VAR_5 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_6)
{
 if (FUNC_3(VAR_6, VAR_2 | VAR_0 | VAR_1) < 0)
 {
  FUNC_2(VAR_5, FUNC_0("%s: could not create directory \"%s\": %s\n"),
    VAR_4, VAR_6, FUNC_4(VAR_3));
  FUNC_1(2);
 }
}
