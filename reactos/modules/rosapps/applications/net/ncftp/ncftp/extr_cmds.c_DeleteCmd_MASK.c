
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* noglobargv; } ;
typedef int CommandPtr ;
typedef TYPE_1__* ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int,int ) ;
 int FUNC_2 (int *,int,int ,char*,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int const,char const** const,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_7(const int VAR_8, const char **const VAR_9, const CommandPtr VAR_10, const ArgvInfoPtr VAR_11)
{
 int VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = VAR_6;

 FUNC_0(VAR_2);
 FUNC_5();
 while ((VAR_14 = FUNC_4(VAR_8, VAR_9, "rf")) > 0) switch(VAR_14) {
  case 'r':
   VAR_15 = VAR_7;
   break;
  case 'f':

   break;
  default:
   FUNC_6(VAR_10);
   return;
 }

 for (VAR_13=VAR_1; VAR_13<VAR_8; VAR_13++) {
  VAR_12 = FUNC_1(
    &VAR_0, VAR_9[VAR_13], VAR_15,
    (VAR_11->noglobargv[VAR_13] != 0) ? VAR_4: VAR_5
   );
  if (VAR_12 < 0) {
   FUNC_2(&VAR_0, VAR_12, VAR_3, "delete", VAR_9[VAR_13]);

  }
 }


 FUNC_3();
}
