
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtype ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,char*,int,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;

void FUNC_5 (char *VAR_2, rtype VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    char VAR_7[VAR_0+1], *VAR_8;
    char VAR_9;
    int VAR_10;

    if( !FUNC_0(VAR_3) ) {
        if( FUNC_1(VAR_3) )
            FUNC_4 (VAR_2, "NaN");
        else if( VAR_3 < 0)
            FUNC_4 (VAR_2, "-Infinity");
        else
            FUNC_4 (VAR_2, "Infinity");
        return;
    }

    if (VAR_6 == 0)
        VAR_6 = 6;
    else if (VAR_6 > VAR_1)
        VAR_6 = VAR_1;


    VAR_8 = VAR_7 + 1;
    *VAR_8 = '\0';
    VAR_10 = FUNC_2 (VAR_3, VAR_6, &VAR_9, VAR_4, VAR_8, VAR_7 + sizeof(VAR_7));
    if (*VAR_8 == '\0')
        VAR_8++;

    if (VAR_9)
        *--VAR_8 = VAR_9, VAR_10++;

    VAR_8[VAR_10] = 0;
    FUNC_3 (VAR_2, VAR_8, VAR_10 + 1);
}
