
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

Oid
FUNC_4(Oid VAR_3, AttrNumber VAR_4, bool VAR_5)
{
 List *VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0);

 if (FUNC_3(VAR_6) > 1)
  FUNC_0(VAR_1, "more than one owned sequence found");
 else if (FUNC_3(VAR_6) < 1)
 {
  if (VAR_5)
   return VAR_2;
  else
   FUNC_0(VAR_1, "no owned sequence found");
 }

 return FUNC_2(VAR_6);
}
