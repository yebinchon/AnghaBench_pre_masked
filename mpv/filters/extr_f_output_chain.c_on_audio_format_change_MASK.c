
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ao_needs_update; int output_aformat; } ;
struct chain {int f; int * ao; TYPE_2__ public; TYPE_1__* convert_wrapper; } ;
struct TYPE_3__ {int last_in_aformat; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct chain *VAR_1 = VAR_0;






    FUNC_0(VAR_1->public.output_aformat,
                          VAR_1->convert_wrapper->last_in_aformat);


    VAR_1->public.ao_needs_update = 1;
    VAR_1->ao = ((void*)0);




    FUNC_1(VAR_1->f);
}
