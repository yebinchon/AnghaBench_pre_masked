
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {int * cp; int * cpend; } ;
typedef TYPE_1__ CompilerState ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static UINT
FUNC_3(WCHAR VAR_2, UINT VAR_3, UINT (*VAR_4)(CompilerState *VAR_5),
                CompilerState *VAR_6)
{
    UINT VAR_7 = FUNC_1(VAR_2);
    BOOL VAR_8 = (VAR_7 > VAR_3 && (!VAR_4 || VAR_7 > VAR_4(VAR_6)));


    FUNC_2(VAR_3 <= ((UINT)-1 - 9) / 10);
    while (VAR_6->cp < VAR_6->cpend) {
        VAR_2 = *VAR_6->cp;
        if (!FUNC_0(VAR_2))
            break;
        VAR_7 = 10 * VAR_7 + FUNC_1(VAR_2);
        if (!VAR_8 && VAR_7 > VAR_3 && (!VAR_4 || VAR_7 > VAR_4(VAR_6)))
            VAR_8 = VAR_1;
        ++VAR_6->cp;
    }
    return VAR_8 ? VAR_0 : VAR_7;
}
