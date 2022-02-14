
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ParseTypedefData {int err_idx; int ptr; TYPE_1__* errors; } ;
struct TYPE_2__ {unsigned int line; int ptr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ParseTypedefData* VAR_0, unsigned VAR_1)
{
    FUNC_0(VAR_0->err_idx < sizeof(VAR_0->errors) / sizeof(VAR_0->errors[0]));
    VAR_0->errors[VAR_0->err_idx].line = VAR_1;
    VAR_0->errors[VAR_0->err_idx].ptr = VAR_0->ptr;
    VAR_0->err_idx++;
}
