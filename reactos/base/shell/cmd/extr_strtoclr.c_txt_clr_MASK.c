
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {int val; scalar_t__* name; } ;
typedef int LPTSTR ;
typedef size_t INT ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static
WORD FUNC_2(LPTSTR VAR_1)
{
    INT VAR_2;

    for(VAR_2 = 0; *(VAR_0[VAR_2].name); VAR_2++)
        if (FUNC_1(VAR_1, VAR_0[VAR_2].name, FUNC_0(VAR_0[VAR_2].name)) == 0)
            return VAR_0[VAR_2].val;

    return (WORD)-1;
}
