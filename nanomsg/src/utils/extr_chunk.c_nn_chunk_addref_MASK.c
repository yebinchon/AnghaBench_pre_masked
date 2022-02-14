
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nn_chunk {int refcount; } ;


 int FUNC_0 (int *,int ) ;
 struct nn_chunk* FUNC_1 (void*) ;

void FUNC_2 (void *VAR_0, uint32_t VAR_1)
{
    struct nn_chunk *VAR_2;

    VAR_2 = FUNC_1 (VAR_0);

    FUNC_0 (&VAR_2->refcount, VAR_1);
}
