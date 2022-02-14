
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int font; int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ xps_font_cache ;
struct TYPE_5__ {TYPE_1__* font_table; } ;
typedef TYPE_2__ xps_document ;
typedef int fz_font ;
typedef int fz_context ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static fz_font *
FUNC_2(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2)
{
 xps_font_cache *VAR_3;
 for (VAR_3 = VAR_1->font_table; VAR_3; VAR_3 = VAR_3->next)
  if (!FUNC_1(VAR_3->name, VAR_2))
   return FUNC_0(VAR_0, VAR_3->font);
 return ((void*)0);
}
