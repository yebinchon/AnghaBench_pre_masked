
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 char* VAR_7 ;
 int VAR_8 ;

void FUNC_3()
{
    int VAR_9, VAR_10, VAR_11 = 0;

    VAR_5 = 0;

    FUNC_1('$');
    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
    {
        FUNC_1(VAR_3[VAR_9]);
    }
    FUNC_1('#');
    FUNC_1(VAR_7[(VAR_4 >> 4) & 15]);
    FUNC_1(VAR_7[VAR_4 & 15]);

    while(!FUNC_2(VAR_8) && ((VAR_10 = FUNC_0()) != '+') && (VAR_10 != '$'));
    if (VAR_10 == '$')
    {
        VAR_6 = 0;
        VAR_1 = 0;
        VAR_0 = 0;
    }
}
