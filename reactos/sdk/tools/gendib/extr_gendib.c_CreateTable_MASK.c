
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,unsigned int,int ) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2;

    FUNC_1(VAR_0);
    FUNC_2(VAR_0, "\n");
    FUNC_2(VAR_0, "static void (*PrimitivesTable[256])(PBLTINFO) =\n");
    FUNC_2(VAR_0, "{\n");
    for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
    {
        FUNC_3(VAR_0, VAR_1, FUNC_0(VAR_2));
        if (VAR_2 < 255)
        {
            FUNC_2(VAR_0, ",");
        }
        FUNC_2(VAR_0, "\n");
    }
    FUNC_2(VAR_0, "};\n");
}
