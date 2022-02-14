
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int before; int len; int under; int after; } ;
typedef TYPE_1__ ellipsis_data ;
typedef char WCHAR ;
struct TYPE_8__ {int cx; } ;
typedef TYPE_2__ SIZE ;
typedef int HDC ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int,int *,int *,TYPE_2__*) ;
 int FUNC_1 (int ,char*,unsigned int,int,int *,int *,TYPE_2__*,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;
 char* FUNC_7 (char*,int ) ;

__attribute__((used)) static void FUNC_8 (HDC VAR_3, WCHAR *VAR_4, unsigned int VAR_5,
                                unsigned int *VAR_6, int VAR_7, SIZE *VAR_8,
                                WCHAR *VAR_9, ellipsis_data *VAR_10)
{
    int VAR_11;
    int VAR_12;
    int VAR_13;
    WCHAR *VAR_14, *VAR_15, *VAR_16;
    VAR_11 = FUNC_5 (VAR_1);
    if (!VAR_5) return;
    if (VAR_11 >= VAR_5) VAR_11 = VAR_5 - 1;
    if (*VAR_6 + VAR_11 >= VAR_5)
        *VAR_6 = VAR_5 - VAR_11-1;



    VAR_4[*VAR_6] = '\0';




    VAR_14 = FUNC_6 (VAR_4, VAR_0);
    VAR_15 = FUNC_6 (VAR_4, VAR_2);

    VAR_16 = VAR_14 > VAR_15 ? VAR_14 : VAR_15;
    if (!VAR_16) VAR_16 = VAR_4;
    VAR_12 = *VAR_6 - (VAR_16 - VAR_4);


    FUNC_4 (VAR_16+VAR_11, VAR_16, VAR_12 * sizeof(WCHAR));
    FUNC_3 (VAR_16, VAR_1, VAR_11*sizeof(WCHAR));
    VAR_12 += VAR_11;




    VAR_13 = 0;
    for ( ; ; )
    {




        if (!FUNC_0 (VAR_3, VAR_4, *VAR_6 + VAR_11, VAR_7,
                                    ((void*)0), ((void*)0), VAR_8)) break;

        if (VAR_16 == VAR_4 || VAR_8->cx <= VAR_7) break;


        FUNC_4 (VAR_16-1, VAR_16, VAR_12 * sizeof(WCHAR));
        VAR_16--;
        VAR_13++;

        FUNC_2 (*VAR_6);
        (*VAR_6)--;
    }
    VAR_10->before = VAR_16-VAR_4;
    VAR_10->len = VAR_11;
    VAR_10->under = VAR_13;
    VAR_10->after = VAR_12 - VAR_11;
    *VAR_6 += VAR_11;

    if (VAR_9)
    {
        FUNC_3(VAR_9, VAR_4, *VAR_6 * sizeof(WCHAR));
        VAR_9[*VAR_6] = '\0';
    }
}
