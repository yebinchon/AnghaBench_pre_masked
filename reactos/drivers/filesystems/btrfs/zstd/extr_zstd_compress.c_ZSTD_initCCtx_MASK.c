
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_5__ {int bmi2; int customMem; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_6(ZSTD_CCtx* VAR_0, ZSTD_customMem VAR_1)
{
    FUNC_4(VAR_0 != ((void*)0));
    FUNC_5(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->customMem = VAR_1;
    VAR_0->bmi2 = FUNC_2(FUNC_1());
    { size_t const VAR_2 = FUNC_0(VAR_0);
        FUNC_4(!FUNC_3(VAR_2));
        (void)VAR_2;
    }
}
