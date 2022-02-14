
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int ,int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static HeapTuple
FUNC_13(Oid VAR_9, bool VAR_10, bool VAR_11)
{
 HeapTuple VAR_12;
 Relation VAR_13;
 SysScanDesc VAR_14;
 ScanKeyData VAR_15[1];
 Snapshot VAR_16;







 if (!FUNC_4(VAR_6))
  FUNC_6(VAR_4, "cannot read pg_class without having selected a database");




 FUNC_5(&VAR_15[0],
    VAR_1,
    VAR_2, VAR_5,
    FUNC_3(VAR_9));







 VAR_13 = FUNC_12(VAR_7, VAR_0);






 if (VAR_11)
  VAR_16 = FUNC_1(VAR_7);
 else
  VAR_16 = FUNC_0(VAR_7);

 VAR_14 = FUNC_8(VAR_13, VAR_3,
            VAR_10 && VAR_8,
            VAR_16,
            1, VAR_15);

 VAR_12 = FUNC_10(VAR_14);




 if (FUNC_2(VAR_12))
  VAR_12 = FUNC_7(VAR_12);


 FUNC_9(VAR_14);
 FUNC_11(VAR_13, VAR_0);

 return VAR_12;
}
