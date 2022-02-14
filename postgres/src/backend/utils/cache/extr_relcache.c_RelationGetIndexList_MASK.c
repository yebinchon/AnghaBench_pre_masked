
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* indexrelid; scalar_t__ indisreplident; scalar_t__ indisprimary; int indimmediate; int indisunique; int indisvalid; int indislive; } ;
struct TYPE_10__ {int rd_indexvalid; void* rd_replidindex; void* rd_pkindex; int * rd_indexlist; TYPE_1__* rd_rel; } ;
struct TYPE_9__ {char relreplident; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef void* Oid ;
typedef int MemoryContext ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 (int ) ;
 int * VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*) ;
 char VAR_10 ;
 char VAR_11 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int * FUNC_8 (int *,void*) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_12 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_16 (int ,int ) ;

List *
FUNC_17(Relation VAR_13)
{
 Relation VAR_14;
 SysScanDesc VAR_15;
 ScanKeyData VAR_16;
 HeapTuple VAR_17;
 List *VAR_18;
 List *VAR_19;
 char VAR_20 = VAR_13->rd_rel->relreplident;
 Oid VAR_21 = VAR_8;
 Oid VAR_22 = VAR_8;
 MemoryContext VAR_23;


 if (VAR_13->rd_indexvalid)
  return FUNC_9(VAR_13->rd_indexlist);







 VAR_18 = VAR_9;


 FUNC_6(&VAR_16,
    VAR_2,
    VAR_3, VAR_5,
    FUNC_3(FUNC_5(VAR_13)));

 VAR_14 = FUNC_16(VAR_7, VAR_0);
 VAR_15 = FUNC_12(VAR_14, VAR_6, 1,
         ((void*)0), 1, &VAR_16);

 while (FUNC_1(VAR_17 = FUNC_14(VAR_15)))
 {
  Form_pg_index VAR_24 = (Form_pg_index) FUNC_0(VAR_17);







  if (!VAR_24->indislive)
   continue;


  VAR_18 = FUNC_8(VAR_18, VAR_24->indexrelid);






  if (!VAR_24->indisvalid || !VAR_24->indisunique ||
   !VAR_24->indimmediate ||
   !FUNC_7(VAR_17, VAR_1, ((void*)0)))
   continue;


  if (VAR_24->indisprimary)
   VAR_21 = VAR_24->indexrelid;


  if (VAR_24->indisreplident)
   VAR_22 = VAR_24->indexrelid;
 }

 FUNC_13(VAR_15);

 FUNC_15(VAR_14, VAR_0);


 FUNC_11(VAR_18, VAR_12);


 VAR_23 = FUNC_2(VAR_4);
 VAR_19 = VAR_13->rd_indexlist;
 VAR_13->rd_indexlist = FUNC_9(VAR_18);
 VAR_13->rd_pkindex = VAR_21;
 if (VAR_20 == VAR_10 && FUNC_4(VAR_21))
  VAR_13->rd_replidindex = VAR_21;
 else if (VAR_20 == VAR_11 && FUNC_4(VAR_22))
  VAR_13->rd_replidindex = VAR_22;
 else
  VAR_13->rd_replidindex = VAR_8;
 VAR_13->rd_indexvalid = 1;
 FUNC_2(VAR_23);


 FUNC_10(VAR_19);

 return VAR_18;
}
