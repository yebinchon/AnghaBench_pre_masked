
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int oid; } ;
struct TYPE_7__ {int dump; TYPE_1__ catId; } ;
struct TYPE_8__ {int interesting; TYPE_2__ dobj; scalar_t__ is_identity_sequence; int owning_tab; } ;
typedef TYPE_3__ TableInfo ;
typedef int Archive ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_3__* FUNC_2 (int ) ;

void
FUNC_3(Archive *VAR_1, TableInfo VAR_2[], int VAR_3)
{
 int VAR_4;





 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  TableInfo *VAR_5 = &VAR_2[VAR_4];
  TableInfo *VAR_6;

  if (!FUNC_0(VAR_5->owning_tab))
   continue;

  VAR_6 = FUNC_2(VAR_5->owning_tab);
  if (VAR_6 == ((void*)0))
   FUNC_1("failed sanity check, parent table with OID %u of sequence with OID %u not found",
      VAR_5->owning_tab, VAR_5->dobj.catId.oid);





  if (VAR_6->dobj.dump == VAR_0 &&
   VAR_5->is_identity_sequence)
  {
   VAR_5->dobj.dump = VAR_0;
   continue;
  }
  VAR_5->dobj.dump = VAR_5->dobj.dump | VAR_6->dobj.dump;

  if (VAR_5->dobj.dump != VAR_0)
   VAR_5->interesting = 1;
 }
}
