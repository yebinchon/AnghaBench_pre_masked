
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char *
FUNC_7(char VAR_4, const char *VAR_5, const char *VAR_6)
{
 StringInfoData VAR_7;

 if (VAR_4 & VAR_0)
  return FUNC_5(VAR_1);

 FUNC_4(&VAR_7);

 FUNC_2(&VAR_7, (VAR_4 & VAR_2) ? '[' : '(');

 if (FUNC_0(VAR_4))
  FUNC_3(&VAR_7, FUNC_6(VAR_5));

 FUNC_2(&VAR_7, ',');

 if (FUNC_1(VAR_4))
  FUNC_3(&VAR_7, FUNC_6(VAR_6));

 FUNC_2(&VAR_7, (VAR_4 & VAR_3) ? ']' : ')');

 return VAR_7.data;
}
