
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectSubId; int classId; int objectId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_1 (TYPE_1__ const*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

char *
FUNC_15(const ObjectAddress *VAR_12, const char *VAR_13)
{
 Relation VAR_14;
 ScanKeyData VAR_15[4];
 SysScanDesc VAR_16;
 HeapTuple VAR_17;
 Datum VAR_18;
 bool VAR_19;
 char *VAR_20 = ((void*)0);


 if (FUNC_4(VAR_12->classId))
  return FUNC_1(VAR_12, VAR_13);


 FUNC_7(&VAR_15[0],
    VAR_3,
    VAR_6, VAR_8,
    FUNC_5(VAR_12->objectId));
 FUNC_7(&VAR_15[1],
    VAR_1,
    VAR_6, VAR_8,
    FUNC_5(VAR_12->classId));
 FUNC_7(&VAR_15[2],
    VAR_4,
    VAR_6, VAR_7,
    FUNC_3(VAR_12->objectSubId));
 FUNC_7(&VAR_15[3],
    VAR_5,
    VAR_6, VAR_9,
    FUNC_0(VAR_13));

 VAR_14 = FUNC_14(VAR_11, VAR_0);

 VAR_16 = FUNC_10(VAR_14, VAR_10, 1,
         ((void*)0), 4, VAR_15);

 VAR_17 = FUNC_12(VAR_16);
 if (FUNC_2(VAR_17))
 {
  VAR_18 = FUNC_9(VAR_17, VAR_2,
        FUNC_6(VAR_14), &VAR_19);
  if (!VAR_19)
   VAR_20 = FUNC_8(VAR_18);
 }
 FUNC_11(VAR_16);

 FUNC_13(VAR_14, VAR_0);

 return VAR_20;
}
