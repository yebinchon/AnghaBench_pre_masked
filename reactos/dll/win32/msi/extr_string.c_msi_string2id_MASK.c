
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sortcount; size_t* sorted; TYPE_1__* strings; } ;
typedef TYPE_2__ string_table ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_4__ {int len; int data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int const*,int,int ,int ) ;
 int FUNC_1 (int const*) ;

UINT FUNC_2( const string_table *VAR_2, const WCHAR *VAR_3, int VAR_4, UINT *VAR_5 )
{
    int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = VAR_2->sortcount - 1;

    if (VAR_4 < 0) VAR_4 = FUNC_1( VAR_3 );

    while (VAR_8 <= VAR_9)
    {
        VAR_6 = (VAR_8 + VAR_9) / 2;
        VAR_7 = FUNC_0( VAR_3, VAR_4, VAR_2->strings[VAR_2->sorted[VAR_6]].data, VAR_2->strings[VAR_2->sorted[VAR_6]].len );

        if (VAR_7 < 0)
            VAR_9 = VAR_6 - 1;
        else if (VAR_7 > 0)
            VAR_8 = VAR_6 + 1;
        else
        {
            *VAR_5 = VAR_2->sorted[VAR_6];
            return VAR_1;
        }
    }
    return VAR_0;
}
