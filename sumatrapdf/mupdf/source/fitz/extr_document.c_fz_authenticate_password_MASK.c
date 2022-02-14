
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* authenticate_password ) (int *,TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,char const*) ;

int
FUNC_1(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2)
{
 if (VAR_1 && VAR_1->authenticate_password)
  return VAR_1->authenticate_password(VAR_0, VAR_1, VAR_2);
 return 1;
}
