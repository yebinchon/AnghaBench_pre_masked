
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_2)
{
 int VAR_3, VAR_4 = FUNC_0(VAR_2);

 FUNC_1(&VAR_0, "%s", VAR_2);
 VAR_1 = 0;
 for (VAR_3 = 0; VAR_3 != VAR_4; VAR_3++)
  if (VAR_0[VAR_3] == '/')
   VAR_1++;
}
