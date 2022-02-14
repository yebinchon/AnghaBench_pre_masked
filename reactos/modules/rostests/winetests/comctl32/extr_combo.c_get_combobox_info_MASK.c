
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbSize; } ;
typedef int HWND ;
typedef TYPE_1__ COMBOBOXINFO ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(HWND VAR_0, COMBOBOXINFO *VAR_1)
{
    BOOL VAR_2;

    VAR_1->cbSize = sizeof(*VAR_1);
    VAR_2 = FUNC_0(VAR_0, VAR_1);
    FUNC_2(VAR_2, "Failed to get combobox info structure, error %d\n", FUNC_1());
}
