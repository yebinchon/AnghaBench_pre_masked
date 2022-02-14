
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(void)
{




 char VAR_7[16];
 int VAR_8;

 for (;;)
 {
  VAR_8 = FUNC_1(VAR_5, VAR_7, sizeof(VAR_7));
  if (VAR_8 < 0)
  {
   if (VAR_4 == VAR_0 || VAR_4 == VAR_3)
    break;
   else if (VAR_4 == VAR_1)
    continue;
   else
   {
    VAR_6 = 0;
    FUNC_0(VAR_2, "read() on self-pipe failed: %m");
   }
  }
  else if (VAR_8 == 0)
  {
   VAR_6 = 0;
   FUNC_0(VAR_2, "unexpected EOF on self-pipe");
  }
  else if (VAR_8 < sizeof(VAR_7))
  {

   break;
  }

 }
}
