
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int t_self; } ;
struct TYPE_9__ {scalar_t__ objectSubId; int classId; int objectId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (TYPE_1__ const*,int) ;
 int FUNC_12 (int ,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 TYPE_2__* FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void
FUNC_17(const ObjectAddress *VAR_10, Relation *VAR_11, int VAR_12)
{
 ScanKeyData VAR_13[3];
 int VAR_14;
 SysScanDesc VAR_15;
 HeapTuple VAR_16;


 FUNC_7(VAR_10->classId, VAR_10->objectId,
       VAR_10->objectSubId, VAR_12);






 if (VAR_12 & VAR_8)
  FUNC_15(*VAR_11, VAR_9);
 FUNC_11(VAR_10, VAR_12);




 if (VAR_12 & VAR_8)
  *VAR_11 = FUNC_16(VAR_5, VAR_9);
 FUNC_9(&VAR_13[0],
    VAR_0,
    VAR_3, VAR_7,
    FUNC_8(VAR_10->classId));
 FUNC_9(&VAR_13[1],
    VAR_1,
    VAR_3, VAR_7,
    FUNC_8(VAR_10->objectId));
 if (VAR_10->objectSubId != 0)
 {
  FUNC_9(&VAR_13[2],
     VAR_2,
     VAR_3, VAR_6,
     FUNC_6(VAR_10->objectSubId));
  VAR_14 = 3;
 }
 else
  VAR_14 = 2;

 VAR_15 = FUNC_12(*VAR_11, VAR_4, 1,
         ((void*)0), VAR_14, VAR_13);

 while (FUNC_5(VAR_16 = FUNC_14(VAR_15)))
 {
  FUNC_0(*VAR_11, &VAR_16->t_self);
 }

 FUNC_13(VAR_15);





 FUNC_10(VAR_10->classId, VAR_10->objectId,
          VAR_10->objectSubId);







 FUNC_2(VAR_10->objectId, VAR_10->classId, VAR_10->objectSubId);
 FUNC_4(VAR_10);
 FUNC_3(VAR_10);





 FUNC_1();




}
