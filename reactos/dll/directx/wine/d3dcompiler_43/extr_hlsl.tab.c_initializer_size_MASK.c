
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_initializer {unsigned int args_count; TYPE_1__** args; } ;
struct TYPE_2__ {int data_type; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(const struct parse_initializer *VAR_0)
{
    unsigned int VAR_1 = 0, VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->args_count; ++VAR_2)
    {
        VAR_1 += FUNC_1(VAR_0->args[VAR_2]->data_type);
    }
    FUNC_0("Initializer size = %u.\n", VAR_1);
    return VAR_1;
}
