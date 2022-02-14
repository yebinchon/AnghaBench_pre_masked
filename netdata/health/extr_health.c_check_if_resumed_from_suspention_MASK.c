
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(void) {
    static usec_t VAR_0 = 0, VAR_1 = 0;
    usec_t VAR_2 = FUNC_1(), VAR_3 = FUNC_0();
    int VAR_4 = 0;




    if(VAR_0 && VAR_1 && VAR_2 - VAR_0 > 2 * (VAR_3 - VAR_1))
        VAR_4 = 1;

    VAR_0 = VAR_2;
    VAR_1 = VAR_3;

    return VAR_4;
}
