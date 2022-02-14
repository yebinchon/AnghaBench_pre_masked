
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int StringInfoData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char const*) ;
 scalar_t__ VAR_3 ;

void
FUNC_6(const char *VAR_4, const char *VAR_5, int32 VAR_6)
{
 if (VAR_3 == VAR_0)
 {
  StringInfoData VAR_7;

  FUNC_2(&VAR_7, 'A');
  FUNC_4(&VAR_7, VAR_6);
  FUNC_5(&VAR_7, VAR_4);
  if (FUNC_0(VAR_1) >= 3)
   FUNC_5(&VAR_7, VAR_5);
  FUNC_3(&VAR_7);






 }
 else
  FUNC_1(VAR_2, "NOTIFY for \"%s\" payload \"%s\"", VAR_4, VAR_5);
}
