
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct field_value_data {int dummy; } ;
struct detail_data {int cFields; TYPE_1__* fields; } ;
typedef int create_detailed_value_func ;
struct TYPE_4__ {void* param; int * detailed_value; int create; } ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 TYPE_1__* FUNC_2 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct detail_data *VAR_0,
 create_detailed_value_func VAR_1, void *VAR_2)
{
    if (VAR_0->cFields)
        VAR_0->fields = FUNC_2(FUNC_0(), 0, VAR_0->fields,
         (VAR_0->cFields + 1) * sizeof(struct field_value_data));
    else
        VAR_0->fields = FUNC_1(FUNC_0(), 0,
         sizeof(struct field_value_data));
    if (VAR_0->fields)
    {
        VAR_0->fields[VAR_0->cFields].create = VAR_1;
        VAR_0->fields[VAR_0->cFields].detailed_value = ((void*)0);
        VAR_0->fields[VAR_0->cFields].param = VAR_2;
        VAR_0->cFields++;
    }
}
