
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int Snapshot ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int ,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static bool
FUNC_8(Oid VAR_6, Snapshot VAR_7)
{
 Relation VAR_8;
 ScanKeyData VAR_9[1];
 SysScanDesc VAR_10;
 HeapTuple VAR_11;
 bool VAR_12 = 0;

 FUNC_2(&VAR_9[0],
    VAR_1,
    VAR_2, VAR_3,
    FUNC_1(VAR_6));

 VAR_8 = FUNC_7(VAR_5,
       VAR_0);

 VAR_10 = FUNC_3(VAR_8,
       VAR_4, 1,
       VAR_7, 1, VAR_9);

 VAR_11 = FUNC_5(VAR_10);
 if (FUNC_0(VAR_11))
  VAR_12 = 1;

 FUNC_4(VAR_10);

 FUNC_6(VAR_8, VAR_0);

 return VAR_12;
}
