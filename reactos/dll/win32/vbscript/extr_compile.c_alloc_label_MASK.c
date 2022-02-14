
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int labels_size; unsigned int* labels; int labels_cnt; } ;
typedef TYPE_1__ compile_ctx_t ;


 int VAR_0 ;
 unsigned int* FUNC_0 (int) ;
 unsigned int* FUNC_1 (unsigned int*,int) ;

__attribute__((used)) static unsigned FUNC_2(compile_ctx_t *VAR_1)
{
    if(!VAR_1->labels_size) {
        VAR_1->labels = FUNC_0(8 * sizeof(*VAR_1->labels));
        if(!VAR_1->labels)
            return 0;
        VAR_1->labels_size = 8;
    }else if(VAR_1->labels_size == VAR_1->labels_cnt) {
        unsigned *VAR_2;

        VAR_2 = FUNC_1(VAR_1->labels, 2*VAR_1->labels_size*sizeof(*VAR_1->labels));
        if(!VAR_2)
            return 0;

        VAR_1->labels = VAR_2;
        VAR_1->labels_size *= 2;
    }

    return VAR_1->labels_cnt++ | VAR_0;
}
