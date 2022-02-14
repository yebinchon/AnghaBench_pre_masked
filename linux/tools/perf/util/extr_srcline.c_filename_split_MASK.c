
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;
 unsigned int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, unsigned int *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_0, '\n');
 if (VAR_2)
  *VAR_2 = '\0';

 if (!FUNC_1(VAR_0, "??:0"))
  return 0;

 VAR_2 = FUNC_0(VAR_0, ':');
 if (VAR_2) {
  *VAR_2++ = '\0';
  *VAR_1 = FUNC_2(VAR_2, ((void*)0), 0);
  return 1;
 }

 return 0;
}
