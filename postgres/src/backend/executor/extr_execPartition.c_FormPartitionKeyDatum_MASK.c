
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_8__ {int * ecxt_scantuple; } ;
struct TYPE_7__ {scalar_t__ keystate; TYPE_1__* key; } ;
struct TYPE_6__ {scalar_t__ partexprs; int partnatts; scalar_t__* partattrs; } ;
typedef TYPE_2__* PartitionDispatch ;
typedef int ListCell ;
typedef int ExprState ;
typedef int EState ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*,int*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__) ;
 int * FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (int *,scalar_t__,int*) ;

__attribute__((used)) static void
FUNC_9(PartitionDispatch VAR_2,
       TupleTableSlot *VAR_3,
       EState *VAR_4,
       Datum *VAR_5,
       bool *VAR_6)
{
 ListCell *VAR_7;
 int VAR_8;

 if (VAR_2->key->partexprs != VAR_1 && VAR_2->keystate == VAR_1)
 {

  FUNC_0(VAR_4 != ((void*)0) &&
      FUNC_3(VAR_4)->ecxt_scantuple == VAR_3);


  VAR_2->keystate = FUNC_2(VAR_2->key->partexprs, VAR_4);
 }

 VAR_7 = FUNC_6(VAR_2->keystate);
 for (VAR_8 = 0; VAR_8 < VAR_2->key->partnatts; VAR_8++)
 {
  AttrNumber VAR_9 = VAR_2->key->partattrs[VAR_8];
  Datum VAR_10;
  bool VAR_11;

  if (VAR_9 != 0)
  {

   VAR_10 = FUNC_8(VAR_3, VAR_9, &VAR_11);
  }
  else
  {

   if (VAR_7 == ((void*)0))
    FUNC_4(VAR_0, "wrong number of partition key expressions");
   VAR_10 = FUNC_1((ExprState *) FUNC_5(VAR_7),
             FUNC_3(VAR_4),
             &VAR_11);
   VAR_7 = FUNC_7(VAR_2->keystate, VAR_7);
  }
  VAR_5[VAR_8] = VAR_10;
  VAR_6[VAR_8] = VAR_11;
 }

 if (VAR_7 != ((void*)0))
  FUNC_4(VAR_0, "wrong number of partition key expressions");
}
