
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,char*,int) ;
 int FUNC_1 (int *,char const*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(regex_t *VAR_4, const char *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_2 | VAR_0 | VAR_1);

 if (VAR_6 != 0 && VAR_5 && VAR_5[0] != '\0')
  FUNC_0(VAR_3 - 1, 0, "regex error: %d\n", VAR_6);

 return VAR_6;
}
