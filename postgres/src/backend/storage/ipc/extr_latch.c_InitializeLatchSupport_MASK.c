
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (int*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_5(void)
{

 int VAR_10[2];

 if (VAR_4)
 {






  if (VAR_7 != 0)
  {

   FUNC_0(VAR_7 != VAR_5);

   (void) FUNC_1(VAR_8);
   (void) FUNC_1(VAR_9);

   VAR_8 = VAR_9 = -1;
   VAR_7 = 0;
  }
  else
  {





   FUNC_0(VAR_8 == -1);
  }
 }
 else
 {

  FUNC_0(VAR_8 == -1);
  FUNC_0(VAR_7 == 0);
 }
 if (FUNC_4(VAR_10) < 0)
  FUNC_2(VAR_0, "pipe() failed: %m");
 if (FUNC_3(VAR_10[0], VAR_3, VAR_6) == -1)
  FUNC_2(VAR_0, "fcntl(F_SETFL) failed on read-end of self-pipe: %m");
 if (FUNC_3(VAR_10[1], VAR_3, VAR_6) == -1)
  FUNC_2(VAR_0, "fcntl(F_SETFL) failed on write-end of self-pipe: %m");
 if (FUNC_3(VAR_10[0], VAR_2, VAR_1) == -1)
  FUNC_2(VAR_0, "fcntl(F_SETFD) failed on read-end of self-pipe: %m");
 if (FUNC_3(VAR_10[1], VAR_2, VAR_1) == -1)
  FUNC_2(VAR_0, "fcntl(F_SETFD) failed on write-end of self-pipe: %m");

 VAR_8 = VAR_10[0];
 VAR_9 = VAR_10[1];
 VAR_7 = VAR_5;



}
