
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dirty; } ;
typedef TYPE_1__ WINE_REGSTOREINFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_2(WINE_REGSTOREINFO *VAR_2, BOOL VAR_3)
{
    BOOL VAR_4;

    FUNC_1("(%p, %d)\n", VAR_2, VAR_3);

    if (VAR_2->dirty || VAR_3)
    {
        VAR_4 = FUNC_0(VAR_2);
        if (VAR_4)
            VAR_2->dirty = VAR_0;
    }
    else
        VAR_4 = VAR_1;
    return VAR_4;
}
