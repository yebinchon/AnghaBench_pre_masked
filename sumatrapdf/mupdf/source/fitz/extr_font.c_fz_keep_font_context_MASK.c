
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_font_context ;
struct TYPE_5__ {TYPE_3__* font; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_6__ {int ctx_refs; } ;


 int * FUNC_0 (TYPE_1__*,TYPE_3__*,int *) ;

fz_font_context *
FUNC_1(fz_context *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);
 return FUNC_0(VAR_0, VAR_0->font, &VAR_0->font->ctx_refs);
}
