
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int capsA ;
typedef scalar_t__ UINT ;
typedef scalar_t__ MMRESULT ;
typedef int MIXERCAPSA ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    MIXERCAPSA VAR_1;
    MMRESULT VAR_2;
    UINT VAR_3, VAR_4;

    FUNC_5("--- Testing ASCII functions ---\n");

    VAR_3=FUNC_1();
    FUNC_5("found %d Mixer devices\n",VAR_3);

    VAR_2=FUNC_0(VAR_3+1,&VAR_1,sizeof(VAR_1));
    FUNC_4(VAR_2==VAR_0,
       "mixerGetDevCapsA: MMSYSERR_BADDEVICEID expected, got %s\n",
       FUNC_3(VAR_2));

    for (VAR_4=0;VAR_4<VAR_3;VAR_4++)
        FUNC_2(VAR_4);
}
