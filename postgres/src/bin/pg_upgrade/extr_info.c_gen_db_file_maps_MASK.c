
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int major_version; } ;
struct TYPE_13__ {int nrels; TYPE_2__* rels; } ;
struct TYPE_15__ {int db_name; TYPE_1__ rel_arr; } ;
struct TYPE_14__ {char* nspname; scalar_t__ reloid; char* relname; } ;
typedef TYPE_2__ RelInfo ;
typedef int FileNameMap ;
typedef TYPE_3__ DbInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*,TYPE_3__*,TYPE_3__*,TYPE_2__*,TYPE_2__*,int *) ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,int ,char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;

FileNameMap *
FUNC_7(DbInfo *VAR_2, DbInfo *VAR_3,
     int *VAR_4,
     const char *VAR_5, const char *VAR_6)
{
 FileNameMap *VAR_7;
 int VAR_8,
    VAR_9;
 int VAR_10 = 0;
 bool VAR_11 = 1;


 VAR_7 = (FileNameMap *) FUNC_4(sizeof(FileNameMap) *
          VAR_2->rel_arr.nrels);






 VAR_8 = VAR_9 = 0;
 while (VAR_8 < VAR_2->rel_arr.nrels ||
     VAR_9 < VAR_3->rel_arr.nrels)
 {
  RelInfo *VAR_12 = (VAR_8 < VAR_2->rel_arr.nrels) ?
  &VAR_2->rel_arr.rels[VAR_8] : ((void*)0);
  RelInfo *VAR_13 = (VAR_9 < VAR_3->rel_arr.nrels) ?
  &VAR_3->rel_arr.rels[VAR_9] : ((void*)0);


  if (!VAR_13)
  {




   FUNC_5(VAR_12, VAR_2, 0);
   VAR_11 = 0;
   VAR_8++;
   continue;
  }
  if (!VAR_12)
  {






   if (FUNC_6(VAR_13->nspname, "pg_toast") != 0)
   {
    FUNC_5(VAR_13, VAR_3, 1);
    VAR_11 = 0;
   }
   VAR_9++;
   continue;
  }


  if (VAR_12->reloid < VAR_13->reloid)
  {

   FUNC_5(VAR_12, VAR_2, 0);
   VAR_11 = 0;
   VAR_8++;
   continue;
  }
  else if (VAR_12->reloid > VAR_13->reloid)
  {

   if (FUNC_6(VAR_13->nspname, "pg_toast") != 0)
   {
    FUNC_5(VAR_13, VAR_3, 1);
    VAR_11 = 0;
   }
   VAR_9++;
   continue;
  }
  if (FUNC_6(VAR_12->nspname, VAR_13->nspname) != 0 ||
   (FUNC_6(VAR_12->relname, VAR_13->relname) != 0 &&
    (FUNC_0(VAR_1.major_version) >= 900 ||
     FUNC_6(VAR_12->nspname, "pg_toast") != 0)))
  {
   FUNC_3(VAR_0, "Relation names for OID %u in database \"%s\" do not match: "
       "old name \"%s.%s\", new name \"%s.%s\"\n",
       VAR_12->reloid, VAR_2->db_name,
       VAR_12->nspname, VAR_12->relname,
       VAR_13->nspname, VAR_13->relname);
   VAR_11 = 0;
   VAR_8++;
   VAR_9++;
   continue;
  }


  FUNC_1(VAR_5, VAR_6, VAR_2, VAR_3,
        VAR_12, VAR_13, VAR_7 + VAR_10);
  VAR_10++;
  VAR_8++;
  VAR_9++;
 }

 if (!VAR_11)
  FUNC_2("Failed to match up old and new tables in database \"%s\"\n",
     VAR_2->db_name);

 *VAR_4 = VAR_10;
 return VAR_7;
}
