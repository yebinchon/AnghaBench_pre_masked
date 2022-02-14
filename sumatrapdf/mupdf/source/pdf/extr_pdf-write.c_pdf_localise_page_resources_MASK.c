
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int resources_localised; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void
FUNC_4(fz_context *VAR_2, pdf_document *VAR_3)
{
 if (VAR_3->resources_localised)
  return;

 FUNC_1(VAR_2, VAR_3, FUNC_2(VAR_2, FUNC_3(VAR_2, VAR_3), FUNC_0(VAR_1), FUNC_0(VAR_0), ((void*)0)), 0, 0);

 VAR_3->resources_localised = 1;
}
