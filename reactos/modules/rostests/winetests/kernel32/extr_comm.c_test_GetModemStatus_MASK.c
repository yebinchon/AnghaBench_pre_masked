
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_3(HANDLE VAR_4)
{
    DWORD VAR_5 = 0;

    FUNC_1(FUNC_0(VAR_4, &VAR_5), "GetCommModemStatus failed\n");
    FUNC_2("GetCommModemStatus returned 0x%08x->%s%s%s%s\n", VAR_5,
   (VAR_5 &VAR_3)?"MS_RLSD_ON ":"",
   (VAR_5 &VAR_2)?"MS_RING_ON ":"",
   (VAR_5 &VAR_1)?"MS_DSR_ON ":"",
   (VAR_5 &VAR_0)?"MS_CTS_ON ":"");
}
