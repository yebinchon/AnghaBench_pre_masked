
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cap; scalar_t__ len; } ;
typedef TYPE_1__ page_objects_list ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int,int) ;

__attribute__((used)) static page_objects_list *
FUNC_1(fz_context *VAR_0)
{
 page_objects_list *VAR_1 = FUNC_0(VAR_0, 1, sizeof(*VAR_1));

 VAR_1->cap = 1;
 VAR_1->len = 0;
 return VAR_1;
}
