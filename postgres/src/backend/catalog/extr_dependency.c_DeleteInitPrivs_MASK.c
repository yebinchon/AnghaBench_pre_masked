
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int t_self; } ;
struct TYPE_6__ {int objectSubId; int classId; int objectId; } ;
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
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(const ObjectAddress *VAR_9)
{
 Relation VAR_10;
 ScanKeyData VAR_11[3];
 SysScanDesc VAR_12;
 HeapTuple VAR_13;

 VAR_10 = FUNC_9(VAR_7, VAR_8);

 FUNC_4(&VAR_11[0],
    VAR_1,
    VAR_3, VAR_5,
    FUNC_3(VAR_9->objectId));
 FUNC_4(&VAR_11[1],
    VAR_0,
    VAR_3, VAR_5,
    FUNC_3(VAR_9->classId));
 FUNC_4(&VAR_11[2],
    VAR_2,
    VAR_3, VAR_4,
    FUNC_2(VAR_9->objectSubId));

 VAR_12 = FUNC_5(VAR_10, VAR_6, 1,
         ((void*)0), 3, VAR_11);

 while (FUNC_1(VAR_13 = FUNC_7(VAR_12)))
  FUNC_0(VAR_10, &VAR_13->t_self);

 FUNC_6(VAR_12);

 FUNC_8(VAR_10, VAR_8);
}
