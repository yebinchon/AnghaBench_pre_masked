
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mime; int clipboard_format; int callback; int report_mime; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ Binding ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Binding *VAR_1, LPCWSTR VAR_2)
{
    FUNC_2(VAR_1->mime);
    VAR_1->mime = FUNC_3(VAR_2);

    if(!VAR_1->mime || !VAR_1->report_mime)
        return;

    FUNC_0(VAR_1->callback, 0, 0, VAR_0, VAR_1->mime);

    VAR_1->clipboard_format = FUNC_1(VAR_1->mime);
}
