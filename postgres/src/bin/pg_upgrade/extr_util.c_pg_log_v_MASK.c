
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef int message ;
typedef int eLogType ;
struct TYPE_2__ {scalar_t__ verbose; int * internal; } ;


 char* VAR_0 ;





 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (char*,...) ;
 int * VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_9(eLogType VAR_4, const char *VAR_5, va_list VAR_6)
{
 char VAR_7[VAR_1];

 FUNC_8(VAR_7, sizeof(VAR_7), FUNC_0(VAR_5), VAR_6);



 if (((VAR_4 != 129 && VAR_4 != 130) || VAR_2.verbose) &&
  VAR_2.internal != ((void*)0))
 {
  if (VAR_4 == 130)

   FUNC_4(VAR_2.internal, "  %s\n", VAR_7);
  else
   FUNC_4(VAR_2.internal, "%s", VAR_7);
  FUNC_2(VAR_2.internal);
 }

 switch (VAR_4)
 {
  case 129:
   if (VAR_2.verbose)
    FUNC_6("%s", VAR_7);
   break;

  case 130:

   if (FUNC_5(FUNC_3(VAR_3)))

    FUNC_6("  %s%-*.*s\r",

        FUNC_7(VAR_7) <= VAR_0 - 2 ? "" : "...",
        VAR_0 - 2, VAR_0 - 2,

        FUNC_7(VAR_7) <= VAR_0 - 2 ? VAR_7 :
        VAR_7 + FUNC_7(VAR_7) - VAR_0 + 3 + 2);
   else
    FUNC_6("  %s\n", VAR_7);
   break;

  case 131:
  case 128:
   FUNC_6("%s", VAR_7);
   break;

  case 132:
   FUNC_6("\n%s", VAR_7);
   FUNC_6(FUNC_0("Failure, exiting\n"));
   FUNC_1(1);
   break;

  default:
   break;
 }
 FUNC_2(VAR_3);
}
