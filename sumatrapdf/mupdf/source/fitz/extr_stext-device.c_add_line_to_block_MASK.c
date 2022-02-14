
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pool; } ;
typedef TYPE_3__ fz_stext_page ;
struct TYPE_13__ {int wmode; int dir; struct TYPE_13__* next; struct TYPE_13__* prev; } ;
typedef TYPE_4__ fz_stext_line ;
struct TYPE_10__ {TYPE_4__* last_line; TYPE_4__* first_line; } ;
struct TYPE_11__ {TYPE_1__ t; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef TYPE_5__ fz_stext_block ;
typedef int fz_point ;
typedef int fz_context ;


 TYPE_4__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static fz_stext_line *
FUNC_1(fz_context *VAR_0, fz_stext_page *VAR_1, fz_stext_block *VAR_2, const fz_point *VAR_3, int VAR_4)
{
 fz_stext_line *VAR_5 = FUNC_0(VAR_0, VAR_1->pool, sizeof *VAR_2->u.t.first_line);
 VAR_5->prev = VAR_2->u.t.last_line;
 if (!VAR_2->u.t.first_line)
  VAR_2->u.t.first_line = VAR_2->u.t.last_line = VAR_5;
 else
 {
  VAR_2->u.t.last_line->next = VAR_5;
  VAR_2->u.t.last_line = VAR_5;
 }

 VAR_5->dir = *VAR_3;
 VAR_5->wmode = VAR_4;

 return VAR_5;
}
