
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
    if (32 != VAR_1)
    {
        if (8 < VAR_1)
        {
            FUNC_1(VAR_0, "LeftCount = ((ULONG_PTR) DestBase >> 1) & 0x01;\n");
        }
        else
        {
            FUNC_1(VAR_0, "LeftCount = (ULONG_PTR) DestBase & 0x03;\n");
            FUNC_1(VAR_0, "if ((ULONG)(BltInfo->DestRect.right - BltInfo->DestRect.left) < "
                   "LeftCount)\n");
            FUNC_1(VAR_0, "{\n");
            FUNC_1(VAR_0, "LeftCount = BltInfo->DestRect.right - "
                   "BltInfo->DestRect.left;\n");
            FUNC_1(VAR_0, "}\n");
        }
        FUNC_1(VAR_0, "CenterCount = (BltInfo->DestRect.right - BltInfo->DestRect.left -\n");
        FUNC_1(VAR_0, "               LeftCount) / %u;\n", 32 / VAR_1);
        FUNC_1(VAR_0, "RightCount = (BltInfo->DestRect.right - BltInfo->DestRect.left -\n");
        FUNC_1(VAR_0, "              LeftCount - %u * CenterCount);\n", 32 / VAR_1);
    }
    else
    {
        FUNC_1(VAR_0, "CenterCount = BltInfo->DestRect.right - BltInfo->DestRect.left;\n");
    }
}
