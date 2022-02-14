
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XidStatus ;
typedef int TransactionId ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int ) ;

bool
FUNC_5(TransactionId VAR_4)
{
 XidStatus VAR_5;

 VAR_5 = FUNC_3(VAR_4);




 if (VAR_5 == VAR_0)
  return 1;







 if (VAR_5 == VAR_1)
 {
  TransactionId VAR_6;

  if (FUNC_2(VAR_4, VAR_2))
   return 1;
  VAR_6 = FUNC_0(VAR_4);
  if (!FUNC_1(VAR_6))
  {

   FUNC_4(VAR_3, "no pg_subtrans entry for subcommitted XID %u",
     VAR_4);
   return 1;
  }
  return FUNC_5(VAR_6);
 }




 return 0;
}
