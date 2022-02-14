
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,size_t,...) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

void FUNC_4(size_t VAR_3, size_t VAR_4, uint32_t VAR_5) {



    bool VAR_6 = VAR_5 & 1;
    size_t VAR_7 = VAR_5 >> 17;
    size_t VAR_8 = (VAR_5 >> 1) & 0xffff;

    if (VAR_4 && !VAR_6) {
        if (VAR_0 == VAR_1) {
            FUNC_0();
        } else {
            FUNC_2("function doesn't take keyword arguments");
        }
    }

    if (VAR_7 == VAR_8) {
        if (VAR_3 != VAR_7) {
            if (VAR_0 == VAR_1) {
                FUNC_0();
            } else {
                FUNC_3(FUNC_1(&VAR_2,
                    "function takes %d positional arguments but %d were given",
                    VAR_7, VAR_3));
            }
        }
    } else {
        if (VAR_3 < VAR_7) {
            if (VAR_0 == VAR_1) {
                FUNC_0();
            } else {
                FUNC_3(FUNC_1(&VAR_2,
                    "function missing %d required positional arguments",
                    VAR_7 - VAR_3));
            }
        } else if (VAR_3 > VAR_8) {
            if (VAR_0 == VAR_1) {
                FUNC_0();
            } else {
                FUNC_3(FUNC_1(&VAR_2,
                    "function expected at most %d arguments, got %d",
                    VAR_8, VAR_3));
            }
        }
    }
}
