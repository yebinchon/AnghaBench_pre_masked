
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * values; } ;
struct TYPE_17__ {int indnatts; scalar_t__ indisexclusion; TYPE_2__ indkey; int indisready; int indisunique; int indnkeyatts; } ;
struct TYPE_16__ {int ii_ExclusionStrats; int ii_ExclusionProcs; int ii_ExclusionOps; int * ii_IndexAttrNumbers; } ;
struct TYPE_15__ {TYPE_1__* rd_rel; TYPE_5__* rd_index; } ;
struct TYPE_13__ {int relam; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ IndexInfo ;
typedef TYPE_5__* Form_pg_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int *,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,char*,int,int ) ;
 TYPE_4__* FUNC_5 (int,int ,int ,int ,int ,int ,int ,int) ;

IndexInfo *
FUNC_6(Relation VAR_2)
{
 IndexInfo *VAR_3;
 Form_pg_index VAR_4 = VAR_2->rd_index;
 int VAR_5;
 int VAR_6;


 VAR_6 = VAR_4->indnatts;
 if (VAR_6 < 1 || VAR_6 > VAR_1)
  FUNC_4(VAR_0, "invalid indnatts %d for index %u",
    VAR_6, FUNC_3(VAR_2));





 VAR_3 = FUNC_5(VAR_4->indnatts,
        VAR_4->indnkeyatts,
        VAR_2->rd_rel->relam,
        FUNC_1(VAR_2),
        FUNC_2(VAR_2),
        VAR_4->indisunique,
        VAR_4->indisready,
        0);


 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_3->ii_IndexAttrNumbers[VAR_5] = VAR_4->indkey.values[VAR_5];


 if (VAR_4->indisexclusion)
 {
  FUNC_0(VAR_2,
         &VAR_3->ii_ExclusionOps,
         &VAR_3->ii_ExclusionProcs,
         &VAR_3->ii_ExclusionStrats);
 }

 return VAR_3;
}
