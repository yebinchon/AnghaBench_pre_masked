
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int reldesc ;
struct TYPE_6__ {int nrels; TYPE_2__* rels; } ;
struct TYPE_8__ {int db_name; TYPE_1__ rel_arr; } ;
struct TYPE_7__ {scalar_t__ reloid; char* nspname; char* relname; scalar_t__ indtable; scalar_t__ toastheap; } ;
typedef TYPE_2__ RelInfo ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ DbInfo ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__,int ,char*) ;
 int FUNC_2 (char*,int,char*,scalar_t__,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(const RelInfo *VAR_1, const DbInfo *VAR_2, bool VAR_3)
{
 Oid VAR_4 = VAR_1->reloid;
 char VAR_5[1000];
 int VAR_6;

 FUNC_2(VAR_5, sizeof(VAR_5), "\"%s.%s\"",
    VAR_1->nspname, VAR_1->relname);
 if (VAR_1->indtable)
 {
  for (VAR_6 = 0; VAR_6 < VAR_2->rel_arr.nrels; VAR_6++)
  {
   const RelInfo *VAR_7 = &VAR_2->rel_arr.rels[VAR_6];

   if (VAR_7->reloid == VAR_1->indtable)
   {
    FUNC_2(VAR_5 + FUNC_3(VAR_5),
       sizeof(VAR_5) - FUNC_3(VAR_5),
       FUNC_0(" which is an index on \"%s.%s\""),
       VAR_7->nspname, VAR_7->relname);

    VAR_1 = VAR_7;
    break;
   }
  }
  if (VAR_6 >= VAR_2->rel_arr.nrels)
   FUNC_2(VAR_5 + FUNC_3(VAR_5),
      sizeof(VAR_5) - FUNC_3(VAR_5),
      FUNC_0(" which is an index on OID %u"), VAR_1->indtable);
 }
 if (VAR_1->toastheap)
 {
  for (VAR_6 = 0; VAR_6 < VAR_2->rel_arr.nrels; VAR_6++)
  {
   const RelInfo *VAR_8 = &VAR_2->rel_arr.rels[VAR_6];

   if (VAR_8->reloid == VAR_1->toastheap)
   {
    FUNC_2(VAR_5 + FUNC_3(VAR_5),
       sizeof(VAR_5) - FUNC_3(VAR_5),
       FUNC_0(" which is the TOAST table for \"%s.%s\""),
       VAR_8->nspname, VAR_8->relname);
    break;
   }
  }
  if (VAR_6 >= VAR_2->rel_arr.nrels)
   FUNC_2(VAR_5 + FUNC_3(VAR_5),
      sizeof(VAR_5) - FUNC_3(VAR_5),
      FUNC_0(" which is the TOAST table for OID %u"), VAR_1->toastheap);
 }

 if (VAR_3)
  FUNC_1(VAR_0, "No match found in old cluster for new relation with OID %u in database \"%s\": %s\n",
      VAR_4, VAR_2->db_name, VAR_5);
 else
  FUNC_1(VAR_0, "No match found in new cluster for old relation with OID %u in database \"%s\": %s\n",
      VAR_4, VAR_2->db_name, VAR_5);
}
