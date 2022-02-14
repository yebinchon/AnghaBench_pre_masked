
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int * LPTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int **) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
WORD FUNC_4(LPTSTR* VAR_2)
{
    LPTSTR VAR_3;
    BOOL VAR_4;

    WORD VAR_5,VAR_6;

    VAR_3 = *VAR_2;

    if (!(*VAR_3))
        return (WORD)-1;


    VAR_4 = VAR_0;

    if (FUNC_1(VAR_3,FUNC_0("bri"),3) == 0)
    {
        VAR_4 = VAR_1;

        if (FUNC_2(&VAR_3))
            return (WORD)-1;
    }

    if ((VAR_5 = FUNC_3(VAR_3)) == (WORD)-1)
    {
        return (WORD)-1;
    }


    if (FUNC_2(&VAR_3) || FUNC_2(&VAR_3))
        return (WORD)-1;

    VAR_6 = VAR_5 | (VAR_4 << 3);


    VAR_4 = VAR_0;

    if (FUNC_1(VAR_3,FUNC_0("bri"),3) == 0 )
    {
        VAR_4 = VAR_1;

        if (FUNC_2(&VAR_3))
            return (WORD)-1;
    }

    if ( (VAR_5 = FUNC_3(VAR_3)) == (WORD)-1 )
        return (WORD)-1;

    FUNC_2(&VAR_3);

    *VAR_2 = VAR_3;


    return VAR_6 | VAR_5 << 4 | VAR_4 << 7;
}
