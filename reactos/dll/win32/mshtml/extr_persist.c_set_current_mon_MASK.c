
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {TYPE_2__* window; } ;
struct TYPE_10__ {TYPE_1__ basedoc; } ;
struct TYPE_9__ {int load_flags; int url; int * mon; TYPE_7__* doc_obj; } ;
typedef int IUriContainer ;
typedef int IUri ;
typedef int IMoniker ;
typedef TYPE_2__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int **) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *,int ,int **) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;

void FUNC_18(HTMLOuterWindow *VAR_6, IMoniker *VAR_7, DWORD VAR_8)
{
    IUriContainer *VAR_9;
    IUri *VAR_10 = ((void*)0);
    HRESULT VAR_11;

    if(VAR_6->mon) {
        if(VAR_6->doc_obj && !(VAR_8 & (VAR_1|VAR_0))) {
            if(VAR_6 == VAR_6->doc_obj->basedoc.window)
                FUNC_14(VAR_6->doc_obj);
            else
                FUNC_11("Skipping travellog update for frame navigation.\n");
        }
        FUNC_5(VAR_6->mon);
        VAR_6->mon = ((void*)0);
    }

    VAR_6->load_flags = VAR_8;
    if(!VAR_7)
        return;

    FUNC_2(VAR_7);
    VAR_6->mon = VAR_7;

    VAR_11 = FUNC_4(VAR_7, &VAR_2, (void**)&VAR_9);
    if(FUNC_9(VAR_11)) {
        VAR_11 = FUNC_6(VAR_9, &VAR_10);
        FUNC_7(VAR_9);
        if(VAR_11 != VAR_5) {
            FUNC_12("GetIUri failed: %08x\n", VAR_11);
            VAR_10 = ((void*)0);
        }
    }

    if(!VAR_10) {
        WCHAR *VAR_12;

        VAR_11 = FUNC_3(VAR_7, ((void*)0), ((void*)0), &VAR_12);
        if(FUNC_9(VAR_11)) {
            VAR_11 = FUNC_13(VAR_12, 0, &VAR_10);
            if(FUNC_1(VAR_11)) {
                FUNC_12("CrateUri failed: %08x\n", VAR_11);
                FUNC_15(VAR_6, ((void*)0));
                VAR_6->url = FUNC_10(VAR_12);
                FUNC_0(VAR_12);
                return;
            }
            FUNC_0(VAR_12);
        }else {
            FUNC_12("GetDisplayName failed: %08x\n", VAR_11);
        }
    }

    FUNC_15(VAR_6, VAR_10);
    if(VAR_10)
        FUNC_8(VAR_10);
    FUNC_16(VAR_6, FUNC_17(VAR_6) ? VAR_4 : VAR_3);
}
