
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int capsW ;
typedef scalar_t__ UINT ;
typedef scalar_t__ MMRESULT ;
typedef int MIXERCAPSW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    MIXERCAPSW VAR_2;
    MMRESULT VAR_3;
    UINT VAR_4, VAR_5;

    FUNC_5("--- Testing WCHAR functions ---\n");

    VAR_4=FUNC_1();
    FUNC_5("found %d Mixer devices\n",VAR_4);

    VAR_3=FUNC_0(VAR_4+1,&VAR_2,sizeof(VAR_2));
    FUNC_4(VAR_3==VAR_0||VAR_3==VAR_1,
       "mixerGetDevCapsW: MMSYSERR_BADDEVICEID or MMSYSERR_NOTSUPPORTED "
       "expected, got %s\n", FUNC_3(VAR_3));
    if (VAR_3==VAR_1)
        return;

    for (VAR_5=0;VAR_5<VAR_4;VAR_5++)
        FUNC_2(VAR_5);
}
