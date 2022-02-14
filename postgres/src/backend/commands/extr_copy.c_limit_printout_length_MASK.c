
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_1)
{


 int VAR_2 = FUNC_5(VAR_1);
 int VAR_3;
 char *VAR_4;


 if (VAR_2 <= 100)
  return FUNC_3(VAR_1);


 VAR_3 = FUNC_2(VAR_1, VAR_2, 100);




 VAR_4 = (char *) FUNC_1(VAR_3 + 4);
 FUNC_0(VAR_4, VAR_1, VAR_3);
 FUNC_4(VAR_4 + VAR_3, "...");

 return VAR_4;
}
