
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int contents; int resources; } ;
typedef TYPE_1__ pdf_pattern ;
typedef int fz_storable ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_storable *VAR_1)
{
 pdf_pattern *VAR_2 = (pdf_pattern *)VAR_1;
 FUNC_1(VAR_0, VAR_2->resources);
 FUNC_1(VAR_0, VAR_2->contents);
 FUNC_0(VAR_0, VAR_2);
}
