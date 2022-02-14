
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_5__ {scalar_t__ ri_RelationDesc; scalar_t__ ri_PartitionRoot; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int Oid ;
typedef int EState ;
typedef int Bitmapset ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int *,int ,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 int * FUNC_7 (int ,int ) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int ) ;
 int * FUNC_13 (int *,int *,int ) ;

void
FUNC_14(ResultRelInfo *VAR_3,
       TupleTableSlot *VAR_4,
       EState *VAR_5)
{
 Oid VAR_6;
 TupleDesc VAR_7;
 char *VAR_8;
 Bitmapset *VAR_9;







 if (VAR_3->ri_PartitionRoot)
 {
  TupleDesc VAR_10;
  AttrNumber *VAR_11;

  VAR_6 = FUNC_6(VAR_3->ri_PartitionRoot);
  VAR_7 = FUNC_4(VAR_3->ri_PartitionRoot);

  VAR_10 = FUNC_4(VAR_3->ri_RelationDesc);

  VAR_11 = FUNC_8(VAR_10, VAR_7);





  if (VAR_11 != ((void*)0))
   VAR_4 = FUNC_13(VAR_11, VAR_4,
           FUNC_3(VAR_7, &VAR_2));
 }
 else
 {
  VAR_6 = FUNC_6(VAR_3->ri_RelationDesc);
  VAR_7 = FUNC_4(VAR_3->ri_RelationDesc);
 }

 VAR_9 = FUNC_7(FUNC_1(VAR_3, VAR_5),
        FUNC_2(VAR_3, VAR_5));

 VAR_8 = FUNC_0(VAR_6,
            VAR_4,
            VAR_7,
            VAR_9,
            64);
 FUNC_9(VAR_1,
   (FUNC_10(VAR_0),
    FUNC_12("new row for relation \"%s\" violates partition constraint",
     FUNC_5(VAR_3->ri_RelationDesc)),
    VAR_8 ? FUNC_11("Failing row contains %s.", VAR_8) : 0));
}
