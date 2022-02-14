
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int nulls ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int*,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*,int,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

Oid
FUNC_11(Oid VAR_7)
{
 Relation VAR_8;
 HeapTuple VAR_9;
 Oid VAR_10;
 Datum VAR_11[VAR_5];
 bool VAR_12[VAR_5];

 VAR_8 = FUNC_10(VAR_4,
       VAR_6);




 FUNC_8(VAR_11, 0, sizeof(VAR_11));
 FUNC_8(VAR_12, 0, sizeof(VAR_12));

 if (FUNC_4(VAR_7))
  VAR_10 = VAR_7;
 else
  VAR_10 = FUNC_1(VAR_8,
           VAR_3,
           VAR_2);

 VAR_11[VAR_2 - 1] = FUNC_3(VAR_10);
 VAR_11[VAR_1 - 1]
  = FUNC_3(FUNC_2());
 VAR_12[VAR_0 - 1] = 1;

 VAR_9 = FUNC_6(FUNC_5(VAR_8),
         VAR_11, VAR_12);

 FUNC_0(VAR_8, VAR_9);

 FUNC_7(VAR_9);

 FUNC_9(VAR_8, VAR_6);

 return VAR_10;
}
