
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pDS; int * pUnknown; } ;
typedef int REFIID ;
typedef int * LPVOID ;
typedef scalar_t__ LPDIRECTSOUND8 ;
typedef TYPE_1__ IDirectSoundImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_4 ;
 int FUNC_5 (char*,TYPE_1__*,int ,int **) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static HRESULT FUNC_8(
    LPDIRECTSOUND8 VAR_5,
    REFIID VAR_6,
    LPVOID * VAR_7)
{
    IDirectSoundImpl *VAR_8 = (IDirectSoundImpl *)VAR_5;
    FUNC_5("(%p,%s,%p)\n",VAR_8,FUNC_7(VAR_6),VAR_7);

    if (VAR_7 == ((void*)0)) {
        FUNC_6("invalid parameter\n");
        return VAR_0;
    }

    if (FUNC_4(VAR_6, &VAR_3)) {
        if (!VAR_8->pUnknown) {
            FUNC_3(VAR_5, &VAR_8->pUnknown);
            if (!VAR_8->pUnknown) {
                FUNC_6("IDirectSound_IUnknown_Create() failed\n");
                *VAR_7 = ((void*)0);
                return VAR_1;
            }
        }
        FUNC_2(VAR_8->pUnknown);
        *VAR_7 = VAR_8->pUnknown;
        return VAR_4;
    } else if (FUNC_4(VAR_6, &VAR_2)) {
        if (!VAR_8->pDS) {
            FUNC_1(VAR_5, &VAR_8->pDS);
            if (!VAR_8->pDS) {
                FUNC_6("IDirectSound_IDirectSound_Create() failed\n");
                *VAR_7 = ((void*)0);
                return VAR_1;
            }
        }
        FUNC_0(VAR_8->pDS);
        *VAR_7 = VAR_8->pDS;
        return VAR_4;
    }

    *VAR_7 = ((void*)0);
    FUNC_6("Unknown IID %s\n",FUNC_7(VAR_6));
    return VAR_1;
}
