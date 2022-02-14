
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* val; } ;
typedef TYPE_1__ PQconninfoOption ;
typedef int PQExpBuffer ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static PQconninfoOption *
FUNC_7(PQconninfoOption *VAR_0,
      const char *VAR_1, const char *VAR_2,
      PQExpBuffer VAR_3, bool VAR_4,
      bool VAR_5)
{
 PQconninfoOption *VAR_6;
 char *VAR_7;






 if (FUNC_5(VAR_1, "requiressl") == 0)
 {
  VAR_1 = "sslmode";
  if (VAR_2[0] == '1')
   VAR_2 = "require";
  else
   VAR_2 = "prefer";
 }

 VAR_6 = FUNC_0(VAR_0, VAR_1);
 if (VAR_6 == ((void*)0))
 {
  if (!VAR_4)
   FUNC_4(VAR_3,
         FUNC_3("invalid connection option \"%s\"\n"),
         VAR_1);
  return ((void*)0);
 }

 if (VAR_5)
 {
  VAR_7 = FUNC_1(VAR_2, VAR_3);
  if (VAR_7 == ((void*)0))

   return ((void*)0);
 }
 else
 {
  VAR_7 = FUNC_6(VAR_2);
  if (VAR_7 == ((void*)0))
  {
   FUNC_4(VAR_3, FUNC_3("out of memory\n"));
   return ((void*)0);
  }
 }

 if (VAR_6->val)
  FUNC_2(VAR_6->val);
 VAR_6->val = VAR_7;

 return VAR_6;
}
