
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

Oid
FUNC_7(void)
{
 Oid VAR_9;


 if (VAR_5)
 {
  if (!FUNC_1(VAR_8))
   FUNC_2(VAR_3,
     (FUNC_3(VAR_2),
      FUNC_4("pg_type array OID value not set when in binary upgrade mode")));

  VAR_9 = VAR_8;
  VAR_8 = VAR_4;
 }
 else
 {
  Relation VAR_10 = FUNC_6(VAR_7, VAR_0);

  VAR_9 = FUNC_0(VAR_10, VAR_6,
           VAR_1);
  FUNC_5(VAR_10, VAR_0);
 }

 return VAR_9;
}
