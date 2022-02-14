
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIClipboardCommands ;
typedef int VARIANT ;
struct TYPE_8__ {TYPE_1__* doc_obj; } ;
struct TYPE_7__ {scalar_t__ usermode; } ;
typedef TYPE_2__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,TYPE_2__*,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int *) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(HTMLDocument *VAR_4, DWORD VAR_5, VARIANT *VAR_6, VARIANT *VAR_7)
{
    nsIClipboardCommands *VAR_8;
    nsresult VAR_9;

    FUNC_2("(%p)->(%08x %p %p)\n", VAR_4, VAR_5, VAR_6, VAR_7);

    if(VAR_4->doc_obj->usermode == VAR_0)
        return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);

    VAR_8 = FUNC_4(VAR_4);
    if(!VAR_8)
        return VAR_2;

    VAR_9 = FUNC_5(VAR_8);
    FUNC_6(VAR_8);
    if(FUNC_1(VAR_9)) {
        FUNC_0("Paste failed: %08x\n", VAR_9);
        return VAR_1;
    }

    return VAR_3;
}
