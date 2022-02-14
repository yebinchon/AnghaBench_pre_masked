
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3 (const unsigned int VAR_4) {
    int VAR_5;
    unsigned int VAR_6 = 0;







    for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++) {
        if (++VAR_6 > VAR_4)
            break;
        if (FUNC_0(VAR_5) == 0) {
            FUNC_2(VAR_3, "Error while preallocating slab memory!\n"
                "If using -L or other prealloc options, max memory must be "
                "at least %d megabytes.\n", VAR_2);
            FUNC_1(1);
        }
    }
}
