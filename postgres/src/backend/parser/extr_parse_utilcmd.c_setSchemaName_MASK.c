
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_2, char **VAR_3)
{
 if (*VAR_3 == ((void*)0))
  *VAR_3 = VAR_2;
 else if (FUNC_3(VAR_2, *VAR_3) != 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("CREATE specifies a schema (%s) "
      "different from the one being created (%s)",
      *VAR_3, VAR_2)));
}
