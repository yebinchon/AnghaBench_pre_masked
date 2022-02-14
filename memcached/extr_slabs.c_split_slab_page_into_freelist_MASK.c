
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int perslab; int size; } ;
typedef TYPE_1__ slabclass_t ;


 int FUNC_0 (char*,int ,unsigned int const) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(char *VAR_1, const unsigned int VAR_2) {
    slabclass_t *VAR_3 = &VAR_0[VAR_2];
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3->perslab; VAR_4++) {
        FUNC_0(VAR_1, 0, VAR_2);
        VAR_1 += VAR_3->size;
    }
}
