
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int MVDependencies ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int FUNC_6 (int ,char*,int ,...) ;
 int * FUNC_7 (int ) ;

MVDependencies *
FUNC_8(Oid VAR_4)
{
 MVDependencies *VAR_5;
 bool VAR_6;
 Datum VAR_7;
 HeapTuple VAR_8;

 VAR_8 = FUNC_4(VAR_2, FUNC_2(VAR_4));
 if (!FUNC_1(VAR_8))
  FUNC_6(VAR_1, "cache lookup failed for statistics object %u", VAR_4);

 VAR_7 = FUNC_5(VAR_2, VAR_8,
         VAR_0, &VAR_6);
 if (VAR_6)
  FUNC_6(VAR_1,
    "requested statistic kind \"%c\" is not yet built for statistics object %u",
    VAR_3, VAR_4);

 VAR_5 = FUNC_7(FUNC_0(VAR_7));

 FUNC_3(VAR_8);

 return VAR_5;
}
