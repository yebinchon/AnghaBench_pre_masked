
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_8__ {int * name; int * creator; } ;
typedef TYPE_2__ pdf_layer_config ;
struct TYPE_9__ {TYPE_1__* ocg; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;
struct TYPE_7__ {int num_configs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,int *,int ) ;
 void* FUNC_4 (int *,int *,int ,int *) ;
 int * FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_3__*) ;

void
FUNC_8(fz_context *VAR_5, pdf_document *VAR_6, int VAR_7, pdf_layer_config *VAR_8)
{
 pdf_obj *VAR_9;
 pdf_obj *VAR_10;

 if (!VAR_8)
  return;

 VAR_8->name = ((void*)0);
 VAR_8->creator = ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_6->ocg == ((void*)0))
  return;
 if (VAR_7 < 0 || VAR_7 >= VAR_6->ocg->num_configs)
  FUNC_1(VAR_5, VAR_3, "Invalid layer config number");

 VAR_9 = FUNC_5(VAR_5, FUNC_7(VAR_5, VAR_6), "Root/OCProperties");
 if (!VAR_9)
  return;

 VAR_10 = FUNC_3(VAR_5, VAR_9, FUNC_0(VAR_0));
 if (FUNC_6(VAR_5, VAR_10))
  VAR_10 = FUNC_2(VAR_5, VAR_10, VAR_7);
 else if (VAR_7 == 0)
  VAR_10 = FUNC_3(VAR_5, VAR_9, FUNC_0(VAR_2));
 else
  FUNC_1(VAR_5, VAR_3, "Invalid layer config number");

 VAR_8->creator = FUNC_4(VAR_5, VAR_10, FUNC_0(VAR_1), ((void*)0));
 VAR_8->name = FUNC_4(VAR_5, VAR_10, FUNC_0(VAR_4), ((void*)0));
}
