
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef scalar_t__ MMRESULT ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int) ;

const char* FUNC_3(MMRESULT VAR_1)
{
    static char VAR_2[1024];
    static char VAR_3[1100];
    MMRESULT VAR_4;

    VAR_4 = FUNC_2(VAR_1, VAR_2, sizeof(VAR_2));
    if (VAR_4 != VAR_0)
        FUNC_1(VAR_3, "waveOutGetErrorTextA(%x) failed with error %x", VAR_1, VAR_4);
    else
        FUNC_1(VAR_3, "%s(%s)", FUNC_0(VAR_1), VAR_2);
    return VAR_3;
}
