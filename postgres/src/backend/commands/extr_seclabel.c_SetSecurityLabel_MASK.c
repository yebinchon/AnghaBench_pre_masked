
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int replaces ;
typedef int nulls ;
struct TYPE_14__ {int t_self; } ;
struct TYPE_13__ {int objectSubId; int classId; int objectId; } ;
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
 int VAR_5 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int *,TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 int FUNC_9 (int *,int,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (TYPE_1__ const*,char const*,char const*) ;
 TYPE_2__* FUNC_11 (int ,int *,int*) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (TYPE_2__*,int ,int *,int*,int*) ;
 int FUNC_14 (int*,int,int) ;
 int FUNC_15 (int ,int ,int,int *,int,int *) ;
 int FUNC_16 (int ) ;
 TYPE_2__* FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

void
FUNC_20(const ObjectAddress *VAR_13,
     const char *VAR_14, const char *VAR_15)
{
 Relation VAR_16;
 ScanKeyData VAR_17[4];
 SysScanDesc VAR_18;
 HeapTuple VAR_19;
 HeapTuple VAR_20 = ((void*)0);
 Datum VAR_21[VAR_9];
 bool VAR_22[VAR_9];
 bool VAR_23[VAR_9];


 if (FUNC_6(VAR_13->classId))
 {
  FUNC_10(VAR_13, VAR_14, VAR_15);
  return;
 }


 FUNC_14(VAR_22, 0, sizeof(VAR_22));
 FUNC_14(VAR_23, 0, sizeof(VAR_23));
 VAR_21[VAR_2 - 1] = FUNC_7(VAR_13->objectId);
 VAR_21[VAR_0 - 1] = FUNC_7(VAR_13->classId);
 VAR_21[VAR_3 - 1] = FUNC_5(VAR_13->objectSubId);
 VAR_21[VAR_4 - 1] = FUNC_0(VAR_14);
 if (VAR_15 != ((void*)0))
  VAR_21[VAR_1 - 1] = FUNC_0(VAR_15);


 FUNC_9(&VAR_17[0],
    VAR_2,
    VAR_5, VAR_7,
    FUNC_7(VAR_13->objectId));
 FUNC_9(&VAR_17[1],
    VAR_0,
    VAR_5, VAR_7,
    FUNC_7(VAR_13->classId));
 FUNC_9(&VAR_17[2],
    VAR_3,
    VAR_5, VAR_6,
    FUNC_5(VAR_13->objectSubId));
 FUNC_9(&VAR_17[3],
    VAR_4,
    VAR_5, VAR_8,
    FUNC_0(VAR_14));

 VAR_16 = FUNC_19(VAR_12, VAR_10);

 VAR_18 = FUNC_15(VAR_16, VAR_11, 1,
         ((void*)0), 4, VAR_17);

 VAR_19 = FUNC_17(VAR_18);
 if (FUNC_4(VAR_19))
 {
  if (VAR_15 == ((void*)0))
   FUNC_1(VAR_16, &VAR_19->t_self);
  else
  {
   VAR_23[VAR_1 - 1] = 1;
   VAR_20 = FUNC_13(VAR_19, FUNC_8(VAR_16),
            VAR_21, VAR_22, VAR_23);
   FUNC_3(VAR_16, &VAR_19->t_self, VAR_20);
  }
 }
 FUNC_16(VAR_18);


 if (VAR_20 == ((void*)0) && VAR_15 != ((void*)0))
 {
  VAR_20 = FUNC_11(FUNC_8(VAR_16),
         VAR_21, VAR_22);
  FUNC_2(VAR_16, VAR_20);
 }


 if (VAR_20 != ((void*)0))
  FUNC_12(VAR_20);

 FUNC_18(VAR_16, VAR_10);
}
