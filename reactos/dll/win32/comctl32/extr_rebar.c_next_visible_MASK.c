
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int uNumBands; } ;
typedef TYPE_1__ REBAR_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(const REBAR_INFO *VAR_0, int VAR_1)
{
    unsigned int VAR_2;
    for (VAR_2 = VAR_1 + 1; VAR_2 < VAR_0->uNumBands; VAR_2++)
        if (!FUNC_0(FUNC_1(VAR_0, VAR_2)))
            break;
    return VAR_2;
}
