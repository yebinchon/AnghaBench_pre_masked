
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nn_chunk {int (* ffn ) (struct nn_chunk*) ;int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct nn_chunk* FUNC_2 (void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct nn_chunk*) ;

void FUNC_5 (void *VAR_1)
{
    struct nn_chunk *VAR_2;

    VAR_2 = FUNC_2 (VAR_1);



    if (FUNC_0 (&VAR_2->refcount, 1) <= 1) {


        FUNC_3 ((uint8_t*) (((uint32_t*) VAR_1) - 1), VAR_0);


        FUNC_1 (&VAR_2->refcount);



        VAR_2->ffn (VAR_2);
    }
}
