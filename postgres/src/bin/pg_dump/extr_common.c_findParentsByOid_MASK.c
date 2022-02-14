
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ oid; } ;
struct TYPE_9__ {int name; TYPE_1__ catId; } ;
struct TYPE_10__ {int numParents; struct TYPE_10__** parents; TYPE_2__ dobj; } ;
typedef TYPE_3__ TableInfo ;
struct TYPE_11__ {scalar_t__ inhrelid; int inhparent; } ;
typedef scalar_t__ Oid ;
typedef TYPE_4__ InhInfo ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(TableInfo *VAR_0,
     InhInfo *VAR_1, int VAR_2)
{
 Oid VAR_3 = VAR_0->dobj.catId.oid;
 int VAR_4,
    VAR_5;
 int VAR_6;

 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if (VAR_1[VAR_4].inhrelid == VAR_3)
   VAR_6++;
 }

 VAR_0->numParents = VAR_6;

 if (VAR_6 > 0)
 {
  VAR_0->parents = (TableInfo **)
   FUNC_3(sizeof(TableInfo *) * VAR_6);
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
   if (VAR_1[VAR_4].inhrelid == VAR_3)
   {
    TableInfo *VAR_7;

    VAR_7 = FUNC_1(VAR_1[VAR_4].inhparent);
    if (VAR_7 == ((void*)0))
    {
     FUNC_2("failed sanity check, parent OID %u of table \"%s\" (OID %u) not found",
         VAR_1[VAR_4].inhparent,
         VAR_0->dobj.name,
         VAR_3);
     FUNC_0(1);
    }
    VAR_0->parents[VAR_5++] = VAR_7;
   }
  }
 }
 else
  VAR_0->parents = ((void*)0);
}
