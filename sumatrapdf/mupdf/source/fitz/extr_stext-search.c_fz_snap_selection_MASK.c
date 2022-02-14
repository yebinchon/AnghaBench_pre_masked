
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_7__* first_block; } ;
typedef TYPE_4__ fz_stext_page ;
struct TYPE_16__ {TYPE_6__* first_char; struct TYPE_16__* next; } ;
typedef TYPE_5__ fz_stext_line ;
struct TYPE_14__ {void* lr; void* ur; void* ul; void* ll; } ;
struct TYPE_17__ {char c; TYPE_3__ quad; struct TYPE_17__* next; void* origin; } ;
typedef TYPE_6__ fz_stext_char ;
struct TYPE_12__ {TYPE_5__* first_line; } ;
struct TYPE_13__ {TYPE_1__ t; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_2__ u; struct TYPE_18__* next; } ;
typedef TYPE_7__ fz_stext_block ;
struct TYPE_19__ {void* ur; void* lr; void* ul; void* ll; } ;
typedef TYPE_8__ fz_quad ;
typedef void* fz_point ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,void*) ;

fz_quad
FUNC_1(fz_context *VAR_4, fz_stext_page *VAR_5, fz_point *VAR_6, fz_point *VAR_7, int VAR_8)
{
 fz_stext_block *VAR_9;
 fz_stext_line *VAR_10;
 fz_stext_char *VAR_11;
 fz_quad VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_14 = FUNC_0(VAR_5, *VAR_6);
 VAR_15 = FUNC_0(VAR_5, *VAR_7);

 if (VAR_14 > VAR_15)
  VAR_13 = VAR_14, VAR_14 = VAR_15, VAR_15 = VAR_13;

 VAR_12.ll = VAR_12.ul = *VAR_6;
 VAR_12.lr = VAR_12.ur = *VAR_7;

 VAR_13 = 0;
 for (VAR_9 = VAR_5->first_block; VAR_9; VAR_9 = VAR_9->next)
 {
  if (VAR_9->type != VAR_3)
   continue;
  for (VAR_10 = VAR_9->u.t.first_line; VAR_10; VAR_10 = VAR_10->next)
  {
   VAR_16 = '\n';
   for (VAR_11 = VAR_10->first_char; VAR_11; VAR_11 = VAR_11->next)
   {
    if (VAR_13 <= VAR_14)
    {
     if (VAR_8 == VAR_0
      || (VAR_8 == VAR_2 && (VAR_16 == ' ' || VAR_16 == '\n'))
      || (VAR_8 == VAR_1 && (VAR_16 == '\n')))
     {
      VAR_12.ll = VAR_11->quad.ll;
      VAR_12.ul = VAR_11->quad.ul;
      *VAR_6 = VAR_11->origin;
     }
    }
    if (VAR_13 >= VAR_15)
    {
     if (VAR_8 == VAR_0
      || (VAR_8 == VAR_2 && (VAR_11->c == ' ')))
     {
      VAR_12.lr = VAR_11->quad.ll;
      VAR_12.ur = VAR_11->quad.ul;
      *VAR_7 = VAR_11->origin;
      return VAR_12;
     }
     if (!VAR_11->next)
     {
      VAR_12.lr = VAR_11->quad.lr;
      VAR_12.ur = VAR_11->quad.ur;
      *VAR_7 = VAR_11->quad.lr;
      return VAR_12;
     }
    }
    VAR_16 = VAR_11->c;
    ++VAR_13;
   }
  }
 }

 return VAR_12;
}
