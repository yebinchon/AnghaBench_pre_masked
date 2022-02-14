
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_stream ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static inline int FUNC_3(php_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 VAR_1[0] = '\0';
 while (FUNC_1(VAR_0, VAR_1, VAR_2-1) &&
     !(FUNC_0((int) VAR_1[0]) && FUNC_0((int) VAR_1[1]) &&
    FUNC_0((int) VAR_1[2]) && VAR_1[3] == ' '));
 return FUNC_2(VAR_1, ((void*)0), 10);
}
