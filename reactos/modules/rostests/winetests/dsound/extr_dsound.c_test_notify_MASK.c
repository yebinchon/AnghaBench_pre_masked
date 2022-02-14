
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPHANDLE ;
typedef int LPDIRECTSOUNDBUFFER ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int,char*,scalar_t__,...) ;

__attribute__((used)) static HRESULT FUNC_5(LPDIRECTSOUNDBUFFER VAR_2,
                           DWORD VAR_3, LPHANDLE VAR_4,
                           DWORD VAR_5)
{
    HRESULT VAR_6;
    DWORD VAR_7;

    VAR_6=FUNC_1(VAR_2,0);
    FUNC_4(VAR_6==VAR_0,
       "IDirectSoundBuffer_SetCurrentPosition failed %08x\n",VAR_6);
    if(VAR_6!=VAR_0)
        return VAR_6;

    VAR_6=FUNC_0(VAR_2,0,0,0);
    FUNC_4(VAR_6==VAR_0,"IDirectSoundBuffer_Play failed %08x\n",VAR_6);
    if(VAR_6!=VAR_0)
        return VAR_6;

    VAR_6=FUNC_2(VAR_2);
    FUNC_4(VAR_6==VAR_0,"IDirectSoundBuffer_Stop failed %08x\n",VAR_6);
    if(VAR_6!=VAR_0)
        return VAR_6;

    VAR_7=FUNC_3(VAR_3,VAR_4,VAR_1,0);
    FUNC_4(VAR_7==VAR_5,"expected %d. got %d\n",VAR_5,VAR_7);
    return VAR_6;
}
