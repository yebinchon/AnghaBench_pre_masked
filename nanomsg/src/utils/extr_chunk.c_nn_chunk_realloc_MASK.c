
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int n; } ;
struct nn_chunk {size_t size; TYPE_1__ refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (size_t,int ,void**) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct nn_chunk*) ;
 struct nn_chunk* FUNC_5 (void*) ;
 size_t FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9 (size_t VAR_2, void **VAR_3)
{
    struct nn_chunk *VAR_4;
    void *VAR_5;
    size_t VAR_6;
    int VAR_7;
    void *VAR_8 = *VAR_3;

    VAR_4 = FUNC_5 (VAR_8);



    if (VAR_4->refcount.n == 1) {

         size_t VAR_9;
         size_t VAR_10;




        if (VAR_2 <= VAR_4->size) {
            VAR_4->size = VAR_2;
            return (0);
        }

        VAR_6 = FUNC_6 ();
        VAR_10 = (uint8_t*) VAR_8 - (uint8_t*) VAR_4 - VAR_6;
        VAR_9 = VAR_2 - VAR_4->size;


        if (VAR_6 + VAR_2 < VAR_2) {
            return -VAR_0;
 }


        if (VAR_9 <= VAR_10) {
            VAR_5 = (uint8_t *)VAR_8 - VAR_9;
            FUNC_1 (VAR_5, VAR_8, VAR_4->size);
            VAR_4->size = VAR_2;



            VAR_10 = (uint8_t *)VAR_5 - (uint8_t *)VAR_4 - VAR_6;
            FUNC_7 ((uint8_t*) (((uint32_t*) VAR_5) - 1), VAR_1);
            FUNC_7 ((uint8_t*) (((uint32_t*) VAR_5) - 2), (uint32_t) VAR_10);
            *VAR_3 = VAR_8;
            return (0);
        }
    }




    VAR_5 = ((void*)0);
    VAR_7 = FUNC_2 (VAR_2, 0, &VAR_5);

    if (FUNC_8 (VAR_7 != 0)) {
        return VAR_7;
    }

    FUNC_0 (VAR_5, FUNC_4 (VAR_4), VAR_4->size);
    *VAR_3 = VAR_5;
    FUNC_3 (VAR_8);

    return 0;
}
