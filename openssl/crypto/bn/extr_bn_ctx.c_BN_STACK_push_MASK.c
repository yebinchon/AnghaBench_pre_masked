
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; int size; unsigned int* indexes; } ;
typedef TYPE_1__ BN_STACK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int*) ;
 unsigned int* FUNC_2 (int) ;
 int FUNC_3 (unsigned int*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_4(BN_STACK *VAR_3, unsigned int VAR_4)
{
    if (VAR_3->depth == VAR_3->size) {

        unsigned int VAR_5 =
            VAR_3->size ? (VAR_3->size * 3 / 2) : VAR_0;
        unsigned int *VAR_6;

        if ((VAR_6 = FUNC_2(sizeof(*VAR_6) * VAR_5)) == ((void*)0)) {
            FUNC_0(VAR_1, VAR_2);
            return 0;
        }
        if (VAR_3->depth)
            FUNC_3(VAR_6, VAR_3->indexes, sizeof(*VAR_6) * VAR_3->depth);
        FUNC_1(VAR_3->indexes);
        VAR_3->indexes = VAR_6;
        VAR_3->size = VAR_5;
    }
    VAR_3->indexes[(VAR_3->depth)++] = VAR_4;
    return 1;
}
