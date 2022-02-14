
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int,int) ;

void FUNC_3(int VAR_1, int VAR_2, char *VAR_3)
{
    int VAR_4;

    if (VAR_1 >= VAR_2)
        return;

    FUNC_0(VAR_0, ("mark end bits +%d through +%d used\n", VAR_1, VAR_2));
    for (VAR_4 = VAR_1; (unsigned)VAR_4 < ((VAR_1 + 7) & ~7UL); VAR_4++)
        FUNC_1(VAR_4, VAR_3);
    if (VAR_4 < VAR_2)
        FUNC_2(VAR_3 + (VAR_4 >> 3), 0xff, (VAR_2 - VAR_4) >> 3);
}
