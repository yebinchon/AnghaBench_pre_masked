
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* y; void* x; } ;
struct TYPE_8__ {void* y; void* x; } ;
struct TYPE_9__ {TYPE_1__ low; TYPE_2__ high; } ;
typedef TYPE_3__ BOX ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,void*) ;

__attribute__((used)) static void
FUNC_2(BOX *VAR_0, const BOX *VAR_1, const BOX *VAR_2)
{
 VAR_0->high.x = FUNC_0(VAR_1->high.x, VAR_2->high.x);
 VAR_0->high.y = FUNC_0(VAR_1->high.y, VAR_2->high.y);
 VAR_0->low.x = FUNC_1(VAR_1->low.x, VAR_2->low.x);
 VAR_0->low.y = FUNC_1(VAR_1->low.y, VAR_2->low.y);
}
