
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ db_encoding; int db_ctype; int db_name; int db_collate; } ;
typedef TYPE_1__ DbInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(DbInfo *VAR_2, DbInfo *VAR_3)
{
 if (VAR_2->db_encoding != VAR_3->db_encoding)
  FUNC_2("encodings for database \"%s\" do not match:  old \"%s\", new \"%s\"\n",
     VAR_2->db_name,
     FUNC_1(VAR_2->db_encoding),
     FUNC_1(VAR_3->db_encoding));
 if (!FUNC_0(VAR_0, VAR_2->db_collate, VAR_3->db_collate))
  FUNC_2("lc_collate values for database \"%s\" do not match:  old \"%s\", new \"%s\"\n",
     VAR_2->db_name, VAR_2->db_collate, VAR_3->db_collate);
 if (!FUNC_0(VAR_1, VAR_2->db_ctype, VAR_3->db_ctype))
  FUNC_2("lc_ctype values for database \"%s\" do not match:  old \"%s\", new \"%s\"\n",
     VAR_2->db_name, VAR_2->db_ctype, VAR_3->db_ctype);
}
