
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 unsigned int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 if (FUNC_3(VAR_0, "$Revision", FUNC_2("$Revision")) != 0)
  return 0;


 VAR_2 = FUNC_2(VAR_0) + FUNC_2(VAR_0 + FUNC_2(VAR_0) + 1) + 2;



 VAR_1 = FUNC_2("$Revision");
 if (VAR_0[VAR_1] == ':' || VAR_0[VAR_1] == '$')
  VAR_1++;
 while (FUNC_0(VAR_0[VAR_1]))
  VAR_1++;
 FUNC_1(VAR_0, VAR_0+VAR_1, VAR_2-VAR_1);
 VAR_2 -= VAR_1;


 VAR_1 = 0;
 while (VAR_0[VAR_1] && !FUNC_0(VAR_0[VAR_1]))
  VAR_1++;
 FUNC_1(VAR_0 + VAR_1, VAR_0 + FUNC_2(VAR_0),
  VAR_2 - FUNC_2(VAR_0));
 return 1;
}
