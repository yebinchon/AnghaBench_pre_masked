
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPGUID ;
typedef int * LPDIRECTSOUND8 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (int ,int **,int *) ;

__attribute__((used)) static HRESULT FUNC_3(LPGUID VAR_5)
{
    HRESULT VAR_6;
    LPDIRECTSOUND8 VAR_7=((void*)0);
    int VAR_8;


    VAR_6=FUNC_2(VAR_5,&VAR_7,((void*)0));
    FUNC_1(VAR_6==VAR_3||VAR_6==VAR_2||VAR_6==VAR_0||VAR_6==VAR_4,
       "DirectSoundCreate8() failed: %08x\n",VAR_6);
    if (VAR_6!=VAR_3)
        return VAR_6;

    VAR_8=FUNC_0(VAR_7);
    FUNC_1(VAR_8==0,"IDirectSound8_Release() has %d references, should have 0\n",VAR_8);
    if (VAR_8!=0)
        return VAR_1;

    return VAR_6;
}
