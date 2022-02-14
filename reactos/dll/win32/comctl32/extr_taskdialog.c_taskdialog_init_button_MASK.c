
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct taskdialog_template_desc {struct taskdialog_button_desc* default_button; TYPE_1__* taskconfig; } ;
struct taskdialog_button_desc {int id; int hinst; scalar_t__ line; int width; int const* text; } ;
typedef int WCHAR ;
struct TYPE_5__ {scalar_t__ cx; } ;
struct TYPE_4__ {int nDefaultButton; int hInstance; } ;
typedef TYPE_2__ SIZE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct taskdialog_template_desc*,int const*,scalar_t__,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct taskdialog_button_desc *VAR_3, struct taskdialog_template_desc *VAR_4,
        int VAR_5, const WCHAR *VAR_6, BOOL VAR_7)
{
    SIZE VAR_8;

    FUNC_1(VAR_4, VAR_6, VAR_7, &VAR_8);

    VAR_3->id = VAR_5;
    VAR_3->text = VAR_6;
    VAR_3->width = FUNC_0(VAR_1, VAR_8.cx + VAR_2 * 2);
    VAR_3->line = 0;
    VAR_3->hinst = VAR_7 ? VAR_4->taskconfig->hInstance : VAR_0;

    if (VAR_5 == VAR_4->taskconfig->nDefaultButton)
        VAR_4->default_button = VAR_3;
}
