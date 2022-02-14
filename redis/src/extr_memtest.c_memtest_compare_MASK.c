
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long,unsigned long,char) ;
 int FUNC_3 (char*,void*,void*,unsigned long,unsigned long) ;

int FUNC_4(unsigned long *VAR_0, size_t VAR_1, int VAR_2) {
    unsigned long VAR_3 = VAR_1/sizeof(unsigned long)/2;
    unsigned long VAR_4, *VAR_5, *VAR_6;

    FUNC_0((VAR_1 & 4095) == 0);
    VAR_5 = VAR_0;
    VAR_6 = VAR_5+VAR_3;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        if (*VAR_5 != *VAR_6) {
            if (VAR_2) {
                FUNC_3("\n*** MEMORY ERROR DETECTED: %p != %p (%lu vs %lu)\n",
                    (void*)VAR_5, (void*)VAR_6, *VAR_5, *VAR_6);
                FUNC_1(1);
            }
            return 1;
        }
        VAR_5 ++;
        VAR_6 ++;
        if ((VAR_4 & 0xffff) == 0 && VAR_2)
            FUNC_2(VAR_4,VAR_3,'=');
    }
    return 0;
}
