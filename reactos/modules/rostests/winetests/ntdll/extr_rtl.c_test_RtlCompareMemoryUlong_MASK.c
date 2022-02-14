
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    ULONG VAR_0[10];
    ULONG VAR_1;

    if (!&FUNC_1)
    {
        FUNC_2("RtlCompareMemoryUlong is not available\n");
        return;
    }

    VAR_0[0]= 0x0123;
    VAR_0[1]= 0x4567;
    VAR_0[2]= 0x89ab;
    VAR_0[3]= 0xcdef;
    VAR_1 = FUNC_1(VAR_0, 0, 0x0123);
    FUNC_0(VAR_1 == 0, "RtlCompareMemoryUlong(%p, 0, 0x0123) returns %u, expected 0\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 3, 0x0123);
    FUNC_0(VAR_1 == 0, "RtlCompareMemoryUlong(%p, 3, 0x0123) returns %u, expected 0\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 4, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 4, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 5, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 5, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 7, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 7, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 8, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 8, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 9, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 9, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 4, 0x0127);
    FUNC_0(VAR_1 == 0, "RtlCompareMemoryUlong(%p, 4, 0x0127) returns %u, expected 0\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 4, 0x7123);
    FUNC_0(VAR_1 == 0, "RtlCompareMemoryUlong(%p, 4, 0x7123) returns %u, expected 0\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 16, 0x4567);
    FUNC_0(VAR_1 == 0, "RtlCompareMemoryUlong(%p, 16, 0x4567) returns %u, expected 0\n", VAR_0, VAR_1);

    VAR_0[1]= 0x0123;
    VAR_1 = FUNC_1(VAR_0, 3, 0x0123);
    FUNC_0(VAR_1 == 0, "RtlCompareMemoryUlong(%p, 3, 0x0123) returns %u, expected 0\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 4, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 4, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 5, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 5, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 7, 0x0123);
    FUNC_0(VAR_1 == 4, "RtlCompareMemoryUlong(%p, 7, 0x0123) returns %u, expected 4\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 8, 0x0123);
    FUNC_0(VAR_1 == 8, "RtlCompareMemoryUlong(%p, 8, 0x0123) returns %u, expected 8\n", VAR_0, VAR_1);
    VAR_1 = FUNC_1(VAR_0, 9, 0x0123);
    FUNC_0(VAR_1 == 8, "RtlCompareMemoryUlong(%p, 9, 0x0123) returns %u, expected 8\n", VAR_0, VAR_1);
}
