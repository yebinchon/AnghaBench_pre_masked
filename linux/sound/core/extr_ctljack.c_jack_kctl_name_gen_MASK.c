
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,char const*) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, const char *VAR_1, int VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_1);
 bool VAR_4 = 1;


 if (VAR_3 >= 5)
  VAR_4 = FUNC_2(&VAR_1[VAR_3 - 5], " Jack", 5) ? 1 : 0;

 FUNC_0(VAR_0, VAR_2, VAR_4 ? "%s Jack" : "%s", VAR_1);

}
