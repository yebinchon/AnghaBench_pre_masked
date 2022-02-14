
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char) ;
 char FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(void)
{
 char VAR_3;




 VAR_3 = FUNC_5(&VAR_2);

 switch (VAR_3)
 {
  case 'r':
   FUNC_1();
   break;

  case 'h':
   FUNC_0();
   break;

  default:
   FUNC_2(VAR_0,
     (FUNC_3(VAR_1),
      FUNC_4("unexpected message type \"%c\"", VAR_3)));
   FUNC_6(0);
 }
}
