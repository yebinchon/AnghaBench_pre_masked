
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long,unsigned long,char) ;
 int FUNC_3 () ;

void FUNC_4(unsigned long *VAR_0, size_t VAR_1, int VAR_2) {
    unsigned long VAR_3 = 4096/sizeof(unsigned long);
    unsigned long VAR_4 = VAR_1/sizeof(unsigned long)/2;
    unsigned long VAR_5 = VAR_4/VAR_3;
    unsigned long VAR_6, VAR_7, *VAR_8, *VAR_9;
    uint64_t VAR_10 = FUNC_0(0xd13133de9afdb566);
    uint64_t VAR_11 = 0;

    FUNC_1((VAR_1 & 4095) == 0);
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_8 = VAR_0+VAR_6;
        VAR_9 = VAR_8+VAR_4;
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            FUNC_3();
            *VAR_8 = *VAR_9 = (unsigned long) VAR_11;
            VAR_8 += VAR_3;
            VAR_9 += VAR_3;
            if ((VAR_7 & 0xffff) == 0 && VAR_2)
                FUNC_2(VAR_7+VAR_5*VAR_6,VAR_4,'R');
        }
    }
}
