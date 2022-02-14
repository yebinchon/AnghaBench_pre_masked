
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Relation ;
typedef int Oid ;
typedef scalar_t__ LOCKMODE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *) ;

Relation
FUNC_11(Oid VAR_7, LOCKMODE VAR_8)
{
 Relation VAR_9;

 FUNC_0(VAR_8 >= VAR_4 && VAR_8 < VAR_2);


 if (VAR_8 != VAR_4)
  FUNC_2(VAR_7, VAR_8);





 if (!FUNC_7(VAR_5, FUNC_3(VAR_7)))
 {

  if (VAR_8 != VAR_4)
   FUNC_8(VAR_7, VAR_8);

  return ((void*)0);
 }


 VAR_9 = FUNC_4(VAR_7);

 if (!FUNC_5(VAR_9))
  FUNC_9(VAR_1, "could not open relation with OID %u", VAR_7);


 FUNC_0(VAR_8 != VAR_4 ||
     FUNC_1(VAR_9, VAR_0, 1));


 if (FUNC_6(VAR_9))
  VAR_3 |= VAR_6;

 FUNC_10(VAR_9);

 return VAR_9;
}
