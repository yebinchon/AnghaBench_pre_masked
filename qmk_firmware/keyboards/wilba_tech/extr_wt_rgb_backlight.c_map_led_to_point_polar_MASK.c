
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {void* y; void* x; } ;
typedef TYPE_1__ Point ;


 int * VAR_0 ;
 void* FUNC_0 (size_t*) ;

void FUNC_1( uint8_t VAR_1, Point *VAR_2 )
{

    uint8_t *VAR_3 = (uint8_t*)&VAR_0[VAR_1];
    VAR_2->x = FUNC_0(VAR_3);
    VAR_2->y = FUNC_0(VAR_3+1);
}
