
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char) ;
 size_t FUNC_1 (char*) ;

void FUNC_2(char *VAR_1)
{
    size_t VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 > 0 && FUNC_0(VAR_0, VAR_1[VAR_2 - 1]))
        VAR_1[VAR_2 - 1] = '\0';
}
