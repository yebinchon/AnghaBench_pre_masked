
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cmap_name; } ;
typedef TYPE_1__ pdf_cmap ;
typedef int fz_context ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (char const*,int ) ;
 TYPE_1__** VAR_0 ;

pdf_cmap *
FUNC_2(fz_context *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0)-1;
 int VAR_4 = 0;
 while (VAR_4 <= VAR_3)
 {
  int VAR_5 = (VAR_4 + VAR_3) >> 1;
  int VAR_6 = FUNC_1(VAR_2, VAR_0[VAR_5]->cmap_name);
  if (VAR_6 < 0)
   VAR_3 = VAR_5 - 1;
  else if (VAR_6 > 0)
   VAR_4 = VAR_5 + 1;
  else
   return VAR_0[VAR_5];
 }
 return ((void*)0);
}
