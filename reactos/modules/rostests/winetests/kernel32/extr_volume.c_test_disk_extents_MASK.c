
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int**,int,int**,int,int*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_7;
    DWORD VAR_8;
    HANDLE VAR_9;
    static DWORD VAR_10[16];

    VAR_9 = FUNC_1( "\\\\.\\c:", VAR_3, VAR_1|VAR_2, ((void*)0), VAR_6, 0, 0 );
    if (VAR_9 == VAR_4)
    {
        FUNC_5("can't open c: drive %u\n", FUNC_3());
        return;
    }
    VAR_8 = 0;
    VAR_7 = FUNC_2( VAR_9, VAR_5, &VAR_10,
                           sizeof(VAR_10), &VAR_10, sizeof(VAR_10), &VAR_8, ((void*)0) );
    if (!VAR_7 && FUNC_3() == VAR_0)
    {
        FUNC_5("IOCTL_VOLUME_GET_VOLUME_DISK_EXTENTS not supported\n");
        FUNC_0( VAR_9 );
        return;
    }
    FUNC_4(VAR_7, "DeviceIoControl failed %u\n", FUNC_3());
    FUNC_4(VAR_8 == 32, "expected 32, got %u\n", VAR_8);
    FUNC_0( VAR_9 );
}
