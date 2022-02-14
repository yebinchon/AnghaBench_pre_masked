
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int WCHAR ;
struct TYPE_5__ {int style; scalar_t__ line_count; scalar_t__ text; } ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static INT FUNC_3(EDITSTATE *VAR_1, INT VAR_2, LPWSTR VAR_3)
{
    INT VAR_4, VAR_5;
    LPWSTR VAR_6;
    INT VAR_7;

    if (VAR_1->style & VAR_0)
    {
        if (VAR_2 >= VAR_1->line_count)
            return 0;
    }
    else
        VAR_2 = 0;

    VAR_7 = FUNC_0(VAR_1, VAR_2);
    VAR_6 = VAR_1->text + VAR_7;
    VAR_4 = FUNC_1(VAR_1, VAR_7);
    VAR_5 = *(WORD *)VAR_3;

    if (VAR_5 <= VAR_4)
    {
        FUNC_2(VAR_3, VAR_6, VAR_5 * sizeof(WCHAR));
        return VAR_5;
    }
    else
    {
        FUNC_2(VAR_3, VAR_6, VAR_4 * sizeof(WCHAR));
        VAR_3[VAR_4] = 0;
        return VAR_4;
    }
}
