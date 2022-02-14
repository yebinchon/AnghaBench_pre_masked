
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int report_keyboard_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (void*,int) ;

void FUNC_7(void) {
    for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        if (FUNC_4()) {
            if (VAR_4 != VAR_5) {
                FUNC_6((void *)&VAR_3[VAR_5], sizeof(report_keyboard_t));
                VAR_5 = (VAR_5 + 1) % VAR_0;
                if (VAR_2) {
                    FUNC_3("V-USB: kbuf[");
                    FUNC_1(VAR_5);
                    FUNC_3("->");
                    FUNC_1(VAR_4);
                    FUNC_3("](");
                    FUNC_2((VAR_4 < VAR_5) ? (VAR_0 - VAR_5 + VAR_4) : (VAR_4 - VAR_5));
                    FUNC_3(")\n");
                }
            }
            break;
        }
        FUNC_5();
        FUNC_0(1);
    }
}
