
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {int * dli_sname; } ;
typedef TYPE_1__ Dl_info ;


 scalar_t__ FUNC_0 (void*,TYPE_1__*) ;
 int FUNC_1 (char*,unsigned long,int *) ;

void FUNC_2(void *VAR_0, size_t VAR_1) {
    size_t VAR_2;
    unsigned char *VAR_3 = VAR_0;
    Dl_info VAR_4;


    unsigned long VAR_5[256] = {0};

    if (VAR_1 < 5) return;
    for (VAR_2 = 0; VAR_2 < VAR_1-4; VAR_2++) {
        if (VAR_3[VAR_2] != 0xE8) continue;
        unsigned long VAR_6 = (unsigned long)VAR_0+VAR_2+5;
        VAR_6 += *((int32_t*)(VAR_3+VAR_2+1));
        if (FUNC_0((void*)VAR_6, &VAR_4) != 0 && VAR_4.dli_sname != ((void*)0)) {
            if (VAR_5[VAR_6&0xff] != VAR_6) {
                FUNC_1("Function at 0x%lx is %s\n",VAR_6,VAR_4.dli_sname);
                VAR_5[VAR_6&0xff] = VAR_6;
            }
            VAR_2 += 4;
        }
    }
}
