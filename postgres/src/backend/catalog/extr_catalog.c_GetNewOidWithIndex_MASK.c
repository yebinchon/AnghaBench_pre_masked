
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int ,int ,int,int ,int,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

Oid
FUNC_12(Relation VAR_5, Oid VAR_6, AttrNumber VAR_7)
{
 Oid VAR_8;
 SysScanDesc VAR_9;
 ScanKeyData VAR_10;
 bool VAR_11;


 FUNC_0(FUNC_5(VAR_5));


 if (FUNC_4())
  return FUNC_2();







 FUNC_0(!VAR_2 || FUNC_7(VAR_5) != VAR_4);


 do
 {
  FUNC_1();

  VAR_8 = FUNC_2();

  FUNC_8(&VAR_10,
     VAR_7,
     VAR_0, VAR_1,
     FUNC_6(VAR_8));


  VAR_9 = FUNC_9(VAR_5, VAR_6, 1,
          VAR_3, 1, &VAR_10);

  VAR_11 = FUNC_3(FUNC_11(VAR_9));

  FUNC_10(VAR_9);
 } while (VAR_11);

 return VAR_8;
}
