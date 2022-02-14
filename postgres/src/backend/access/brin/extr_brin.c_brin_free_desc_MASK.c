
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bd_context; TYPE_1__* bd_tupdesc; } ;
struct TYPE_4__ {int tdrefcount; } ;
typedef TYPE_2__ BrinDesc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(BrinDesc *VAR_0)
{

 FUNC_0(VAR_0->bd_tupdesc->tdrefcount >= 1);

 FUNC_1(VAR_0->bd_context);
}
