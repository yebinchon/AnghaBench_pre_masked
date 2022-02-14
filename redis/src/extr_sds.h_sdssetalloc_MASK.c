
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char* sds ;
struct TYPE_2__ {size_t alloc; } ;


 TYPE_1__* FUNC_0 (int,unsigned char*) ;





 unsigned char VAR_0 ;

__attribute__((used)) static inline void FUNC_1(sds VAR_1, size_t VAR_2) {
    unsigned char VAR_3 = VAR_1[-1];
    switch(VAR_3&VAR_0) {
        case 130:

            break;
        case 128:
            FUNC_0(8,VAR_1)->alloc = VAR_2;
            break;
        case 132:
            FUNC_0(16,VAR_1)->alloc = VAR_2;
            break;
        case 131:
            FUNC_0(32,VAR_1)->alloc = VAR_2;
            break;
        case 129:
            FUNC_0(64,VAR_1)->alloc = VAR_2;
            break;
    }
}
