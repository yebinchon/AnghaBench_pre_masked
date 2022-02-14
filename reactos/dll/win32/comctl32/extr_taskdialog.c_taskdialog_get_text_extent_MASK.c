
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct taskdialog_template_desc {int font; TYPE_1__* taskconfig; int dialog_width; } ;
typedef int WCHAR ;
typedef int UINT_PTR ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_6__ {int hInstance; } ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;
typedef int HFONT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int const*,unsigned int,TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 unsigned int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct taskdialog_template_desc const*,scalar_t__*,int *) ;
 int FUNC_8 (struct taskdialog_template_desc const*,scalar_t__*,scalar_t__*) ;
 unsigned int FUNC_9 (int const*) ;

__attribute__((used)) static void FUNC_10(const struct taskdialog_template_desc *VAR_6, const WCHAR *VAR_7,
        BOOL VAR_8, SIZE *VAR_9)
{
    RECT VAR_10 = { 0, 0, VAR_6->dialog_width - VAR_1 * 2, 0};
    const WCHAR *VAR_11 = ((void*)0);
    static const WCHAR VAR_12;
    unsigned int VAR_13;
    HFONT VAR_14;
    HDC VAR_15;

    if (FUNC_2(VAR_7))
    {
        if (!(VAR_13 = FUNC_3(VAR_8 ? VAR_6->taskconfig->hInstance : VAR_0,
                (UINT_PTR)VAR_7, (WCHAR *)&VAR_11, 0)))
        {
            FUNC_6("Failed to load text\n");
            VAR_11 = &VAR_12;
            VAR_13 = 0;
        }
    }
    else
    {
        VAR_11 = VAR_7;
        VAR_13 = FUNC_9(VAR_11);
    }

    VAR_15 = FUNC_1(0);
    VAR_14 = FUNC_5(VAR_15, VAR_6->font);

    FUNC_7(VAR_6, &VAR_10.right, ((void*)0));
    FUNC_0(VAR_15, VAR_11, VAR_13, &VAR_10, VAR_4 | VAR_3 | VAR_2 | VAR_5);
    FUNC_8(VAR_6, &VAR_10.right, &VAR_10.bottom);

    FUNC_5(VAR_15, VAR_14);
    FUNC_4(0, VAR_15);

    VAR_9->cx = VAR_10.right - VAR_10.left;
    VAR_9->cy = VAR_10.bottom - VAR_10.top;
}
