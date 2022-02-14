
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wndclass_redirect_data {int name_offset; } ;
typedef int data ;
typedef int WCHAR ;
struct TYPE_4__ {int cbSize; scalar_t__ lpData; } ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_1__ ACTCTX_SECTION_KEYED_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int const*,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static WCHAR* FUNC_4(const WCHAR *VAR_1)
{
    struct wndclass_redirect_data *VAR_2;
    ACTCTX_SECTION_KEYED_DATA VAR_3;
    BOOL VAR_4;

    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.cbSize = sizeof(VAR_3);
    VAR_4 = FUNC_0(0, ((void*)0), VAR_0, VAR_1, &VAR_3);
    FUNC_3(VAR_4, "Failed to find class redirection section, error %u\n", FUNC_1());
    VAR_2 = (struct wndclass_redirect_data*)VAR_3.lpData;
    return (WCHAR*)((BYTE*)VAR_2 + VAR_2->name_offset);
}
