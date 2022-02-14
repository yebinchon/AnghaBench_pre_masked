
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static char *FUNC_5(char *VAR_0, int VAR_1)
{
 time_t VAR_2;

 VAR_2 = FUNC_4(((void*)0));
 if (FUNC_2(VAR_0, VAR_1, "%T", FUNC_0(&VAR_2)) == 0) {
  FUNC_1(VAR_0, 0, VAR_1);
  FUNC_3(VAR_0, "00:00:00", VAR_1-1);
 }

 return VAR_0;
}
