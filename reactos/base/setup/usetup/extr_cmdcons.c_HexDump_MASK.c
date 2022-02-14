
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
typedef int * PUCHAR ;


 int FUNC_0 (char*,...) ;

void FUNC_1(PUCHAR VAR_0, ULONG VAR_1)
{
    ULONG VAR_2 = 0;
    PUCHAR VAR_3;

    while (VAR_2 < (VAR_1 & ~15))
    {
        VAR_3 = (PUCHAR)((ULONG_PTR)VAR_0 + VAR_2);
        FUNC_0("%04lx  %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx\n",
               VAR_2,
               VAR_3[0],
               VAR_3[1],
               VAR_3[2],
               VAR_3[3],
               VAR_3[4],
               VAR_3[5],
               VAR_3[6],
               VAR_3[7],
               VAR_3[8],
               VAR_3[9],
               VAR_3[10],
               VAR_3[11],
               VAR_3[12],
               VAR_3[13],
               VAR_3[14],
               VAR_3[15]);
        VAR_2 += 16;
    }

    if (VAR_2 < VAR_1)
    {
        VAR_3 = (PUCHAR)((ULONG_PTR)VAR_0 + VAR_2);
        FUNC_0("%04lx ", VAR_2);
        while (VAR_2 < VAR_1)
        {
            FUNC_0(" %02hx", *VAR_3);
            VAR_2++;
            VAR_3++;
        }

        FUNC_0("\n");
    }

    FUNC_0("\n");
}
