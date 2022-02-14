
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int * table; } ;
typedef TYPE_1__ json_array_t ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(json_array_t *VAR_0, size_t VAR_1,
                       size_t VAR_2, size_t VAR_3)
{
    FUNC_0(&VAR_0->table[VAR_1], &VAR_0->table[VAR_2], VAR_3 * sizeof(json_t *));
}
