
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int*,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    ULONG VAR_7, VAR_8;
    NTSTATUS VAR_9;

    if (!&FUNC_1)
    {
        FUNC_2("RtlGetCompressionWorkSpaceSize is not available\n");
        return;
    }


    VAR_9 = FUNC_1(VAR_3, &VAR_7,
                                             &VAR_8);
    FUNC_0(VAR_9 == VAR_4, "got wrong status 0x%08x\n", VAR_9);

    VAR_9 = FUNC_1(VAR_1, &VAR_7,
                                             &VAR_8);
    FUNC_0(VAR_9 == VAR_4, "got wrong status 0x%08x\n", VAR_9);

    VAR_9 = FUNC_1(0xFF, &VAR_7, &VAR_8);
    FUNC_0(VAR_9 == VAR_6, "got wrong status 0x%08x\n", VAR_9);


    VAR_7 = VAR_8 = 0xdeadbeef;
    VAR_9 = FUNC_1(VAR_2, &VAR_7,
                                             &VAR_8);
    FUNC_0(VAR_9 == VAR_5, "got wrong status 0x%08x\n", VAR_9);
    FUNC_0(VAR_7 != 0, "got wrong compress_workspace %u\n", VAR_7);
    FUNC_0(VAR_8 == 0x1000, "got wrong decompress_workspace %u\n", VAR_8);

    VAR_7 = VAR_8 = 0xdeadbeef;
    VAR_9 = FUNC_1(VAR_2 | VAR_0,
                                             &VAR_7, &VAR_8);
    FUNC_0(VAR_9 == VAR_5, "got wrong status 0x%08x\n", VAR_9);
    FUNC_0(VAR_7 != 0, "got wrong compress_workspace %u\n", VAR_7);
    FUNC_0(VAR_8 == 0x1000, "got wrong decompress_workspace %u\n", VAR_8);
}
