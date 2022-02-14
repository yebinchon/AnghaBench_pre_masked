
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int ,int ) ;

TransactionId
FUNC_6(TransactionId VAR_2)
{
 TransactionId VAR_3 = VAR_2,
    VAR_4 = VAR_2;


 FUNC_0(FUNC_2(VAR_2, VAR_1));

 while (FUNC_3(VAR_3))
 {
  VAR_4 = VAR_3;
  if (FUNC_4(VAR_3, VAR_1))
   break;
  VAR_3 = FUNC_1(VAR_3);






  if (!FUNC_4(VAR_3, VAR_4))
   FUNC_5(VAR_0, "pg_subtrans contains invalid entry: xid %u points to parent xid %u",
     VAR_4, VAR_3);
 }

 FUNC_0(FUNC_3(VAR_4));

 return VAR_4;
}
