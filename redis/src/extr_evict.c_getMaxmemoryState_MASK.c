
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t maxmemory; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 size_t FUNC_1 () ;

int FUNC_2(size_t *VAR_3, size_t *VAR_4, size_t *VAR_5, float *VAR_6) {
    size_t VAR_7, VAR_8, VAR_9;



    VAR_7 = FUNC_1();
    if (VAR_3) *VAR_3 = VAR_7;


    int VAR_10 = !VAR_2.maxmemory || VAR_7 <= VAR_2.maxmemory;
    if (VAR_10 && !VAR_6) return VAR_1;



    VAR_8 = VAR_7;
    size_t VAR_11 = FUNC_0();
    VAR_8 = (VAR_8 > VAR_11) ? VAR_8-VAR_11 : 0;


    if (VAR_6) {
        if (!VAR_2.maxmemory) {
            *VAR_6 = 0;
        } else {
            *VAR_6 = (float)VAR_8 / (float)VAR_2.maxmemory;
        }
    }

    if (VAR_10) return VAR_1;


    if (VAR_8 <= VAR_2.maxmemory) return VAR_1;


    VAR_9 = VAR_8 - VAR_2.maxmemory;

    if (VAR_4) *VAR_4 = VAR_8;
    if (VAR_5) *VAR_5 = VAR_9;

    return VAR_0;
}
