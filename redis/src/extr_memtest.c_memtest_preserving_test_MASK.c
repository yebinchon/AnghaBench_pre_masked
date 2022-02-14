
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int backup ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long*,unsigned long*,size_t) ;
 scalar_t__ FUNC_1 (unsigned long*,size_t,int ) ;
 scalar_t__ FUNC_2 (unsigned long*,size_t,int,int,int ) ;
 int FUNC_3 (unsigned long*,size_t,int ) ;
 int FUNC_4 (unsigned long*,size_t,int ,unsigned long,char,int ) ;

int FUNC_5(unsigned long *VAR_4, size_t VAR_5, int VAR_6) {
    unsigned long VAR_7[VAR_0];
    unsigned long *VAR_8 = VAR_4;
    unsigned long *VAR_9 = (unsigned long*) (((unsigned char*)VAR_4)+(VAR_5-VAR_1));
    size_t VAR_10 = VAR_5;
    int VAR_11 = 0;

    if (VAR_5 & 4095) return 0;
    if (VAR_5 < 4096*2) return 0;

    while(VAR_10) {



        if (VAR_10 == 4096) {
            VAR_10 += 4096;
            VAR_8 -= 4096/sizeof(unsigned long);
        }

        int VAR_12 = 0;
        size_t VAR_13 = (VAR_10 > sizeof(VAR_7)) ? sizeof(VAR_7) : VAR_10;


        if (VAR_13/4096 % 2) VAR_13 -= 4096;

        FUNC_0(VAR_7,VAR_8,VAR_13);
        while(VAR_12 != VAR_6) {
            VAR_12++;
            VAR_11 += FUNC_1(VAR_8,VAR_13,0);
            FUNC_3(VAR_8,VAR_13,0);
            if (VAR_5 >= VAR_1) {
                FUNC_2(VAR_4,VAR_1,VAR_12,1,0);
                FUNC_2(VAR_9,VAR_1,VAR_12,1,0);
            }
            VAR_11 += FUNC_2(VAR_8,VAR_13,VAR_12,4,0);
            FUNC_4(VAR_8,VAR_13,0,(unsigned long)-1,'S',0);
            if (VAR_5 >= VAR_1) {
                FUNC_2(VAR_4,VAR_1,VAR_12,1,0);
                FUNC_2(VAR_9,VAR_1,VAR_12,1,0);
            }
            VAR_11 += FUNC_2(VAR_8,VAR_13,VAR_12,4,0);
            FUNC_4(VAR_8,VAR_13,VAR_2,VAR_3,'C',0);
            if (VAR_5 >= VAR_1) {
                FUNC_2(VAR_4,VAR_1,VAR_12,1,0);
                FUNC_2(VAR_9,VAR_1,VAR_12,1,0);
            }
            VAR_11 += FUNC_2(VAR_8,VAR_13,VAR_12,4,0);
        }
        FUNC_0(VAR_8,VAR_7,VAR_13);
        VAR_10 -= VAR_13;
        VAR_8 += VAR_13/sizeof(unsigned long);
    }
    return VAR_11;
}
