
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,char) ;

void FUNC_2(unsigned long *VAR_0, size_t VAR_1, unsigned long VAR_2,
                        unsigned long VAR_3, char VAR_4, int VAR_5)
{
    unsigned long VAR_6 = 4096/sizeof(unsigned long);
    unsigned long VAR_7 = VAR_1/sizeof(unsigned long)/2;
    unsigned long VAR_8 = VAR_7/VAR_6;
    unsigned long VAR_9, VAR_10, *VAR_11, *VAR_12, VAR_13;

    FUNC_0((VAR_1 & 4095) == 0);
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
        VAR_11 = VAR_0+VAR_9;
        VAR_12 = VAR_11+VAR_7;
        VAR_13 = (VAR_9 & 1) ? VAR_3 : VAR_2;
        for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {




            *VAR_11 = *VAR_12 = ((unsigned long) VAR_13) |
                        (((unsigned long) VAR_13) << 16) |
                        (((unsigned long) VAR_13) << 32) |
                        (((unsigned long) VAR_13) << 48);

            VAR_11 += VAR_6;
            VAR_12 += VAR_6;
            if ((VAR_10 & 0xffff) == 0 && VAR_5)
                FUNC_1(VAR_10+VAR_8*VAR_9,VAR_7,VAR_4);
        }
    }
}
