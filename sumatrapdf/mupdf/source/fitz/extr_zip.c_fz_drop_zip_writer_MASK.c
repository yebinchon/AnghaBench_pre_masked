
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int central; int output; int closed; } ;
typedef TYPE_1__ fz_zip_writer ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;

void
FUNC_4(fz_context *VAR_0, fz_zip_writer *VAR_1)
{
 if (!VAR_1)
  return;
 if (!VAR_1->closed)
  FUNC_3(VAR_0, "dropping unclosed zip writer");
 FUNC_1(VAR_0, VAR_1->output);
 FUNC_0(VAR_0, VAR_1->central);
 FUNC_2(VAR_0, VAR_1);
}
