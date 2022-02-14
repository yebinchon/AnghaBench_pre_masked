
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int * FUNC_7 (int ) ;

List *
FUNC_8(Oid VAR_4, AttrNumber VAR_5)
{
 List *VAR_6;
 HeapTuple VAR_7;
 Datum VAR_8;
 bool VAR_9;

 VAR_7 = FUNC_4(VAR_0,
       FUNC_2(VAR_4),
       FUNC_1(VAR_5));
 if (!FUNC_0(VAR_7))
  FUNC_6(VAR_2, "cache lookup failed for attribute %d of relation %u",
    VAR_5, VAR_4);
 VAR_8 = FUNC_5(VAR_0,
       VAR_7,
       VAR_1,
       &VAR_9);
 if (VAR_9)
  VAR_6 = VAR_3;
 else
  VAR_6 = FUNC_7(VAR_8);

 FUNC_3(VAR_7);

 return VAR_6;
}
