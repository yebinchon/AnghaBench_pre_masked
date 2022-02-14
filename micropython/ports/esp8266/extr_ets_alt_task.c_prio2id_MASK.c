
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static inline int FUNC_3(uint8_t VAR_1) {
    int VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 < 0 || VAR_2 >= FUNC_0(VAR_0)) {
        FUNC_2("task prio out of range: %d\n", VAR_1);
        while (1);
    }
    return VAR_2;
}
