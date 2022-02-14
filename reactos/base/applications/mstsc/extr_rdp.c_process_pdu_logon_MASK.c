
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int STREAM ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

void
FUNC_6(STREAM VAR_7)
{
 uint32 VAR_8;
 FUNC_1(VAR_7, VAR_8);
 if (VAR_8 == VAR_0)
 {
  uint32 VAR_9;

  FUNC_3(VAR_7, 2);
  FUNC_1(VAR_7, VAR_9);
  if (VAR_9 & VAR_1)
  {
   uint32 VAR_10;
   uint32 VAR_11;


   FUNC_3(VAR_7, 4);


   FUNC_1(VAR_7, VAR_10);
   if (VAR_10 != 28)
   {
    FUNC_5("Invalid length in Auto-Reconnect packet\n");
    return;
   }

   FUNC_1(VAR_7, VAR_11);
   if (VAR_11 != 1)
   {
    FUNC_5("Unsupported version of Auto-Reconnect packet\n");
    return;
   }

   FUNC_1(VAR_7, VAR_4);
   FUNC_2(VAR_7, VAR_5, 16);
   VAR_3 = VAR_2;
   VAR_6 = FUNC_4(((void*)0));
   FUNC_0(("Saving auto-reconnect cookie, id=%u\n", VAR_4));
  }
 }
}
