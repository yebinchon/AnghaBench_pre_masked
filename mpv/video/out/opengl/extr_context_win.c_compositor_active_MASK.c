
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {int dummy; } ;
struct TYPE_3__ {int cbSize; } ;
typedef TYPE_1__ DWM_TIMING_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct ra_ctx *VAR_0)
{

    BOOL VAR_1 = 0;
    if (FUNC_2(FUNC_1(&VAR_1)) || !VAR_1)
        return 0;




    DWM_TIMING_INFO VAR_2 = { .cbSize = sizeof(DWM_TIMING_INFO) };
    if (FUNC_2(FUNC_0(0, &VAR_2)))
        return 0;

    return 1;
}
