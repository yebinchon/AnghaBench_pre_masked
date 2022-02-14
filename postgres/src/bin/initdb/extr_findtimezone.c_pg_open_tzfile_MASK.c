
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fullname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ) ;
 char const* FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_0];

 if (VAR_5)
  FUNC_3(VAR_5, VAR_4, VAR_3 + 1);

 FUNC_3(VAR_6, FUNC_1(), sizeof(VAR_6));
 if (FUNC_4(VAR_6) + 1 + FUNC_4(VAR_4) >= VAR_0)
  return -1;
 FUNC_2(VAR_6, "/");
 FUNC_2(VAR_6, VAR_4);

 return FUNC_0(VAR_6, VAR_1 | VAR_2, 0);
}
