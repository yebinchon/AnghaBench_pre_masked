
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int sub_items; int id; } ;
typedef TYPE_1__ customctrl ;
struct TYPE_11__ {int cdcstate; int entry; int * hwnd; struct TYPE_11__* label; int parent_id; int id; } ;
typedef TYPE_2__ cctrl_item ;
typedef int WCHAR ;
typedef TYPE_2__* LPWSTR ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static HRESULT FUNC_7(customctrl* VAR_5, DWORD VAR_6, LPCWSTR VAR_7, cctrl_item** VAR_8)
{
    cctrl_item* VAR_9;
    LPWSTR VAR_10;

    if (FUNC_3(VAR_5, VAR_6, 0, ((void*)0)))
        return VAR_2;

    VAR_9 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_9));
    VAR_10 = FUNC_1(FUNC_0(), 0, (FUNC_6(VAR_7)+1)*sizeof(WCHAR));

    if (!VAR_9 || !VAR_10)
    {
        FUNC_2(FUNC_0(), 0, VAR_9);
        FUNC_2(FUNC_0(), 0, VAR_10);
        return VAR_3;
    }

    VAR_9->id = VAR_6;
    VAR_9->parent_id = VAR_5->id;
    FUNC_5(VAR_10, VAR_7);
    VAR_9->label = VAR_10;
    VAR_9->cdcstate = VAR_1|VAR_0;
    VAR_9->hwnd = ((void*)0);
    FUNC_4(&VAR_5->sub_items, &VAR_9->entry);

    *VAR_8 = VAR_9;

    return VAR_4;
}
