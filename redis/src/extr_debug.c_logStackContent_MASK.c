
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;

void FUNC_1(void **VAR_1) {
    int VAR_2;
    for (VAR_2 = 15; VAR_2 >= 0; VAR_2--) {
        unsigned long VAR_3 = (unsigned long) VAR_1+VAR_2;
        unsigned long VAR_4 = (unsigned long) VAR_1[VAR_2];

        if (sizeof(long) == 4)
            FUNC_0(VAR_0, "(%08lx) -> %08lx", VAR_3, VAR_4);
        else
            FUNC_0(VAR_0, "(%016lx) -> %016lx", VAR_3, VAR_4);
    }
}
