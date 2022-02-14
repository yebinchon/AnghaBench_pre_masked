
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* lookup_metadata ) (int *,TYPE_1__*,char const*,char*,int) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,char const*,char*,int) ;

int
FUNC_1(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2, char *VAR_3, int VAR_4)
{
 if (VAR_3 && VAR_4 > 0)
  VAR_3[0] = 0;
 if (VAR_1 && VAR_1->lookup_metadata)
  return VAR_1->lookup_metadata(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return -1;
}
