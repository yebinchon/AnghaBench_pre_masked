
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctx {unsigned int size2; unsigned int* unimat; } ;
typedef unsigned int index_t ;


 unsigned int FUNC_0 (struct ctx*) ;
 int FUNC_1 (struct ctx*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct ctx *VAR_0)
{
    unsigned int VAR_1 = VAR_0->size2;
    for (index_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        index_t VAR_3 = FUNC_0(VAR_0);
        FUNC_1(VAR_0, VAR_3);
        VAR_0->unimat[VAR_3] = VAR_2;
    }
}
