
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* usecmap_name; int usecmap; } ;
typedef TYPE_1__ pdf_cmap ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*) ;

pdf_cmap *
FUNC_3(fz_context *VAR_1, const char *VAR_2)
{
 pdf_cmap *VAR_3;
 pdf_cmap *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4)
  FUNC_0(VAR_1, VAR_0, "no builtin cmap file: %s", VAR_2);

 if (VAR_4->usecmap_name[0] && !VAR_4->usecmap)
 {
  VAR_3 = FUNC_3(VAR_1, VAR_4->usecmap_name);
  if (!VAR_3)
   FUNC_0(VAR_1, VAR_0, "no builtin cmap file: %s", VAR_4->usecmap_name);
  FUNC_2(VAR_1, VAR_4, VAR_3);
 }

 return VAR_4;
}
