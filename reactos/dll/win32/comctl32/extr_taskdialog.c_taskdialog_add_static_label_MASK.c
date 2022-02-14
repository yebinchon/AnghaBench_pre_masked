
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct taskdialog_template_desc {int dialog_height; TYPE_1__* taskconfig; } ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_5__ {scalar_t__ cy; int cx; } ;
struct TYPE_4__ {int hInstance; } ;
typedef TYPE_2__ SIZE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct taskdialog_template_desc*,int ,int ,int ,int const*,int ,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_1 (struct taskdialog_template_desc*,int const*,int ,TYPE_2__*) ;

__attribute__((used)) static unsigned int FUNC_2(struct taskdialog_template_desc *VAR_3, WORD VAR_4, const WCHAR *VAR_5)
{
    unsigned int VAR_6;
    SIZE VAR_7;

    if (!VAR_5)
        return 0;

    FUNC_1(VAR_3, VAR_5, VAR_1, &VAR_7);

    VAR_3->dialog_height += VAR_0;
    VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_2, VAR_3->taskconfig->hInstance, VAR_5, 0, VAR_0,
            VAR_3->dialog_height, VAR_7.cx, VAR_7.cy);
    VAR_3->dialog_height += VAR_7.cy + VAR_0;
    return VAR_6;
}
