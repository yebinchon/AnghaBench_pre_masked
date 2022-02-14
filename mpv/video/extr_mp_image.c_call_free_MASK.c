
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct free_args {int arg; int (* free ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct free_args*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint8_t *VAR_1)
{
    struct free_args *VAR_2 = VAR_0;
    VAR_2->free(VAR_2->arg);
    FUNC_1(VAR_2);
}
