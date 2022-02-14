
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int bloomLength; } ;
struct TYPE_14__ {scalar_t__ magickNumber; int opts; } ;
struct TYPE_13__ {int nColumns; TYPE_5__ opts; scalar_t__ sizeOfBloomTuple; int * collations; int * hashFn; } ;
struct TYPE_12__ {void* rd_amcache; int rd_indexcxt; int * rd_indcollation; TYPE_1__* rd_att; } ;
struct TYPE_11__ {int natts; } ;
typedef TYPE_2__* Relation ;
typedef int Page ;
typedef int Buffer ;
typedef TYPE_3__ BloomState ;
typedef int BloomSignatureWord ;
typedef int BloomOptions ;
typedef TYPE_4__ BloomMetaPageData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_5__*,void*,int) ;

void
FUNC_11(BloomState *VAR_7, Relation VAR_8)
{
 int VAR_9;

 VAR_7->nColumns = VAR_8->rd_att->natts;


 for (VAR_9 = 0; VAR_9 < VAR_8->rd_att->natts; VAR_9++)
 {
  FUNC_8(&(VAR_7->hashFn[VAR_9]),
        FUNC_9(VAR_8, VAR_9 + 1, VAR_1),
        VAR_5);
  VAR_7->collations[VAR_9] = VAR_8->rd_indcollation[VAR_9];
 }


 if (!VAR_8->rd_amcache)
 {
  Buffer VAR_10;
  Page VAR_11;
  BloomMetaPageData *VAR_12;
  BloomOptions *VAR_13;

  VAR_13 = FUNC_4(VAR_8->rd_indexcxt, sizeof(BloomOptions));

  VAR_10 = FUNC_5(VAR_8, VAR_3);
  FUNC_3(VAR_10, VAR_4);

  VAR_11 = FUNC_2(VAR_10);

  if (!FUNC_1(VAR_11))
   FUNC_7(VAR_6, "Relation is not a bloom index");
  VAR_12 = FUNC_0(FUNC_2(VAR_10));

  if (VAR_12->magickNumber != VAR_2)
   FUNC_7(VAR_6, "Relation is not a bloom index");

  *VAR_13 = VAR_12->opts;

  FUNC_6(VAR_10);

  VAR_8->rd_amcache = (void *) VAR_13;
 }

 FUNC_10(&VAR_7->opts, VAR_8->rd_amcache, sizeof(VAR_7->opts));
 VAR_7->sizeOfBloomTuple = VAR_0 +
  sizeof(BloomSignatureWord) * VAR_7->opts.bloomLength;
}
