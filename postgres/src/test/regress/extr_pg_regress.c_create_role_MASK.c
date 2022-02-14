
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int str; struct TYPE_3__* next; } ;
typedef TYPE_1__ _stringlist ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const _stringlist *VAR_1)
{
 FUNC_1(FUNC_0("creating role \"%s\""), VAR_0);
 FUNC_2("postgres", "CREATE ROLE \"%s\" WITH LOGIN", VAR_0);
 for (; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
 {
  FUNC_2("postgres", "GRANT ALL ON DATABASE \"%s\" TO \"%s\"",
      VAR_1->str, VAR_0);
 }
}
