
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taskdialog_template_desc {int control_count; int controls; } ;
struct taskdialog_control {unsigned int template_size; int entry; TYPE_1__* template; } ;
typedef int nulW ;
typedef int WORD ;
typedef int WCHAR ;
typedef int UINT_PTR ;
struct TYPE_2__ {int style; short x; short y; short cx; short cy; int id; scalar_t__ dwExtendedStyle; } ;
typedef int HINSTANCE ;
typedef int DWORD ;
typedef TYPE_1__ DLGITEMTEMPLATE ;


 unsigned int FUNC_0 (unsigned int,int) ;
 void* FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (char**,int const*,int) ;

__attribute__((used)) static unsigned int FUNC_7(struct taskdialog_template_desc *VAR_1, WORD VAR_2, const WCHAR *VAR_3,
        HINSTANCE VAR_4, const WCHAR *VAR_5, DWORD VAR_6, short VAR_7, short VAR_8, short VAR_9, short VAR_10)
{
    struct taskdialog_control *VAR_11 = FUNC_1(sizeof(*VAR_11));
    unsigned int VAR_12, VAR_13, VAR_14;
    DLGITEMTEMPLATE *VAR_15;
    static const WCHAR VAR_16;
    const WCHAR *VAR_17;
    char *VAR_18;

    VAR_13 = (FUNC_5(VAR_3) + 1) * sizeof(WCHAR);

    if (FUNC_2(VAR_5))
        VAR_14 = FUNC_3(VAR_4, (UINT_PTR)VAR_5, (WCHAR *)&VAR_17, 0) * sizeof(WCHAR);
    else
    {
        VAR_17 = VAR_5;
        VAR_14 = FUNC_5(VAR_17) * sizeof(WCHAR);
    }

    VAR_12 = sizeof(DLGITEMTEMPLATE);
    VAR_12 += VAR_13;
    VAR_12 += VAR_14 + sizeof(WCHAR);
    VAR_12 += sizeof(WORD);

    VAR_11->template = VAR_15 = FUNC_1(VAR_12);
    VAR_11->template_size = VAR_12;

    VAR_15->style = VAR_0 | VAR_6;
    VAR_15->dwExtendedStyle = 0;
    VAR_15->x = VAR_7;
    VAR_15->y = VAR_8;
    VAR_15->cx = VAR_9;
    VAR_15->cy = VAR_10;
    VAR_15->id = VAR_2;
    VAR_18 = (char *)(VAR_15 + 1);
    FUNC_6(&VAR_18, VAR_3, VAR_13);
    FUNC_6(&VAR_18, VAR_17, VAR_14);
    FUNC_6(&VAR_18, &VAR_16, sizeof(VAR_16));

    FUNC_4(&VAR_1->controls, &VAR_11->entry);
    VAR_1->control_count++;
    return FUNC_0(VAR_12, 3);
}
