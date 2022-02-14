
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int shm_toc ;
typedef int dsm_segment ;
struct TYPE_7__ {int isunique; int scantuplesortstates; int indexrelid; int heaprelid; int isconcurrent; } ;
struct TYPE_6__ {int isunique; void* index; void* heap; } ;
typedef int Sharedsort ;
typedef void* Relation ;
typedef int LOCKMODE ;
typedef TYPE_1__ BTSpool ;
typedef TYPE_2__ BTShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_2__*,int *,int *,int,int) ;
 char* VAR_9 ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (int ,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int *,int ,int) ;
 int FUNC_8 (void*,int ) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *) ;

void
FUNC_11(dsm_segment *VAR_12, shm_toc *VAR_13)
{
 char *VAR_14;
 BTSpool *VAR_15;
 BTSpool *VAR_16;
 BTShared *VAR_17;
 Sharedsort *VAR_18;
 Sharedsort *VAR_19;
 Relation VAR_20;
 Relation VAR_21;
 LOCKMODE VAR_22;
 LOCKMODE VAR_23;
 int VAR_24;







 VAR_14 = FUNC_7(VAR_13, VAR_2, 0);
 VAR_9 = VAR_14;


 FUNC_6(VAR_6, VAR_9);


 VAR_17 = FUNC_7(VAR_13, VAR_1, 0);


 if (!VAR_17->isconcurrent)
 {
  VAR_22 = VAR_7;
  VAR_23 = VAR_0;
 }
 else
 {
  VAR_22 = VAR_8;
  VAR_23 = VAR_5;
 }


 VAR_20 = FUNC_9(VAR_17->heaprelid, VAR_22);
 VAR_21 = FUNC_4(VAR_17->indexrelid, VAR_23);


 VAR_15 = (BTSpool *) FUNC_5(sizeof(BTSpool));
 VAR_15->heap = VAR_20;
 VAR_15->index = VAR_21;
 VAR_15->isunique = VAR_17->isunique;


 VAR_18 = FUNC_7(VAR_13, VAR_3, 0);
 FUNC_10(VAR_18, VAR_12);
 if (!VAR_17->isunique)
 {
  VAR_16 = ((void*)0);
  VAR_19 = ((void*)0);
 }
 else
 {

  VAR_16 = (BTSpool *) FUNC_5(sizeof(BTSpool));


  VAR_16->heap = VAR_15->heap;
  VAR_16->index = VAR_15->index;
  VAR_16->isunique = 0;

  VAR_19 = FUNC_7(VAR_13, VAR_4, 0);
  FUNC_10(VAR_19, VAR_12);
 }


 VAR_24 = VAR_11 / VAR_17->scantuplesortstates;
 FUNC_2(VAR_15, VAR_16, VAR_17, VAR_18,
          VAR_19, VAR_24, 0);
 FUNC_3(VAR_21, VAR_23);
 FUNC_8(VAR_20, VAR_22);
}
