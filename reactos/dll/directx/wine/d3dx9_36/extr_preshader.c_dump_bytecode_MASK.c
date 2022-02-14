
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 unsigned int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned int VAR_1)
{
    unsigned int *VAR_2 = (unsigned int *)VAR_0;
    unsigned int VAR_3, VAR_4, VAR_5;

    VAR_1 /= sizeof(*VAR_2);
    VAR_3 = 0;
    while (VAR_3 < VAR_1)
    {
        VAR_5 = FUNC_1(VAR_1 - VAR_3, 8);
        for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
            FUNC_0("0x%08x,", VAR_2[VAR_3 + VAR_4]);
        VAR_3 += VAR_5;
        FUNC_0("\n");
    }
}
