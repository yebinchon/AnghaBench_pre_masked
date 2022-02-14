
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nn_chunk {size_t size; int ffn; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nn_chunk* FUNC_0 (size_t,char*) ;
 int FUNC_1 (int *,int) ;
 int VAR_3 ;
 void* FUNC_2 (struct nn_chunk*) ;
 size_t FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6 (size_t VAR_4, int VAR_5, void **VAR_6)
{
    size_t VAR_7;
    struct nn_chunk *VAR_8;
    const size_t VAR_9 = FUNC_3 ();


    VAR_7 = VAR_9 + VAR_4;
    if (FUNC_5 (VAR_7 < VAR_9))
        return -VAR_1;


    switch (VAR_5) {
    case 0:
        VAR_8 = FUNC_0 (VAR_7, "message chunk");
        break;
    default:
        return -VAR_0;
    }
    if (FUNC_5 (!VAR_8))
        return -VAR_1;


    FUNC_1 (&VAR_8->refcount, 1);
    VAR_8->size = VAR_4;
    VAR_8->ffn = VAR_3;



    FUNC_4 ((uint8_t*) ((uint32_t*) (VAR_8 + 1)), 0);


    FUNC_4 ((uint8_t*) ((((uint32_t*) (VAR_8 + 1))) + 1), VAR_2);

    *VAR_6 = FUNC_2 (VAR_8);
    return 0;
}
