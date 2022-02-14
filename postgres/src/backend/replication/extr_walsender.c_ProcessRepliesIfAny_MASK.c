
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned char*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (char,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_12(void)
{
 unsigned char VAR_9;
 int VAR_10;
 bool VAR_11 = 0;

 VAR_3 = FUNC_0();

 for (;;)
 {
  FUNC_9();
  VAR_10 = FUNC_6(&VAR_9);
  if (VAR_10 < 0)
  {

   FUNC_2(VAR_0,
     (FUNC_3(VAR_1),
      FUNC_4("unexpected EOF on standby connection")));
   FUNC_10(0);
  }
  if (VAR_10 == 0)
  {

   FUNC_5();
   break;
  }


  FUNC_11(&VAR_5);
  if (FUNC_7(&VAR_5, 0))
  {
   FUNC_2(VAR_0,
     (FUNC_3(VAR_1),
      FUNC_4("unexpected EOF on standby connection")));
   FUNC_10(0);
  }
  if (VAR_6 && VAR_9 != 'X')
   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("unexpected standby message type \"%c\", after receiving CopyDone",
       VAR_9)));


  switch (VAR_9)
  {



   case 'd':
    FUNC_1();
    VAR_11 = 1;
    break;





   case 'c':
    if (!VAR_7)
    {
     FUNC_8('c', ((void*)0), 0);
     VAR_7 = 1;
    }

    VAR_6 = 1;
    VAR_11 = 1;
    break;




   case 'X':
    FUNC_10(0);

   default:
    FUNC_2(VAR_2,
      (FUNC_3(VAR_1),
       FUNC_4("invalid standby message type \"%c\"",
        VAR_9)));
  }
 }




 if (VAR_11)
 {
  VAR_4 = VAR_3;
  VAR_8 = 0;
 }
}
