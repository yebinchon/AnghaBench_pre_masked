
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* ofnW; scalar_t__ ofnA; int hwnd; } ;
typedef TYPE_1__* PFD31_DATA ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(PFD31_DATA VAR_1)
{
    HWND VAR_2;
    if (!VAR_1) return;
    VAR_2 = VAR_1->hwnd;
    FUNC_2("destroying private allocation %p\n", VAR_1);


    if (VAR_1->ofnA)
    {
        FUNC_0(VAR_1->ofnW);
        FUNC_3(VAR_1->ofnW);
    }
    FUNC_3(VAR_1);
    FUNC_1(VAR_2, VAR_0);
}
