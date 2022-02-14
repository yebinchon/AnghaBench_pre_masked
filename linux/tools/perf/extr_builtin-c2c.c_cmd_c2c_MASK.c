
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char const**,int ,int ,int ) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(int VAR_3, const char **VAR_4)
{
 VAR_3 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2,
        VAR_0);

 if (!VAR_3)
  FUNC_4(VAR_2, VAR_1);

 if (!FUNC_3(VAR_4[0], "rec", 3)) {
  return FUNC_1(VAR_3, VAR_4);
 } else if (!FUNC_3(VAR_4[0], "rep", 3)) {
  return FUNC_2(VAR_3, VAR_4);
 } else {
  FUNC_4(VAR_2, VAR_1);
 }

 return 0;
}
