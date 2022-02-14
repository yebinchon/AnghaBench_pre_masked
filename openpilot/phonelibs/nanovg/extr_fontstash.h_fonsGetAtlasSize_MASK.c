
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef TYPE_2__ FONScontext ;



void FUNC_0(FONScontext* VAR_0, int* VAR_1, int* VAR_2)
{
 if (VAR_0 == ((void*)0)) return;
 *VAR_1 = VAR_0->params.width;
 *VAR_2 = VAR_0->params.height;
}
