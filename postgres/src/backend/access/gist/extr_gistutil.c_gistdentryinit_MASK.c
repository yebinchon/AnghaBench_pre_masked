
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int fn_oid; } ;
struct TYPE_9__ {int leafkey; int offset; int page; int rel; int key; } ;
struct TYPE_8__ {int * supportCollation; TYPE_7__* decompressFn; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef TYPE_1__ GISTSTATE ;
typedef TYPE_2__ GISTENTRY ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__,int ,int ,int ,int ,int) ;

void
FUNC_5(GISTSTATE *VAR_0, int VAR_1, GISTENTRY *VAR_2,
      Datum VAR_3, Relation VAR_4, Page VAR_5, OffsetNumber VAR_6,
      bool VAR_7, bool VAR_8)
{
 if (!VAR_8)
 {
  GISTENTRY *VAR_9;

  FUNC_4(*VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


  if (!FUNC_2(VAR_0->decompressFn[VAR_1].fn_oid))
   return;

  VAR_9 = (GISTENTRY *)
   FUNC_0(FUNC_1(&VAR_0->decompressFn[VAR_1],
             VAR_0->supportCollation[VAR_1],
             FUNC_3(VAR_2)));

  if (VAR_9 != VAR_2)
   FUNC_4(*VAR_2, VAR_9->key, VAR_9->rel, VAR_9->page, VAR_9->offset,
        VAR_9->leafkey);
 }
 else
  FUNC_4(*VAR_2, (Datum) 0, VAR_4, VAR_5, VAR_6, VAR_7);
}
