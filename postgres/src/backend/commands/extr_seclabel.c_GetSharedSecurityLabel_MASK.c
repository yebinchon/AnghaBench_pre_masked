
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int classId; int objectId; } ;
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
 int FUNC_0 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (int ,int ,int,int *,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static char *
FUNC_12(const ObjectAddress *VAR_10, const char *VAR_11)
{
 Relation VAR_12;
 ScanKeyData VAR_13[3];
 SysScanDesc VAR_14;
 HeapTuple VAR_15;
 Datum VAR_16;
 bool VAR_17;
 char *VAR_18 = ((void*)0);

 FUNC_4(&VAR_13[0],
    VAR_3,
    VAR_5, VAR_6,
    FUNC_2(VAR_10->objectId));
 FUNC_4(&VAR_13[1],
    VAR_1,
    VAR_5, VAR_6,
    FUNC_2(VAR_10->classId));
 FUNC_4(&VAR_13[2],
    VAR_4,
    VAR_5, VAR_7,
    FUNC_0(VAR_11));

 VAR_12 = FUNC_11(VAR_9, VAR_0);

 VAR_14 = FUNC_7(VAR_12, VAR_8, 1,
         ((void*)0), 3, VAR_13);

 VAR_15 = FUNC_9(VAR_14);
 if (FUNC_1(VAR_15))
 {
  VAR_16 = FUNC_6(VAR_15, VAR_2,
        FUNC_3(VAR_12), &VAR_17);
  if (!VAR_17)
   VAR_18 = FUNC_5(VAR_16);
 }
 FUNC_8(VAR_14);

 FUNC_10(VAR_12, VAR_0);

 return VAR_18;
}
