
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {char* tablespace_suffix; } ;
struct TYPE_14__ {char* tablespace_suffix; } ;
struct TYPE_13__ {int db_oid; } ;
struct TYPE_12__ {char const* old_tablespace; char* old_tablespace_suffix; char const* new_tablespace; char* new_tablespace_suffix; int relname; int nspname; int new_relfilenode; int old_relfilenode; int new_db_oid; int old_db_oid; } ;
struct TYPE_11__ {char const* tablespace; int relname; int nspname; int relfilenode; } ;
typedef TYPE_1__ RelInfo ;
typedef TYPE_2__ FileNameMap ;
typedef TYPE_3__ DbInfo ;


 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_2, const char *VAR_3,
      const DbInfo *VAR_4, const DbInfo *VAR_5,
      const RelInfo *VAR_6, const RelInfo *VAR_7,
      FileNameMap *VAR_8)
{

 if (FUNC_0(VAR_6->tablespace) == 0)
 {




  VAR_8->old_tablespace = VAR_2;
  VAR_8->old_tablespace_suffix = "/base";
 }
 else
 {

  VAR_8->old_tablespace = VAR_6->tablespace;
  VAR_8->old_tablespace_suffix = VAR_1.tablespace_suffix;
 }


 if (FUNC_0(VAR_7->tablespace) == 0)
 {
  VAR_8->new_tablespace = VAR_3;
  VAR_8->new_tablespace_suffix = "/base";
 }
 else
 {
  VAR_8->new_tablespace = VAR_7->tablespace;
  VAR_8->new_tablespace_suffix = VAR_0.tablespace_suffix;
 }

 VAR_8->old_db_oid = VAR_4->db_oid;
 VAR_8->new_db_oid = VAR_5->db_oid;





 VAR_8->old_relfilenode = VAR_6->relfilenode;


 VAR_8->new_relfilenode = VAR_7->relfilenode;


 VAR_8->nspname = VAR_6->nspname;
 VAR_8->relname = VAR_6->relname;
}
