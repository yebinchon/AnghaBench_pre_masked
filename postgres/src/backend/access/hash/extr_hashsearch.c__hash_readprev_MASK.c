
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int hasho_nextblkno; int hasho_prevblkno; } ;
struct TYPE_9__ {scalar_t__ hashso_bucket_buf; scalar_t__ hashso_split_bucket_buf; int hashso_buc_split; scalar_t__ hashso_buc_populated; } ;
struct TYPE_8__ {int xs_snapshot; int opaque; int indexRelation; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* HashScanOpaque ;
typedef TYPE_3__* HashPageOpaque ;
typedef scalar_t__ Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int) ;
 int FUNC_10 (TYPE_1__*,scalar_t__*,int *,TYPE_3__**) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(IndexScanDesc VAR_6,
      Buffer *VAR_7, Page *VAR_8, HashPageOpaque *VAR_9)
{
 BlockNumber VAR_10;
 Relation VAR_11 = VAR_6->indexRelation;
 HashScanOpaque VAR_12 = (HashScanOpaque) VAR_6->opaque;
 bool VAR_13;

 VAR_10 = (*VAR_9)->hasho_prevblkno;





 if (*VAR_7 == VAR_12->hashso_bucket_buf || *VAR_7 == VAR_12->hashso_split_bucket_buf)
 {
  FUNC_5(*VAR_7, VAR_1);
  VAR_13 = 0;
 }
 else
 {
  FUNC_11(VAR_11, *VAR_7);
  VAR_13 = 1;
 }

 *VAR_7 = VAR_3;

 FUNC_4();

 if (VAR_13)
 {
  FUNC_0(FUNC_1(VAR_10));
  *VAR_7 = FUNC_9(VAR_11, VAR_10, VAR_2,
        VAR_4 | VAR_5);
  *VAR_8 = FUNC_2(*VAR_7);
  FUNC_7(VAR_6->xs_snapshot, VAR_11, *VAR_8);
  *VAR_9 = (HashPageOpaque) FUNC_6(*VAR_8);





  if (*VAR_7 == VAR_12->hashso_bucket_buf || *VAR_7 == VAR_12->hashso_split_bucket_buf)
   FUNC_8(VAR_11, *VAR_7);
 }
 else if (VAR_12->hashso_buc_populated && VAR_12->hashso_buc_split)
 {




  *VAR_7 = VAR_12->hashso_bucket_buf;





  FUNC_0(FUNC_3(*VAR_7));

  FUNC_5(*VAR_7, VAR_0);
  *VAR_8 = FUNC_2(*VAR_7);
  *VAR_9 = (HashPageOpaque) FUNC_6(*VAR_8);


  while (FUNC_1((*VAR_9)->hasho_nextblkno))
   FUNC_10(VAR_6, VAR_7, VAR_8, VAR_9);





  VAR_12->hashso_buc_split = 0;
 }
}
