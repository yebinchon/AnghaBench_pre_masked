
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* keyword; char* val; } ;
typedef TYPE_1__ PQconninfoOption ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (char*,char**) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(int VAR_1, char *VAR_2[])
{
 PQconninfoOption *VAR_3;
 PQconninfoOption *VAR_4;
 PQconninfoOption *VAR_5;
 PQconninfoOption *VAR_6;
 char *VAR_7 = ((void*)0);
 bool VAR_8 = 1;

 if (VAR_1 != 2)
  return 1;

 VAR_3 = FUNC_1(VAR_2[1], &VAR_7);
 if (VAR_3 == ((void*)0))
 {
  FUNC_2(VAR_0, "uri-regress: %s", VAR_7);
  return 1;
 }

 VAR_4 = FUNC_0();
 if (VAR_4 == ((void*)0))
 {
  FUNC_2(VAR_0, "uri-regress: cannot fetch default options\n");
  return 1;
 }







 for (VAR_5 = VAR_3, VAR_6 = VAR_4; VAR_5->keyword; ++VAR_5, ++VAR_6)
 {
  if (VAR_5->val != ((void*)0))
  {
   if (VAR_6->val == ((void*)0) || FUNC_4(VAR_5->val, VAR_6->val) != 0)
    FUNC_3("%s='%s' ", VAR_5->keyword, VAR_5->val);
   if (*VAR_5->val &&
    (FUNC_4(VAR_5->keyword, "hostaddr") == 0 ||
     (FUNC_4(VAR_5->keyword, "host") == 0 && *VAR_5->val != '/')))
   {
    VAR_8 = 0;
   }
  }
 }

 if (VAR_8)
  FUNC_3("(local)\n");
 else
  FUNC_3("(inet)\n");

 return 0;
}
