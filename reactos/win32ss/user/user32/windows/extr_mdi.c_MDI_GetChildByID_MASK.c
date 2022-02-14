
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int * child; scalar_t__ nActiveChildren; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef int HWND ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static HWND FUNC_1(HWND VAR_1, UINT VAR_2, MDICLIENTINFO *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_3->nActiveChildren; VAR_4++)
    {
        if (FUNC_0( VAR_3->child[VAR_4], VAR_0 ) == VAR_2)
            return VAR_3->child[VAR_4];
    }
    return 0;
}
