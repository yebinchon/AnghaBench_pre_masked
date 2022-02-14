
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ MMRESULT ;
typedef int HMIXER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*,int ) ;

__attribute__((used)) static void FUNC_3(HMIXER VAR_2)
{
    MMRESULT VAR_3;

    VAR_3 = FUNC_0(VAR_2);
    FUNC_2(VAR_3 == VAR_1 || VAR_3 == VAR_0,
       "mixerClose: MMSYSERR_NOERROR or MMSYSERR_INVALHANDLE expected, got %s\n",
       FUNC_1(VAR_3));
}
