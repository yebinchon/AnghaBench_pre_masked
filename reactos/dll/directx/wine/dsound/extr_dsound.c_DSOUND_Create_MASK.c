
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int LPDIRECTSOUND8 ;
typedef scalar_t__ LPDIRECTSOUND ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,int ,scalar_t__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

HRESULT FUNC_9(
    REFIID VAR_4,
    LPDIRECTSOUND *VAR_5)
{
    LPDIRECTSOUND8 VAR_6;
    HRESULT VAR_7;
    FUNC_5("(%s, %p)\n", FUNC_7(VAR_4), VAR_5);

    if (!FUNC_4(VAR_4, &VAR_3) &&
        !FUNC_4(VAR_4, &VAR_2)) {
        *VAR_5 = 0;
        return VAR_1;
    }


    FUNC_8();

    VAR_7 = FUNC_1(&VAR_6);
    if (VAR_7 == VAR_0) {
        VAR_7 = FUNC_3(VAR_6, VAR_5);
        if (*VAR_5)
            FUNC_2(*VAR_5);
        else {
            FUNC_6("IDirectSound_IDirectSound_Create failed\n");
            FUNC_0(VAR_6);
        }
    } else {
        FUNC_6("IDirectSoundImpl_Create failed\n");
        *VAR_5 = 0;
    }

    return VAR_7;
}
