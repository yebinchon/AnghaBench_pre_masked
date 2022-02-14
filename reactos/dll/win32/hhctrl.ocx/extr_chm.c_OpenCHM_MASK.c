
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_8__ {int strings_stream; int pStorage; int pITStorage; int szFile; int codePage; } ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef TYPE_1__ CHMInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *,int,int *,int ,int *) ;
 int FUNC_4 (int ,char const*,int *,int,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;

CHMInfo *FUNC_10(LPCWSTR VAR_6)
{
    HRESULT VAR_7;
    CHMInfo *VAR_8;

    static const WCHAR VAR_9[] = {'#','S','T','R','I','N','G','S',0};

    if (!(VAR_8 = FUNC_7(sizeof(CHMInfo))))
        return ((void*)0);
    VAR_8->codePage = VAR_2;

    if (!(VAR_8->szFile = FUNC_9(VAR_6))) {
        FUNC_8(VAR_8);
        return ((void*)0);
    }

    VAR_7 = FUNC_1(&VAR_1, ((void*)0), VAR_0,
            &VAR_3, (void **) &VAR_8->pITStorage) ;
    if(FUNC_2(VAR_7)) {
        FUNC_6("Could not create ITStorage: %08x\n", VAR_7);
        return FUNC_0(VAR_8);
    }

    VAR_7 = FUNC_3(VAR_8->pITStorage, VAR_6, ((void*)0),
            VAR_4 | VAR_5, ((void*)0), 0, &VAR_8->pStorage);
    if(FUNC_2(VAR_7)) {
        FUNC_6("Could not open storage: %08x\n", VAR_7);
        return FUNC_0(VAR_8);
    }
    VAR_7 = FUNC_4(VAR_8->pStorage, VAR_9, ((void*)0), VAR_4, 0,
            &VAR_8->strings_stream);
    if(FUNC_2(VAR_7)) {
        FUNC_6("Could not open #STRINGS stream: %08x\n", VAR_7);

    }

    if(!FUNC_5(VAR_8)) {
        FUNC_6("Could not read #SYSTEM\n");
        return FUNC_0(VAR_8);
    }

    return VAR_8;
}
