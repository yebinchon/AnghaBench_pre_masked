
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;
typedef int DIR ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*,char*,int) ;

__attribute__((used)) static void FUNC_3(DIR *VAR_0, const char *VAR_1)
{
 char VAR_2[4096];
 ssize_t VAR_3;

 VAR_3 = FUNC_2(FUNC_1(VAR_0), VAR_1, VAR_2, sizeof(VAR_2));
 FUNC_0((0 <= VAR_3 && VAR_3 <= sizeof(VAR_2)) || VAR_3 == -1);
}
