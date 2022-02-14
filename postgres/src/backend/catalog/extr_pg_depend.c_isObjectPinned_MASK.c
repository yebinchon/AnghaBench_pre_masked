
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ deptype; } ;
struct TYPE_4__ {int objectId; int classId; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_depend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(const ObjectAddress *VAR_6, Relation VAR_7)
{
 bool VAR_8 = 0;
 SysScanDesc VAR_9;
 HeapTuple VAR_10;
 ScanKeyData VAR_11[2];

 FUNC_3(&VAR_11[0],
    VAR_0,
    VAR_2, VAR_5,
    FUNC_2(VAR_6->classId));

 FUNC_3(&VAR_11[1],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_2(VAR_6->objectId));

 VAR_9 = FUNC_4(VAR_7, VAR_4, 1,
         ((void*)0), 2, VAR_11);







 VAR_10 = FUNC_6(VAR_9);
 if (FUNC_1(VAR_10))
 {
  Form_pg_depend VAR_12 = (Form_pg_depend) FUNC_0(VAR_10);

  if (VAR_12->deptype == VAR_3)
   VAR_8 = 1;
 }

 FUNC_5(VAR_9);

 return VAR_8;
}
