
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_initializer {unsigned int args_count; int * args; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct parse_initializer *VAR_0)
{
    unsigned int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->args_count; ++VAR_1)
        FUNC_1(VAR_0->args[VAR_1]);
    FUNC_0(VAR_0->args);
}
