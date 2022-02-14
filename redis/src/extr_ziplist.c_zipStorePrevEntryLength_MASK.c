
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned char*,unsigned int) ;

unsigned int FUNC_1(unsigned char *VAR_1, unsigned int VAR_2) {
    if (VAR_1 == ((void*)0)) {
        return (VAR_2 < VAR_0) ? 1 : sizeof(VAR_2)+1;
    } else {
        if (VAR_2 < VAR_0) {
            VAR_1[0] = VAR_2;
            return 1;
        } else {
            return FUNC_0(VAR_1,VAR_2);
        }
    }
}
