
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
typedef char* PCHAR ;


 int FUNC_0 (char*,char*,int,...) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

VOID FUNC_3(PCHAR VAR_0, PCHAR VAR_1, UCHAR VAR_2, ULONG VAR_3)
{
    char VAR_4[50];

    FUNC_2(VAR_0, "multi(0)disk(0)");

    if (VAR_2 < 0x80)
    {




        FUNC_0(VAR_4, "fdisk(%d)", (int) VAR_2);
        FUNC_1(VAR_0, VAR_4);
    }
    else
    {




        FUNC_0(VAR_4, "rdisk(%d)partition(%d)", (int) (VAR_2 - 0x80), (int) VAR_3);
        FUNC_1(VAR_0, VAR_4);
    }

    if (VAR_1[0] == '\\' || VAR_1[0] == '/')
    {
        FUNC_1(VAR_0, VAR_1);
    }
    else
    {
        FUNC_1(VAR_0, "\\");
        FUNC_1(VAR_0, VAR_1);
    }
}
