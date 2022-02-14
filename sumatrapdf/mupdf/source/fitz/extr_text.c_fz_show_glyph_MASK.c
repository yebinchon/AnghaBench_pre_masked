
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t len; TYPE_1__* items; } ;
typedef TYPE_2__ fz_text_span ;
typedef int fz_text_language ;
struct TYPE_13__ {int refs; } ;
typedef TYPE_3__ fz_text ;
struct TYPE_14__ {int f; int e; } ;
typedef TYPE_4__ fz_matrix ;
typedef int fz_font ;
typedef int fz_context ;
typedef int fz_bidi_direction ;
struct TYPE_11__ {int ucs; int gid; int y; int x; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,TYPE_3__*,int *,int,int,int ,int ,TYPE_4__) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,int ,char*) ;

void
FUNC_3(fz_context *VAR_1, fz_text *VAR_2, fz_font *VAR_3, fz_matrix VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, fz_bidi_direction VAR_9, fz_text_language VAR_10)
{
 fz_text_span *VAR_11;

 if (VAR_2->refs != 1)
  FUNC_2(VAR_1, VAR_0, "cannot modify shared text objects");

 VAR_11 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7, VAR_8, VAR_9, VAR_10, VAR_4);

 FUNC_1(VAR_1, VAR_11, 1);

 VAR_11->items[VAR_11->len].ucs = VAR_6;
 VAR_11->items[VAR_11->len].gid = VAR_5;
 VAR_11->items[VAR_11->len].x = VAR_4.e;
 VAR_11->items[VAR_11->len].y = VAR_4.f;
 VAR_11->len++;
}
