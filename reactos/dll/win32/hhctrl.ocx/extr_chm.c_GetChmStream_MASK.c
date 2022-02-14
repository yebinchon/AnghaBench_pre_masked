
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pStorage; int pITStorage; } ;
struct TYPE_5__ {scalar_t__ chm_index; scalar_t__ chm_file; } ;
typedef scalar_t__ LPCWSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef TYPE_1__ ChmPath ;
typedef TYPE_2__ CHMInfo ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int *,int,int *,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int *,int,int ,int **) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (scalar_t__) ;

IStream *FUNC_8(CHMInfo *VAR_2, LPCWSTR VAR_3, ChmPath *VAR_4)
{
    IStorage *VAR_5;
    IStream *VAR_6 = ((void*)0);
    HRESULT VAR_7;

    FUNC_5("%s (%s :: %s)\n", FUNC_7(VAR_3), FUNC_7(VAR_4->chm_file),
          FUNC_7(VAR_4->chm_index));

    if(VAR_3 || VAR_4->chm_file) {
        VAR_7 = FUNC_1(VAR_2->pITStorage,
                VAR_4->chm_file ? VAR_4->chm_file : VAR_3, ((void*)0),
                VAR_0 | VAR_1, ((void*)0), 0, &VAR_5);
        if(FUNC_0(VAR_7)) {
            FUNC_6("Could not open storage: %08x\n", VAR_7);
            return ((void*)0);
        }
    }else {
        VAR_5 = VAR_2->pStorage;
        FUNC_2(VAR_2->pStorage);
    }

    VAR_7 = FUNC_3(VAR_5, VAR_4->chm_index, ((void*)0), VAR_0, 0, &VAR_6);
    FUNC_4(VAR_5);
    if(FUNC_0(VAR_7))
        FUNC_6("Could not open stream: %08x\n", VAR_7);

    return VAR_6;
}
