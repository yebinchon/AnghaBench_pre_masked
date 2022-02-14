
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_4__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (TYPE_1__ const*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(const FILETIME *VAR_0, WORD *VAR_1,
                                           WORD *VAR_2)
{
    if (!VAR_0->dwLowDateTime && !VAR_0->dwHighDateTime)
        *VAR_1 = *VAR_2 = 0;
    else
        FUNC_0(VAR_0, VAR_1, VAR_2);
}
