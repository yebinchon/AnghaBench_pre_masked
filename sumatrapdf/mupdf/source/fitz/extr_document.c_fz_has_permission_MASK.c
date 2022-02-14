
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_permission ;
struct TYPE_4__ {int (* has_permission ) (int *,TYPE_1__*,int ) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;

int
FUNC_1(fz_context *VAR_0, fz_document *VAR_1, fz_permission VAR_2)
{
 if (VAR_1 && VAR_1->has_permission)
  return VAR_1->has_permission(VAR_0, VAR_1, VAR_2);
 return 1;
}
