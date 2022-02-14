
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nulls ;
typedef int int32 ;
struct TYPE_4__ {int rd_att; } ;
typedef int SharedDependencyType ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_8,
       Oid VAR_9, Oid VAR_10, int32 VAR_11,
       Oid VAR_12, Oid VAR_13,
       SharedDependencyType VAR_14)
{
 HeapTuple VAR_15;
 Datum VAR_16[VAR_7];
 bool VAR_17[VAR_7];






 FUNC_8(VAR_12, VAR_13);

 FUNC_7(VAR_17, 0, sizeof(VAR_17));




 VAR_16[VAR_1 - 1] = FUNC_3(FUNC_4(VAR_9));
 VAR_16[VAR_0 - 1] = FUNC_3(VAR_9);
 VAR_16[VAR_3 - 1] = FUNC_3(VAR_10);
 VAR_16[VAR_4 - 1] = FUNC_2(VAR_11);

 VAR_16[VAR_5 - 1] = FUNC_3(VAR_12);
 VAR_16[VAR_6 - 1] = FUNC_3(VAR_13);
 VAR_16[VAR_2 - 1] = FUNC_1(VAR_14);

 VAR_15 = FUNC_5(VAR_8->rd_att, VAR_16, VAR_17);

 FUNC_0(VAR_8, VAR_15);


 FUNC_6(VAR_15);
}
