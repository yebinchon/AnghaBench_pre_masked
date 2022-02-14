
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int) ;
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

void
FUNC_7(const int VAR_6, const char **const VAR_7, const CommandPtr VAR_8, const ArgvInfoPtr VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13 = VAR_4;

 FUNC_0(VAR_2);
 FUNC_5();
 while ((VAR_11 = FUNC_4(VAR_6, VAR_7, "p")) >= 0) {
  if (VAR_11 == 'p') {







   VAR_13 = VAR_5;
  } else {
   FUNC_6(VAR_8);
   return;
  }
 }

 for (VAR_10=VAR_1; VAR_10<VAR_6; VAR_10++) {
  VAR_12 = FUNC_1(&VAR_0, VAR_7[VAR_10], VAR_13);
  if (VAR_12 < 0)
   FUNC_2(&VAR_0, VAR_12, VAR_3, "Could not mkdir", VAR_7[VAR_10]);
 }


 FUNC_3();
}
