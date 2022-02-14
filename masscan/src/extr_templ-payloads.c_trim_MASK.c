
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int ) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0, size_t VAR_1)
{
    if (VAR_1 > FUNC_2(VAR_0))
        VAR_1 = FUNC_2(VAR_0);

    while (FUNC_0(*VAR_0 & 0xFF))
        FUNC_1(VAR_0, VAR_0+1, VAR_1--);
    while (FUNC_0(VAR_0[VAR_1-1] & 0xFF))
        VAR_0[--VAR_1] = '\0';
}
