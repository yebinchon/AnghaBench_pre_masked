
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = FUNC_2(VAR_1);

 while (VAR_2 > 0 && FUNC_0((unsigned char) VAR_1[VAR_2 - 1]))
  VAR_1[--VAR_2] = '\0';
 return VAR_1;
}
