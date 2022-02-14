
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* base_uri; int base_xml; struct TYPE_4__* next; } ;
typedef TYPE_1__ xps_resource ;
typedef int xps_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_0, xps_document *VAR_1, xps_resource *VAR_2)
{
 xps_resource *VAR_3;
 while (VAR_2)
 {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_0, VAR_2->base_xml);
  FUNC_1(VAR_0, VAR_2->base_uri);
  FUNC_1(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }
}
