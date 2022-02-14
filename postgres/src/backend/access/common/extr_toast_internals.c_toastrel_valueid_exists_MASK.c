
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int,int ,int,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int ,int ,int **,int*) ;

__attribute__((used)) static bool
FUNC_8(Relation VAR_4, Oid VAR_5)
{
 bool VAR_6 = 0;
 ScanKeyData VAR_7;
 SysScanDesc VAR_8;
 int VAR_9;
 int VAR_10;
 Relation *VAR_11;


 VAR_10 = FUNC_7(VAR_4,
         VAR_2,
         &VAR_11,
         &VAR_9);




 FUNC_2(&VAR_7,
    (AttrNumber) 1,
    VAR_0, VAR_1,
    FUNC_0(VAR_5));




 VAR_8 = FUNC_3(VAR_4,
           FUNC_1(VAR_11[VAR_10]),
           1, VAR_3, 1, &VAR_7);

 if (FUNC_5(VAR_8) != ((void*)0))
  VAR_6 = 1;

 FUNC_4(VAR_8);


 FUNC_6(VAR_11, VAR_9, VAR_2);

 return VAR_6;
}
