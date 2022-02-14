
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long*,size_t,int) ;
 scalar_t__ FUNC_1 (unsigned long*,size_t,int,int,int) ;
 int FUNC_2 (unsigned long*,size_t,int) ;
 int FUNC_3 (unsigned long*,size_t,int ,unsigned long,char,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;

int FUNC_6(unsigned long *VAR_2, size_t VAR_3, int VAR_4, int VAR_5) {
    int VAR_6 = 0;
    int VAR_7 = 0;

    while (VAR_6 != VAR_4) {
        VAR_6++;

        if (VAR_5) FUNC_5("Addressing test",VAR_6);
        VAR_7 += FUNC_0(VAR_2,VAR_3,VAR_5);
        if (VAR_5) FUNC_4();

        if (VAR_5) FUNC_5("Random fill",VAR_6);
        FUNC_2(VAR_2,VAR_3,VAR_5);
        if (VAR_5) FUNC_4();
        VAR_7 += FUNC_1(VAR_2,VAR_3,VAR_6,4,VAR_5);

        if (VAR_5) FUNC_5("Solid fill",VAR_6);
        FUNC_3(VAR_2,VAR_3,0,(unsigned long)-1,'S',VAR_5);
        if (VAR_5) FUNC_4();
        VAR_7 += FUNC_1(VAR_2,VAR_3,VAR_6,4,VAR_5);

        if (VAR_5) FUNC_5("Checkerboard fill",VAR_6);
        FUNC_3(VAR_2,VAR_3,VAR_0,VAR_1,'C',VAR_5);
        if (VAR_5) FUNC_4();
        VAR_7 += FUNC_1(VAR_2,VAR_3,VAR_6,4,VAR_5);
    }
    return VAR_7;
}
