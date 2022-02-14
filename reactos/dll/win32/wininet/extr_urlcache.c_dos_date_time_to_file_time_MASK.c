
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; } ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(WORD VAR_0, WORD VAR_1,
                                           FILETIME *VAR_2)
{
    if (!VAR_0 && !VAR_1)
        VAR_2->dwLowDateTime = VAR_2->dwHighDateTime = 0;
    else
        FUNC_0(VAR_0, VAR_1, VAR_2);
}
