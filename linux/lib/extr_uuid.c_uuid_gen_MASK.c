
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* b; } ;
typedef TYPE_1__ uuid_t ;


 int FUNC_0 (int*) ;

void FUNC_1(uuid_t *VAR_0)
{
 FUNC_0(VAR_0->b);

 VAR_0->b[6] = (VAR_0->b[6] & 0x0F) | 0x40;
}
