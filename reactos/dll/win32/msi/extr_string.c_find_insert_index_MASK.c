
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sortcount; size_t* sorted; TYPE_1__* strings; } ;
typedef TYPE_2__ string_table ;
typedef size_t UINT ;
struct TYPE_4__ {int len; int data; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1( const string_table *VAR_0, UINT VAR_1 )
{
    int VAR_2, VAR_3, VAR_4 = 0, VAR_5 = VAR_0->sortcount - 1;

    while (VAR_4 <= VAR_5)
    {
        VAR_2 = (VAR_4 + VAR_5) / 2;
        VAR_3 = FUNC_0( VAR_0->strings[VAR_1].data, VAR_0->strings[VAR_1].len,
                        VAR_0->strings[VAR_0->sorted[VAR_2]].data, VAR_0->strings[VAR_0->sorted[VAR_2]].len );
        if (VAR_3 < 0)
            VAR_5 = VAR_2 - 1;
        else if (VAR_3 > 0)
            VAR_4 = VAR_2 + 1;
        else
            return -1;
    }
    return VAR_5 + 1;
}
