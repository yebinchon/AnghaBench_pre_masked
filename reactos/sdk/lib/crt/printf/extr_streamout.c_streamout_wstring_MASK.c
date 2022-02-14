
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int _flag; int * _base; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static
int
FUNC_2(FILE *VAR_2, const wchar_t *VAR_3, size_t VAR_4)
{
    wchar_t VAR_5;
    int VAR_6 = 0;






    while (VAR_4--)
    {

        char VAR_7[VAR_0], *VAR_8 = VAR_7;
        int VAR_9;

        VAR_9 = FUNC_1(VAR_7, *VAR_3++);
        if (VAR_9 <= 0) return VAR_6;

        while (VAR_5 = *VAR_8++, VAR_9--)



        {
            if (FUNC_0(VAR_2, VAR_5) == 0) return -1;
            VAR_6++;
        }
    }

    return VAR_6;
}
