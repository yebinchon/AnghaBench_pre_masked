
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int position; int * window; } ;
typedef TYPE_1__ LZSS ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(LZSS *VAR_0, int VAR_1, int VAR_2) {
    int VAR_3 = FUNC_0(VAR_0);
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_0->window[(VAR_3 + VAR_4) & FUNC_1(VAR_0)] = VAR_0->window[(VAR_3 + VAR_4 - VAR_1) & FUNC_1(VAR_0)];
    }
    VAR_0->position += VAR_2;
}
