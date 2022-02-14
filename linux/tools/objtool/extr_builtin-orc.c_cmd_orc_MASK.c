
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int FUNC_2 (int,char const**,int ,int ,int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(int VAR_2, const char **VAR_3)
{
 const char *VAR_4;

 VAR_2--; VAR_3++;
 if (VAR_2 <= 0)
  FUNC_5(VAR_1, VAR_0);

 if (!FUNC_4(VAR_3[0], "gen", 3)) {
  VAR_2 = FUNC_2(VAR_2, VAR_3, VAR_0, VAR_1, 0);
  if (VAR_2 != 1)
   FUNC_5(VAR_1, VAR_0);

  VAR_4 = VAR_3[0];

  return FUNC_0(VAR_4, 1);
 }

 if (!FUNC_3(VAR_3[0], "dump")) {
  if (VAR_2 != 2)
   FUNC_5(VAR_1, VAR_0);

  VAR_4 = VAR_3[1];

  return FUNC_1(VAR_4);
 }

 FUNC_5(VAR_1, VAR_0);

 return 0;
}
