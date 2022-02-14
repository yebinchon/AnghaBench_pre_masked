
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;
typedef scalar_t__ LOCKMODE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ) ;

Relation
FUNC_9(Oid VAR_6, LOCKMODE VAR_7)
{
 Relation VAR_8;

 FUNC_0(VAR_7 >= VAR_4 && VAR_7 < VAR_2);


 if (VAR_7 != VAR_4)
  FUNC_3(VAR_6, VAR_7);


 VAR_8 = FUNC_4(VAR_6);

 if (!FUNC_5(VAR_8))
  FUNC_7(VAR_1, "could not open relation with OID %u", VAR_6);





 FUNC_0(VAR_7 != VAR_4 ||
     FUNC_2() ||
     FUNC_1(VAR_8, VAR_0, 1));


 if (FUNC_6(VAR_8))
  VAR_3 |= VAR_5;

 FUNC_8(VAR_8);

 return VAR_8;
}
