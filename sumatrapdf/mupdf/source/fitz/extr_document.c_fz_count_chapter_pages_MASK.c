
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* count_pages ) (int *,TYPE_1__*,int) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

int
FUNC_2(fz_context *VAR_0, fz_document *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_1 && VAR_1->count_pages)
  return VAR_1->count_pages(VAR_0, VAR_1, VAR_2);
 return 0;
}
