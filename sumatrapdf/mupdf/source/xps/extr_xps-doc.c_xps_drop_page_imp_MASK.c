
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xml; TYPE_1__* doc; } ;
typedef TYPE_2__ xps_page ;
typedef int fz_page ;
typedef int fz_context ;
struct TYPE_3__ {int super; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_page *VAR_1)
{
 xps_page *VAR_2 = (xps_page*)VAR_1;
 FUNC_0(VAR_0, &VAR_2->doc->super);
 FUNC_1(VAR_0, VAR_2->xml);
}
