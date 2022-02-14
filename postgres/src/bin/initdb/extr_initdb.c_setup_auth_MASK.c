
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char const* const) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_2)
{
 const char *const *VAR_3;
 static const char *const VAR_4[] = {




  "REVOKE ALL on pg_authid FROM public;\n\n",
  ((void*)0)
 };

 for (VAR_3 = VAR_4; *VAR_3 != ((void*)0); VAR_3++)
  FUNC_1(*VAR_3);

 if (VAR_0)
  FUNC_0("ALTER USER \"%s\" WITH PASSWORD E'%s';\n\n",
        VAR_1, FUNC_2(VAR_0));
}
