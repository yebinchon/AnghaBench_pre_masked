
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _flag; int * _base; } ;
typedef int TCHAR ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static
int
FUNC_2(FILE *VAR_2, const char *VAR_3, size_t VAR_4)
{
    TCHAR VAR_5;
    int VAR_6 = 0;


     if ((VAR_2->_flag & VAR_1) && (VAR_2->_base == ((void*)0)))
        return VAR_4;


    while (VAR_4--)
    {





        VAR_5 = *VAR_3++;

        if (FUNC_1(VAR_2, VAR_5) == 0) return -1;
        VAR_6++;
    }

    return VAR_6;
}
