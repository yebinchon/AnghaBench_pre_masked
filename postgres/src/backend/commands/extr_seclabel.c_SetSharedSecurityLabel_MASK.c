
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int replaces ;
typedef int nulls ;
struct TYPE_13__ {int t_self; } ;
struct TYPE_12__ {int classId; int objectId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int *,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (int *,int,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_8 (int ,int *,int*) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*,int ,int *,int*,int*) ;
 int FUNC_11 (int*,int,int) ;
 int FUNC_12 (int ,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 TYPE_2__* FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void
FUNC_17(const ObjectAddress *VAR_11,
        const char *VAR_12, const char *VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15[4];
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 HeapTuple VAR_18 = ((void*)0);
 Datum VAR_19[VAR_7];
 bool VAR_20[VAR_7];
 bool VAR_21[VAR_7];


 FUNC_11(VAR_20, 0, sizeof(VAR_20));
 FUNC_11(VAR_21, 0, sizeof(VAR_21));
 VAR_19[VAR_2 - 1] = FUNC_5(VAR_11->objectId);
 VAR_19[VAR_0 - 1] = FUNC_5(VAR_11->classId);
 VAR_19[VAR_3 - 1] = FUNC_0(VAR_12);
 if (VAR_13 != ((void*)0))
  VAR_19[VAR_1 - 1] = FUNC_0(VAR_13);


 FUNC_7(&VAR_15[0],
    VAR_2,
    VAR_4, VAR_5,
    FUNC_5(VAR_11->objectId));
 FUNC_7(&VAR_15[1],
    VAR_0,
    VAR_4, VAR_5,
    FUNC_5(VAR_11->classId));
 FUNC_7(&VAR_15[2],
    VAR_3,
    VAR_4, VAR_6,
    FUNC_0(VAR_12));

 VAR_14 = FUNC_16(VAR_10, VAR_8);

 VAR_16 = FUNC_12(VAR_14, VAR_9, 1,
         ((void*)0), 3, VAR_15);

 VAR_17 = FUNC_14(VAR_16);
 if (FUNC_4(VAR_17))
 {
  if (VAR_13 == ((void*)0))
   FUNC_1(VAR_14, &VAR_17->t_self);
  else
  {
   VAR_21[VAR_1 - 1] = 1;
   VAR_18 = FUNC_10(VAR_17, FUNC_6(VAR_14),
            VAR_19, VAR_20, VAR_21);
   FUNC_3(VAR_14, &VAR_17->t_self, VAR_18);
  }
 }
 FUNC_13(VAR_16);


 if (VAR_18 == ((void*)0) && VAR_13 != ((void*)0))
 {
  VAR_18 = FUNC_8(FUNC_6(VAR_14),
         VAR_19, VAR_20);
  FUNC_2(VAR_14, VAR_18);
 }

 if (VAR_18 != ((void*)0))
  FUNC_9(VAR_18);

 FUNC_15(VAR_14, VAR_8);
}
