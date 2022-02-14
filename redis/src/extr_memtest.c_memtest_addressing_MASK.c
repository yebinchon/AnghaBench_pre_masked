
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,char) ;
 int FUNC_2 (char*,void*,unsigned long) ;

int FUNC_3(unsigned long *VAR_0, size_t VAR_1, int VAR_2) {
    unsigned long VAR_3 = VAR_1/sizeof(unsigned long);
    unsigned long VAR_4, *VAR_5;


    VAR_5 = VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        *VAR_5 = (unsigned long)VAR_5;
        VAR_5++;
        if ((VAR_4 & 0xffff) == 0 && VAR_2)
            FUNC_1(VAR_4,VAR_3*2,'A');
    }

    VAR_5 = VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        if (*VAR_5 != (unsigned long)VAR_5) {
            if (VAR_2) {
                FUNC_2("\n*** MEMORY ADDRESSING ERROR: %p contains %lu\n",
                    (void*) VAR_5, *VAR_5);
                FUNC_0(1);
            }
            return 1;
        }
        VAR_5++;
        if ((VAR_4 & 0xffff) == 0 && VAR_2)
            FUNC_1(VAR_4+VAR_3,VAR_3*2,'A');
    }
    return 0;
}
