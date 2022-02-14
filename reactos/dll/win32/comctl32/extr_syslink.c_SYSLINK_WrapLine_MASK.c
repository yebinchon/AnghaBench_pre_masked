
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {scalar_t__ cy; scalar_t__ cx; } ;
typedef char* LPWSTR ;
typedef TYPE_1__* LPSIZE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static BOOL FUNC_1 (LPWSTR VAR_3, WCHAR VAR_4, int VAR_5, int *VAR_6,
                             int VAR_7, LPSIZE VAR_8)
{
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) if (VAR_3[VAR_9] == '\n') break;

    if (VAR_9 == *VAR_6) return VAR_0;


    if (VAR_3[VAR_9] != '\n' && VAR_3[VAR_9] != VAR_4)
    {

        while (VAR_9 && VAR_3[VAR_9 - 1] != VAR_4) VAR_9--;

        if (VAR_9 == 0)
        {
            VAR_8->cx = 0;
            VAR_8->cy = 0;
            if (VAR_5 == VAR_1) VAR_9 = FUNC_0( VAR_7, 1 );
        }
    }
    *VAR_6 = VAR_9;
    return VAR_2;
}
