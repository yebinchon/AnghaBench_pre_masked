
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int binding; } ;
struct TYPE_10__ {TYPE_2__ bsc; TYPE_1__* nschannel; int is_doc_channel; } ;
typedef TYPE_3__ nsChannelBSC ;
typedef int ULONG ;
struct TYPE_8__ {int content_type; } ;
typedef int LPCWSTR ;
typedef int IWinInetHttpInfo ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSCallback ;





 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,void**) ;
 int VAR_3 ;
 int FUNC_3 (int *,int,int*,int*,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_3__* FUNC_12 (int *) ;

__attribute__((used)) static HRESULT FUNC_13(BSCallback *VAR_5, ULONG VAR_6, LPCWSTR VAR_7)
{
    nsChannelBSC *VAR_8 = FUNC_12(VAR_5);

    switch(VAR_6) {
    case 129:
        if(VAR_8->is_doc_channel && !FUNC_11(VAR_7)) {
            FUNC_1("External MIME: %s\n", FUNC_5(VAR_7));

            FUNC_6(VAR_8);

            VAR_8->nschannel = ((void*)0);
        }

        if(!VAR_8->nschannel)
            return VAR_4;

        FUNC_9(VAR_8->nschannel->content_type);
        VAR_8->nschannel->content_type = FUNC_10(VAR_7);
        break;
    case 128:
        return FUNC_8(VAR_8, VAR_7);
    case 130: {
        IWinInetHttpInfo *VAR_9;
        DWORD VAR_10, VAR_11 = sizeof(DWORD);
        HRESULT VAR_12;

        if(!VAR_8->bsc.binding)
            break;

        VAR_12 = FUNC_2(VAR_8->bsc.binding, &VAR_3, (void**)&VAR_9);
        if(FUNC_0(VAR_12))
            break;

        VAR_12 = FUNC_3(VAR_9,
                VAR_1|VAR_0, &VAR_10, &VAR_11, ((void*)0), ((void*)0));
        FUNC_4(VAR_9);
        if(FUNC_0(VAR_12) || VAR_10 == VAR_2)
            break;

        FUNC_7(VAR_8, VAR_10);
    }
    }

    return VAR_4;
}
