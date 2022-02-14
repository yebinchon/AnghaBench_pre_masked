
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4, bool VAR_5, int VAR_6)
{
 int VAR_7;


 if (VAR_5)
  return;

 VAR_7 = FUNC_1(VAR_4, VAR_1 | VAR_2);

 if (VAR_7 < 0)
 {
  if (VAR_3 == VAR_0)
   return;
  FUNC_2(VAR_6,
    (FUNC_3(),
     FUNC_4("could not open file \"%s\": %m", VAR_4)));
  return;
 }





 FUNC_5(VAR_7, 0, 0);

 if (FUNC_0(VAR_7) != 0)
  FUNC_2(VAR_6,
    (FUNC_3(),
     FUNC_4("could not close file \"%s\": %m", VAR_4)));
}
