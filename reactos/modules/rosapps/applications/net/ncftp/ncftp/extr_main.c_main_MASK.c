
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int redialDelay; void* maxDials; int acct; int pass; int user; void* port; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const** const,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 () ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_14(int VAR_4, const char **const VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_8();
 while ((VAR_6 = FUNC_2(VAR_4, VAR_5, "P:u:p:J:rd:g:FVLD")) > 0) switch(VAR_6) {
  case 'P':
  case 'u':
  case 'p':
  case 'J':
   VAR_3 = 1;
   break;
  case 'r':
  case 'g':
  case 'd':
  case 'V':
  case 'L':
  case 'D':
  case 'F':
   break;
  default:
   FUNC_11();
 }

 if (VAR_2 < VAR_4) {
  FUNC_4(0);
  FUNC_10(VAR_5[VAR_2]);
 } else if (VAR_3 != 0) {




  FUNC_11();
 }

 FUNC_3();




 while ((VAR_6 = FUNC_2(VAR_4, VAR_5, "P:u:p:j:J:rd:g:FVLD")) > 0) switch(VAR_6) {
  case 'P':
   VAR_0.port = FUNC_12(VAR_1);
   break;
  case 'u':
   (void) FUNC_9(VAR_0.user, VAR_1);
   break;
  case 'p':
   (void) FUNC_9(VAR_0.pass, VAR_1);
   break;
  case 'J':
  case 'j':
   (void) FUNC_9(VAR_0.acct, VAR_1);
   break;
  case 'r':

   break;
  case 'g':
   VAR_0.maxDials = FUNC_12(VAR_1);
   break;
  case 'd':
   VAR_7 = FUNC_12(VAR_1);
   if (VAR_7 >= 10)
    VAR_0.redialDelay = VAR_7;
   break;
  case 'F':
   FUNC_1();
   FUNC_13(0);

   break;
  case 'V':

  case 'L':

  case 'D':

   break;
  default:
   FUNC_11();
 }

 FUNC_6();
 FUNC_5();
 FUNC_0();
 FUNC_7();
 FUNC_13(0);
}
