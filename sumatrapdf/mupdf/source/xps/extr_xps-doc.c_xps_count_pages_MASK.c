
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_count; } ;
typedef TYPE_1__ xps_document ;
typedef int fz_document ;
typedef int fz_context ;



int
FUNC_0(fz_context *VAR_0, fz_document *VAR_1, int VAR_2)
{
 xps_document *VAR_3 = (xps_document*)VAR_1;
 return VAR_3->page_count;
}
