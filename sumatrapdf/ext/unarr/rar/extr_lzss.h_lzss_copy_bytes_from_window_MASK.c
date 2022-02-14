
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_5__ {int * window; } ;
typedef TYPE_1__ LZSS ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_3(LZSS *VAR_0, uint8_t *VAR_1, int64_t VAR_2, int VAR_3) {
    int VAR_4 = FUNC_0(VAR_0, VAR_2);
    int VAR_5 = FUNC_1(VAR_0) - VAR_4;
    if (VAR_3 <= VAR_5) {

        FUNC_2(VAR_1, &VAR_0->window[VAR_4], VAR_3);
    }
    else {

        FUNC_2(VAR_1, &VAR_0->window[VAR_4], VAR_5);
        FUNC_2(VAR_1 + VAR_5, &VAR_0->window[0], VAR_3 - VAR_5);
    }
}
