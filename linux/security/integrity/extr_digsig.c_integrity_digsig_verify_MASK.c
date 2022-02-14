
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*,char const*,int,char const*,int) ;
 int FUNC_3 (struct key*,char const*,int,char const*,int) ;
 struct key* FUNC_4 (unsigned int const) ;

int FUNC_5(const unsigned int VAR_2, const char *VAR_3, int VAR_4,
       const char *VAR_5, int VAR_6)
{
 struct key *VAR_7;

 if (VAR_4 < 2)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 switch (VAR_3[1]) {
 case 1:

  return FUNC_3(VAR_7, VAR_3 + 1, VAR_4 - 1, VAR_5,
         VAR_6);
 case 2:
  return FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5,
      VAR_6);
 }

 return -VAR_1;
}
