
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_2__ {size_t index; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 TYPE_1__** VAR_4 ;
 size_t VAR_5 ;

ngx_int_t
FUNC_0(void)
{
    ngx_uint_t VAR_6;

    for (VAR_6 = 0; VAR_4[VAR_6]; VAR_6++) {
        VAR_4[VAR_6]->index = VAR_6;
        VAR_4[VAR_6]->name = VAR_3[VAR_6];
    }

    VAR_5 = VAR_6;
    VAR_2 = VAR_5 + VAR_0;

    return VAR_1;
}
