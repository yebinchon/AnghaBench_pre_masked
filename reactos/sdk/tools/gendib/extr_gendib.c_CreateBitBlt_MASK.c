
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, unsigned VAR_1)
{
    FUNC_0(VAR_0);
    FUNC_1(VAR_0, "\n");
    FUNC_1(VAR_0, "BOOLEAN\n");
    FUNC_1(VAR_0, "DIB_%uBPP_BitBlt(PBLTINFO BltInfo)\n", VAR_1);
    FUNC_1(VAR_0, "{\n");
    FUNC_1(VAR_0, "PrimitivesTable[BltInfo->Rop4 & 0xff](BltInfo);\n");
    FUNC_1(VAR_0, "\n");
    FUNC_1(VAR_0, "return TRUE;\n");
    FUNC_1(VAR_0, "}\n");
}
