
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float size; int color; int align; scalar_t__ spacing; scalar_t__ blur; scalar_t__ font; } ;
typedef TYPE_1__ FONSstate ;
typedef int FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;

void FUNC_1(FONScontext* VAR_2)
{
 FONSstate* VAR_3 = FUNC_0(VAR_2);
 VAR_3->size = 12.0f;
 VAR_3->color = 0xffffffff;
 VAR_3->font = 0;
 VAR_3->blur = 0;
 VAR_3->spacing = 0;
 VAR_3->align = VAR_1 | VAR_0;
}
