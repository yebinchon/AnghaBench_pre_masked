
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hasho_nextblkno; } ;
struct TYPE_7__ {scalar_t__ hashso_bucket_buf; scalar_t__ hashso_split_bucket_buf; int hashso_buc_split; scalar_t__ hashso_buc_populated; } ;
struct TYPE_6__ {int xs_snapshot; int opaque; int indexRelation; } ;
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(IndexScanDesc VAR_5,
      Buffer *VAR_6, Page *VAR_7, HashPageOpaque *VAR_8)
{
 BlockNumber VAR_9;
 Relation VAR_10 = VAR_5->indexRelation;
 HashScanOpaque VAR_11 = (HashScanOpaque) VAR_5->opaque;
 bool VAR_12 = 0;

 VAR_9 = (*VAR_8)->hasho_nextblkno;





 if (*VAR_6 == VAR_11->hashso_bucket_buf || *VAR_6 == VAR_11->hashso_split_bucket_buf)
  FUNC_6(*VAR_6, VAR_1);
 else
  FUNC_11(VAR_10, *VAR_6);

 *VAR_6 = VAR_3;

 FUNC_5();
 if (FUNC_1(VAR_9))
 {
  *VAR_6 = FUNC_10(VAR_10, VAR_9, VAR_2, VAR_4);
  VAR_12 = 1;
 }
 else if (VAR_11->hashso_buc_populated && !VAR_11->hashso_buc_split)
 {




  *VAR_6 = VAR_11->hashso_split_bucket_buf;





  FUNC_0(FUNC_4(*VAR_6));

  FUNC_6(*VAR_6, VAR_0);
  FUNC_8(VAR_10, FUNC_2(*VAR_6), VAR_5->xs_snapshot);





  VAR_11->hashso_buc_split = 1;

  VAR_12 = 1;
 }

 if (VAR_12)
 {
  *VAR_7 = FUNC_3(*VAR_6);
  FUNC_9(VAR_5->xs_snapshot, VAR_10, *VAR_7);
  *VAR_8 = (HashPageOpaque) FUNC_7(*VAR_7);
 }
}
