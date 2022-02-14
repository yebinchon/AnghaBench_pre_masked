
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {int cx; } ;
typedef TYPE_1__ SIZE ;
typedef int HDC ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,unsigned int,int,int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,char*,unsigned int,int,int *,int *,TYPE_1__*,int ) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 unsigned int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4 (HDC VAR_1, WCHAR *VAR_2, unsigned int VAR_3,
                            unsigned int *VAR_4, int VAR_5, SIZE *VAR_6,
                            WCHAR *VAR_7,
                            int *VAR_8, int *VAR_9)
{
    unsigned int VAR_10;
    unsigned int VAR_11, VAR_12, VAR_13;
    VAR_10 = FUNC_3 (VAR_0);
    if (VAR_10 > VAR_3) VAR_10 = VAR_3;
    if (*VAR_4 > VAR_3 - VAR_10)
        *VAR_4 = VAR_3 - VAR_10;


    if (*VAR_4 > 0 &&



        FUNC_0(VAR_1, VAR_2, *VAR_4, VAR_5, ((void*)0), ((void*)0), VAR_6) &&

        VAR_6->cx > VAR_5)
    {
        for (VAR_11 = 0, VAR_13 = *VAR_4; VAR_11 < VAR_13; )
        {
            VAR_12 = (VAR_11 + VAR_13) / 2;



            if (!FUNC_0(VAR_1, VAR_2, VAR_12, VAR_5, ((void*)0), ((void*)0), VAR_6))

                break;
            if (VAR_6->cx > VAR_5)
                VAR_13 = VAR_12;
            else
                VAR_11 = VAR_12 + 1;
        }
        *VAR_4 = VAR_13;
    }

    for ( ; ; )
    {
        FUNC_2(VAR_2 + *VAR_4, VAR_0, VAR_10*sizeof(WCHAR));




        if (!FUNC_0 (VAR_1, VAR_2, *VAR_4 + VAR_10, VAR_5,
                                    ((void*)0), ((void*)0), VAR_6)) break;

        if (!*VAR_4 || VAR_6->cx <= VAR_5) break;

        (*VAR_4)--;
    }
    *VAR_9 = VAR_10;
    *VAR_8 = *VAR_4;
    *VAR_4 += VAR_10;

    if (VAR_7)
    {
        FUNC_2 (VAR_7, VAR_2, *VAR_4 * sizeof(WCHAR));
        VAR_7[*VAR_4] = '\0';
    }
}
