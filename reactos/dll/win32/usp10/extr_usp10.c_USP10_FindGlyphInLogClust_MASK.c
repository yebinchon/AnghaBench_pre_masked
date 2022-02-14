
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_3__ {scalar_t__ target; int ascending; } ;
typedef size_t INT ;
typedef TYPE_1__ FindGlyph_struct ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (TYPE_1__*,scalar_t__ const*,int,int,int ) ;
 int VAR_2 ;

int FUNC_1(const WORD* VAR_3, int VAR_4, WORD VAR_5)
{
    FindGlyph_struct VAR_6;
    WORD *VAR_7;
    INT VAR_8;

    if (VAR_3[0] < VAR_3[VAR_4-1])
        VAR_6.ascending = VAR_1;
    else
        VAR_6.ascending = VAR_0;

    VAR_6.target = VAR_5;
    VAR_7 = FUNC_0(&VAR_6, VAR_3, VAR_4, sizeof(WORD), VAR_2);

    if (!VAR_7)
        return -1;

    for (VAR_8 = (VAR_7 - VAR_3)-1; VAR_8 >= 0 && VAR_3[VAR_8] == VAR_5; VAR_8--)
    ;
    VAR_8++;

    return VAR_8;
}
