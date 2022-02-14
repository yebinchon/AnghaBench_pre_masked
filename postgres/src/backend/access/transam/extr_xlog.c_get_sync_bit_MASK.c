
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(int VAR_5)
{
 int VAR_6 = 0;


 if (!VAR_4)
  return 0;
 if (!FUNC_1() && !FUNC_0())
  VAR_6 = VAR_3;

 switch (VAR_5)
 {






  case 131:
  case 130:
  case 132:
   return 0;
  default:

   FUNC_2(VAR_0, "unrecognized wal_sync_method: %d", VAR_5);
   return 0;
 }
}
