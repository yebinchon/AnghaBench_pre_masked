
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int nulls ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (char) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_7 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,char*,int ,int ) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_10 (int*,int,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

void
FUNC_13(Oid VAR_11, Oid VAR_12, char VAR_13,
         XLogRecPtr VAR_14)
{
 Relation VAR_15;
 HeapTuple VAR_16;
 bool VAR_17[VAR_5];
 Datum VAR_18[VAR_5];
 bool VAR_19[VAR_5];

 FUNC_4(VAR_10, VAR_11, 0, VAR_0);

 VAR_15 = FUNC_12(VAR_9, VAR_7);


 VAR_16 = FUNC_7(VAR_8,
         FUNC_5(VAR_12),
         FUNC_5(VAR_11));
 if (!FUNC_2(VAR_16))
  FUNC_8(VAR_3, "subscription table %u in subscription %u does not exist",
    VAR_12, VAR_11);


 FUNC_10(VAR_18, 0, sizeof(VAR_18));
 FUNC_10(VAR_17, 0, sizeof(VAR_17));
 FUNC_10(VAR_19, 0, sizeof(VAR_19));

 VAR_19[VAR_2 - 1] = 1;
 VAR_18[VAR_2 - 1] = FUNC_1(VAR_13);

 VAR_19[VAR_1 - 1] = 1;
 if (VAR_14 != VAR_4)
  VAR_18[VAR_1 - 1] = FUNC_3(VAR_14);
 else
  VAR_17[VAR_1 - 1] = 1;

 VAR_16 = FUNC_9(VAR_16, FUNC_6(VAR_15), VAR_18, VAR_17,
       VAR_19);


 FUNC_0(VAR_15, &VAR_16->t_self, VAR_16);


 FUNC_11(VAR_15, VAR_6);
}
