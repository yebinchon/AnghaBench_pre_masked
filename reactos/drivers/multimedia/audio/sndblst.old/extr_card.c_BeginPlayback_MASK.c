
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;

VOID FUNC_2(ULONG VAR_0, ULONG VAR_1, ULONG VAR_2, ULONG VAR_3)
{
    FUNC_0("BeginPlayback(%d, %d, %d, %d)\n", VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_0("Initiating playback\n");


    FUNC_1(VAR_0, 0xc6);
    FUNC_1(VAR_0, 0);
    FUNC_1(VAR_0, VAR_3 % 256);
    FUNC_1(VAR_0, VAR_3 / 256);
}
