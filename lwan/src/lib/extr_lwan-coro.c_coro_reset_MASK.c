
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coro {unsigned char* stack; uintptr_t* context; int defer; } ;
typedef scalar_t__ coro_function_t ;
struct TYPE_2__ {unsigned char* ss_sp; uintptr_t ss_size; scalar_t__ ss_flags; } ;


 uintptr_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct coro*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (uintptr_t**) ;
 int FUNC_3 (uintptr_t**,void (*) (),int,struct coro*,scalar_t__,void*) ;

void FUNC_4(struct coro *VAR_3, coro_function_t VAR_4, void *VAR_5)
{
    unsigned char *VAR_6 = VAR_3->stack;

    FUNC_1(VAR_3, 0);
    FUNC_0(&VAR_3->defer);






    VAR_3->context[5 ] = (uintptr_t)VAR_5;
    VAR_3->context[6 ] = (uintptr_t)VAR_3;
    VAR_3->context[7 ] = (uintptr_t)VAR_4;
    VAR_3->context[8 ] = (uintptr_t)VAR_2;




    uintptr_t VAR_7 = (uintptr_t)VAR_6 + VAR_0;


    VAR_3->context[9] = (VAR_7 & ~0xful) - 0x8ul;
}
