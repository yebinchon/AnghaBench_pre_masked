
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inet ;
typedef int bytea ;
typedef int StringInfoData ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char FUNC_2 (int *) ;
 char FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char) ;

__attribute__((used)) static bytea *
FUNC_7(inet *VAR_0, bool VAR_1)
{
 StringInfoData VAR_2;
 char *VAR_3;
 int VAR_4,
    VAR_5;

 FUNC_4(&VAR_2);
 FUNC_6(&VAR_2, FUNC_3(VAR_0));
 FUNC_6(&VAR_2, FUNC_2(VAR_0));
 FUNC_6(&VAR_2, VAR_1);
 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 < 0)
  VAR_4 = 0;
 FUNC_6(&VAR_2, VAR_4);
 VAR_3 = (char *) FUNC_0(VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_6(&VAR_2, VAR_3[VAR_5]);
 return FUNC_5(&VAR_2);
}
