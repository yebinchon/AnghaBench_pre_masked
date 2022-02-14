
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_13__ {int readed; int bom; int IBindStatusCallback_iface; } ;
struct TYPE_12__ {int doc; } ;
struct TYPE_11__ {int IHTMLScriptElement_iface; } ;
struct TYPE_10__ {TYPE_5__ bsc; int buf; void* hres; TYPE_2__* script_elem; int scheme; } ;
typedef TYPE_1__ ScriptBSC ;
typedef int IUri ;
typedef int IMoniker ;
typedef TYPE_2__ HTMLScriptElement ;
typedef TYPE_3__ HTMLInnerWindow ;
typedef void* HRESULT ;
typedef size_t DWORD ;




 int VAR_0 ;
 void* FUNC_0 (int *,int *,int **,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,int *) ;
 size_t FUNC_7 (int ,int ,int ,int,int *,size_t) ;
 scalar_t__ FUNC_8 (void*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (int) ;
 int FUNC_12 (TYPE_5__*,int *,int *,int ) ;
 int FUNC_13 (int *,int ,int) ;
 void* FUNC_14 (TYPE_3__*,TYPE_5__*,int *) ;

__attribute__((used)) static HRESULT FUNC_15(HTMLInnerWindow *VAR_7, IUri *VAR_8, HTMLScriptElement *VAR_9, WCHAR **VAR_10)
{
    UINT VAR_11 = VAR_0;
    ScriptBSC *VAR_12;
    IMoniker *VAR_13;
    WCHAR *VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_0(((void*)0), VAR_8, &VAR_13, VAR_5);
    if(FUNC_1(VAR_15))
        return VAR_15;

    VAR_12 = FUNC_11(sizeof(*VAR_12));
    if(!VAR_12) {
        FUNC_5(VAR_13);
        return VAR_2;
    }

    FUNC_12(&VAR_12->bsc, &VAR_4, VAR_13, 0);
    FUNC_5(VAR_13);
    VAR_12->hres = VAR_1;

    VAR_15 = FUNC_6(VAR_8, &VAR_12->scheme);
    if(FUNC_1(VAR_15))
        VAR_12->scheme = VAR_6;

    FUNC_4(&VAR_9->IHTMLScriptElement_iface);
    VAR_12->script_elem = VAR_9;

    VAR_15 = FUNC_14(VAR_7, &VAR_12->bsc, ((void*)0));
    if(FUNC_8(VAR_15))
        VAR_15 = VAR_12->hres;
    if(FUNC_1(VAR_15)) {
        FUNC_3(&VAR_12->bsc.IBindStatusCallback_iface);
        return VAR_15;
    }

    if(!VAR_12->bsc.readed) {
        *VAR_10 = ((void*)0);
        return VAR_3;
    }

    switch(VAR_12->bsc.bom) {
    case 129:
        if(VAR_12->bsc.readed % sizeof(WCHAR)) {
            FUNC_2("The buffer is not a valid utf16 string\n");
            VAR_15 = VAR_1;
            break;
        }

        VAR_14 = FUNC_10(VAR_12->bsc.readed+sizeof(WCHAR));
        if(!VAR_14) {
            VAR_15 = VAR_2;
            break;
        }

        FUNC_13(VAR_14, VAR_12->buf, VAR_12->bsc.readed);
        VAR_14[VAR_12->bsc.readed/sizeof(WCHAR)] = 0;
        break;

    default:

        VAR_11 = FUNC_9(VAR_7->doc);

    case 128: {
        DWORD VAR_16;

        VAR_16 = FUNC_7(VAR_11, 0, VAR_12->buf, VAR_12->bsc.readed, ((void*)0), 0);
        VAR_14 = FUNC_10((VAR_16+1)*sizeof(WCHAR));
        if(!VAR_14) {
            VAR_15 = VAR_2;
            break;
        }

        FUNC_7(VAR_11, 0, VAR_12->buf, VAR_12->bsc.readed, VAR_14, VAR_16);
        VAR_14[VAR_16] = 0;
    }
    }

    FUNC_3(&VAR_12->bsc.IBindStatusCallback_iface);
    if(FUNC_1(VAR_15))
        return VAR_15;

    *VAR_10 = VAR_14;
    return VAR_3;
}
