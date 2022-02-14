
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {char* name; char* org_name; char* table; char* org_table; char* def; char* db; int decimals; int type; int flags; int charsetnr; int length; int max_length; int db_length; int def_length; int org_table_length; int table_length; int org_name_length; int name_length; int sname; } ;
typedef TYPE_1__ MYSQL_FIELD ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(zval *VAR_0, const MYSQL_FIELD *VAR_1)
{



 FUNC_3(VAR_0, "name",(VAR_1->name ? VAR_1->name : ""), VAR_1->name_length);


 FUNC_3(VAR_0, "orgname", (VAR_1->org_name ? VAR_1->org_name : ""), VAR_1->org_name_length);
 FUNC_3(VAR_0, "table", (VAR_1->table ? VAR_1->table : ""), VAR_1->table_length);
 FUNC_3(VAR_0, "orgtable", (VAR_1->org_table ? VAR_1->org_table : ""), VAR_1->org_table_length);
 FUNC_3(VAR_0, "def", (VAR_1->def ? VAR_1->def : ""), VAR_1->def_length);
 FUNC_3(VAR_0, "db", (VAR_1->db ? VAR_1->db : ""), VAR_1->db_length);





 FUNC_2(VAR_0, "catalog", "def");

 FUNC_0(VAR_0, "max_length", VAR_1->max_length);
 FUNC_0(VAR_0, "length", VAR_1->length);
 FUNC_0(VAR_0, "charsetnr", VAR_1->charsetnr);
 FUNC_0(VAR_0, "flags", VAR_1->flags);
 FUNC_0(VAR_0, "type", VAR_1->type);
 FUNC_0(VAR_0, "decimals", VAR_1->decimals);
}
