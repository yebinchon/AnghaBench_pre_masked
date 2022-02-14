
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pDS8; int * pDS; int * pUnknown; } ;
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
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int VAR_5 ;
 int FUNC_7 (char*,TYPE_1__*,int ,int **) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static HRESULT FUNC_10(
    LPDIRECTSOUND8 VAR_6,
    REFIID VAR_7,
    LPVOID * VAR_8)
{
    IDirectSoundImpl *VAR_9 = (IDirectSoundImpl *)VAR_6;
    FUNC_7("(%p,%s,%p)\n",VAR_9,FUNC_9(VAR_7),VAR_8);

    if (VAR_8 == ((void*)0)) {
        FUNC_8("invalid parameter\n");
        return VAR_0;
    }

    if (FUNC_6(VAR_7, &VAR_4)) {
        if (!VAR_9->pUnknown) {
            FUNC_5(VAR_6, &VAR_9->pUnknown);
            if (!VAR_9->pUnknown) {
                FUNC_8("IDirectSound8_IUnknown_Create() failed\n");
                *VAR_8 = ((void*)0);
                return VAR_1;
            }
        }
        FUNC_4(VAR_9->pUnknown);
        *VAR_8 = VAR_9->pUnknown;
        return VAR_5;
    } else if (FUNC_6(VAR_7, &VAR_2)) {
        if (!VAR_9->pDS) {
            FUNC_3(VAR_6, &VAR_9->pDS);
            if (!VAR_9->pDS) {
                FUNC_8("IDirectSound8_IDirectSound_Create() failed\n");
                *VAR_8 = ((void*)0);
                return VAR_1;
            }
        }
        FUNC_2(VAR_9->pDS);
        *VAR_8 = VAR_9->pDS;
        return VAR_5;
    } else if (FUNC_6(VAR_7, &VAR_3)) {
        if (!VAR_9->pDS8) {
            FUNC_1(VAR_6, &VAR_9->pDS8);
            if (!VAR_9->pDS8) {
                FUNC_8("IDirectSound8_IDirectSound8_Create() failed\n");
                *VAR_8 = ((void*)0);
                return VAR_1;
            }
        }
        FUNC_0(VAR_9->pDS8);
        *VAR_8 = VAR_9->pDS8;
        return VAR_5;
    }

    *VAR_8 = ((void*)0);
    FUNC_8("Unknown IID %s\n",FUNC_9(VAR_7));
    return VAR_1;
}
