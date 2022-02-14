
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_location ;
struct TYPE_5__ {int (* resolve_link ) (int *,TYPE_1__*,char const*,float*,float*) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,TYPE_1__*,char const*,float*,float*) ;

fz_location
FUNC_3(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2, float *VAR_3, float *VAR_4)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_3) *VAR_3 = 0;
 if (VAR_4) *VAR_4 = 0;
 if (VAR_1 && VAR_1->resolve_link)
  return VAR_1->resolve_link(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_1(-1, -1);
}
