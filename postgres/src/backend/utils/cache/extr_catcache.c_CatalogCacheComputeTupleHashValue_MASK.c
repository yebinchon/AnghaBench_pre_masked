
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int TupleDesc ;
struct TYPE_4__ {int* cc_keyno; int cc_tupdesc; } ;
typedef int HeapTuple ;
typedef int Datum ;
typedef TYPE_1__ CatCache ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int,int ,int*) ;

__attribute__((used)) static uint32
FUNC_4(CatCache *VAR_1, int VAR_2, HeapTuple VAR_3)
{
 Datum VAR_4 = 0,
    VAR_5 = 0,
    VAR_6 = 0,
    VAR_7 = 0;
 bool VAR_8 = 0;
 int *VAR_9 = VAR_1->cc_keyno;
 TupleDesc VAR_10 = VAR_1->cc_tupdesc;


 switch (VAR_2)
 {
  case 4:
   VAR_7 = FUNC_3(VAR_3,
        VAR_9[3],
        VAR_10,
        &VAR_8);
   FUNC_0(!VAR_8);

  case 3:
   VAR_6 = FUNC_3(VAR_3,
        VAR_9[2],
        VAR_10,
        &VAR_8);
   FUNC_0(!VAR_8);

  case 2:
   VAR_5 = FUNC_3(VAR_3,
        VAR_9[1],
        VAR_10,
        &VAR_8);
   FUNC_0(!VAR_8);

  case 1:
   VAR_4 = FUNC_3(VAR_3,
        VAR_9[0],
        VAR_10,
        &VAR_8);
   FUNC_0(!VAR_8);
   break;
  default:
   FUNC_2(VAR_0, "wrong number of hash keys: %d", VAR_2);
   break;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
}
