
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int t_self; } ;
struct TYPE_6__ {scalar_t__ objectSubId; int classId; int objectId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

void
FUNC_13(const ObjectAddress *VAR_9)
{
 Relation VAR_10;
 ScanKeyData VAR_11[3];
 SysScanDesc VAR_12;
 HeapTuple VAR_13;
 int VAR_14;


 if (FUNC_5(VAR_9->classId))
 {
  FUNC_0(VAR_9->objectSubId == 0);
  FUNC_2(VAR_9->objectId, VAR_9->classId);
  return;
 }

 FUNC_7(&VAR_11[0],
    VAR_1,
    VAR_3, VAR_5,
    FUNC_6(VAR_9->objectId));
 FUNC_7(&VAR_11[1],
    VAR_0,
    VAR_3, VAR_5,
    FUNC_6(VAR_9->classId));
 if (VAR_9->objectSubId != 0)
 {
  FUNC_7(&VAR_11[2],
     VAR_2,
     VAR_3, VAR_4,
     FUNC_4(VAR_9->objectSubId));
  VAR_14 = 3;
 }
 else
  VAR_14 = 2;

 VAR_10 = FUNC_12(VAR_8, VAR_6);

 VAR_12 = FUNC_8(VAR_10, VAR_7, 1,
         ((void*)0), VAR_14, VAR_11);
 while (FUNC_3(VAR_13 = FUNC_10(VAR_12)))
  FUNC_1(VAR_10, &VAR_13->t_self);
 FUNC_9(VAR_12);

 FUNC_11(VAR_10, VAR_6);
}
