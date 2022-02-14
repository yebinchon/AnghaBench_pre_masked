
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* str; struct TYPE_4__* next; } ;
typedef TYPE_1__ _stringlist ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char const*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4)
{
 _stringlist *VAR_5;





 FUNC_1(FUNC_0("creating database \"%s\""), VAR_4);
 if (VAR_0)
  FUNC_2("postgres", "CREATE DATABASE \"%s\" TEMPLATE=template0 ENCODING='%s'%s", VAR_4, VAR_0,
      (VAR_3) ? " LC_COLLATE='C' LC_CTYPE='C'" : "");
 else
  FUNC_2("postgres", "CREATE DATABASE \"%s\" TEMPLATE=template0%s", VAR_4,
      (VAR_3) ? " LC_COLLATE='C' LC_CTYPE='C'" : "");
 FUNC_2(VAR_4,
     "ALTER DATABASE \"%s\" SET lc_messages TO 'C';"
     "ALTER DATABASE \"%s\" SET lc_monetary TO 'C';"
     "ALTER DATABASE \"%s\" SET lc_numeric TO 'C';"
     "ALTER DATABASE \"%s\" SET lc_time TO 'C';"
     "ALTER DATABASE \"%s\" SET bytea_output TO 'hex';"
     "ALTER DATABASE \"%s\" SET timezone_abbreviations TO 'Default';",
     VAR_4, VAR_4, VAR_4, VAR_4, VAR_4, VAR_4);





 for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
 {
  FUNC_1(FUNC_0("installing %s"), VAR_5->str);
  FUNC_2(VAR_4, "CREATE OR REPLACE LANGUAGE \"%s\"", VAR_5->str);
 }





 for (VAR_5 = VAR_1; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
 {
  FUNC_1(FUNC_0("installing %s"), VAR_5->str);
  FUNC_2(VAR_4, "CREATE EXTENSION IF NOT EXISTS \"%s\"", VAR_5->str);
 }
}
