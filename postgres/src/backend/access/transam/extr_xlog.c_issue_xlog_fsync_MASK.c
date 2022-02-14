
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogSegNo ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_3 ;

void
FUNC_10(int VAR_4, XLogSegNo VAR_5)
{
 FUNC_9(VAR_2);
 switch (VAR_3)
 {
  case 131:
   if (FUNC_6(VAR_4) != 0)
    FUNC_2(VAR_0,
      (FUNC_3(),
       FUNC_4("could not fsync file \"%s\": %m",
        FUNC_0(VAR_1, VAR_5))));
   break;
  case 129:
  case 128:

   break;
  default:
   FUNC_1(VAR_0, "unrecognized wal_sync_method: %d", VAR_3);
   break;
 }
 FUNC_8();
}
