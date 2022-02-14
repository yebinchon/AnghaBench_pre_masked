
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* needs_password ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(fz_context *VAR_0, fz_document *VAR_1)
{
 if (VAR_1 && VAR_1->needs_password)
  return VAR_1->needs_password(VAR_0, VAR_1);
 return 0;
}
