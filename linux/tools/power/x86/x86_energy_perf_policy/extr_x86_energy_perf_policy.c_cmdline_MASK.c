
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {char* member_0; char member_3; int member_2; int const member_1; } ;
struct TYPE_2__ {int hwp_use_pkg; int hwp_window; int hwp_epp; int hwp_max; int hwp_min; int hwp_desired; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int,char**,char*,struct option*,int*) ;
 int VAR_2 ;

 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 char* VAR_5 ;
 TYPE_1__ VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 () ;
 int VAR_11 ;

void FUNC_17(int VAR_12, char **VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;

 static struct option VAR_16[] = {
  {"all", 128, 0, 'a'},
  {"cpu", 128, 0, 'c'},
  {"pkg", 128, 0, 'p'},
  {"debug", 129, 0, 'd'},
  {"hwp-desired", 128, 0, 'D'},
  {"epb", 128, 0, 'B'},
  {"force", 129, 0, 'f'},
  {"hwp-enable", 129, 0, 'e'},
  {"help", 129, 0, 'h'},
  {"hwp-epp", 128, 0, 'P'},
  {"hwp-min", 128, 0, 'm'},
  {"hwp-max", 128, 0, 'M'},
  {"read", 129, 0, 'r'},
  {"turbo-enable", 128, 0, 't'},
  {"hwp-use-pkg", 128, 0, 'u'},
  {"version", 129, 0, 'v'},
  {"hwp-window", 128, 0, 'w'},
  {0, 0, 0, 0 }
 };

 VAR_5 = VAR_13[0];

 while ((VAR_14 = FUNC_3(VAR_12, VAR_13, "+a:c:dD:E:e:f:m:M:rt:u:vw:",
    VAR_16, &VAR_15)) != -1) {
  switch (VAR_14) {
  case 'a':
   FUNC_4(VAR_3);
   break;
  case 'B':
   VAR_2 = FUNC_6(FUNC_14(VAR_3));
   break;
  case 'c':
   FUNC_5(VAR_3);
   break;
  case 'e':
   VAR_9 = 1;
   break;
  case 'h':
   FUNC_16();
   break;
  case 'd':
   VAR_0++;
   VAR_11++;
   break;
  case 'f':
   VAR_1++;
   break;
  case 'D':
   VAR_6.hwp_desired = FUNC_7(FUNC_14(VAR_3));
   break;
  case 'm':
   VAR_6.hwp_min = FUNC_10(FUNC_14(VAR_3));
   break;
  case 'M':
   VAR_6.hwp_max = FUNC_9(FUNC_14(VAR_3));
   break;
  case 'p':
   FUNC_12(VAR_3);
   break;
  case 'P':
   VAR_6.hwp_epp = FUNC_8(FUNC_14(VAR_3));
   break;
  case 'r':

   break;
  case 't':
   VAR_8 = FUNC_13(FUNC_14(VAR_3));
   break;
  case 'u':
   VAR_10++;
   if (FUNC_0(VAR_3) == 0)
    VAR_6.hwp_use_pkg = 0;
   else
    VAR_6.hwp_use_pkg = 1;
   break;
  case 'v':
   FUNC_15();
   FUNC_1(0);
   break;
  case 'w':
   VAR_6.hwp_window = FUNC_11(FUNC_14(VAR_3));
   break;
  default:
   FUNC_16();
  }
 }




 if (VAR_12 == VAR_4 + 1)
  VAR_2 = FUNC_6(FUNC_14(VAR_13[VAR_4]));

 if (VAR_12 > VAR_4 + 1) {
  FUNC_2(VAR_7, "stray parameter '%s'\n", VAR_13[VAR_4 + 1]);
  FUNC_16();
 }
}
