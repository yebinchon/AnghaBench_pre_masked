
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_7__ {int hwnd; TYPE_2__* ofnW; TYPE_1__* ofnA; } ;
struct TYPE_6__ {int (* lpfnHook ) (int ,int ,int ,int ) ;} ;
struct TYPE_5__ {int (* lpfnHook ) (int ,int ,int ,int ) ;} ;
typedef int LPARAM ;
typedef TYPE_3__ FD31_DATA ;
typedef int BOOL ;


 int FUNC_0 (char*,int (*) (int ,int ,int ,int ),int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_3(const FD31_DATA *VAR_0, UINT VAR_1, WPARAM VAR_2, LPARAM VAR_3)
{
    BOOL VAR_4;

    if (VAR_0->ofnA)
    {
        FUNC_0("Call hookA %p (%p, %04x, %08lx, %08lx)\n",
               VAR_0->ofnA->lpfnHook, VAR_0->hwnd, VAR_1, VAR_2, VAR_3);
        VAR_4 = VAR_0->ofnA->lpfnHook(VAR_0->hwnd, VAR_1, VAR_2, VAR_3);
        FUNC_0("ret hookA %p (%p, %04x, %08lx, %08lx)\n",
               VAR_0->ofnA->lpfnHook, VAR_0->hwnd, VAR_1, VAR_2, VAR_3);
        return VAR_4;
    }

    FUNC_0("Call hookW %p (%p, %04x, %08lx, %08lx)\n",
           VAR_0->ofnW->lpfnHook, VAR_0->hwnd, VAR_1, VAR_2, VAR_3);
    VAR_4 = VAR_0->ofnW->lpfnHook(VAR_0->hwnd, VAR_1, VAR_2, VAR_3);
    FUNC_0("Ret hookW %p (%p, %04x, %08lx, %08lx)\n",
           VAR_0->ofnW->lpfnHook, VAR_0->hwnd, VAR_1, VAR_2, VAR_3);
    return VAR_4;
}
