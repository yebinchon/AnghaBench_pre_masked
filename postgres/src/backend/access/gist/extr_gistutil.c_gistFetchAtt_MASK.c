
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int key; } ;
struct TYPE_6__ {int * supportCollation; int * fetchFn; } ;
typedef int Relation ;
typedef int OffsetNumber ;
typedef TYPE_1__ GISTSTATE ;
typedef TYPE_2__ GISTENTRY ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__,int ,int ,int *,int ,int) ;

__attribute__((used)) static Datum
FUNC_4(GISTSTATE *VAR_0, int VAR_1, Datum VAR_2, Relation VAR_3)
{
 GISTENTRY VAR_4;
 GISTENTRY *VAR_5;

 FUNC_3(VAR_4, VAR_2, VAR_3, ((void*)0), (OffsetNumber) 0, 0);

 VAR_5 = (GISTENTRY *)
  FUNC_0(FUNC_1(&VAR_0->fetchFn[VAR_1],
            VAR_0->supportCollation[VAR_1],
            FUNC_2(&VAR_4)));


 return VAR_5->key;
}
