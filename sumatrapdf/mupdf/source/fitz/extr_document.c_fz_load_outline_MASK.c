
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_outline ;
struct TYPE_5__ {int * (* load_outline ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int *,TYPE_1__*) ;

fz_outline *
FUNC_2(fz_context *VAR_0, fz_document *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_1 && VAR_1->load_outline)
  return VAR_1->load_outline(VAR_0, VAR_1);
 return ((void*)0);
}
