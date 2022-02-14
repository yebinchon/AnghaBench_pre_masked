
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ a; scalar_t__ b; scalar_t__ c; scalar_t__ d; } ;
struct TYPE_10__ {int wmode; int bidi_level; scalar_t__ markup_dir; scalar_t__ language; struct TYPE_10__* next; TYPE_1__ trm; int * font; } ;
typedef TYPE_2__ fz_text_span ;
typedef scalar_t__ fz_text_language ;
struct TYPE_11__ {TYPE_2__* tail; TYPE_2__* head; } ;
typedef TYPE_3__ fz_text ;
struct TYPE_12__ {scalar_t__ a; scalar_t__ b; scalar_t__ c; scalar_t__ d; } ;
typedef TYPE_4__ fz_matrix ;
typedef int fz_font ;
typedef int fz_context ;
typedef scalar_t__ fz_bidi_direction ;


 void* FUNC_0 (int *,int *,int,int,scalar_t__,scalar_t__,TYPE_4__) ;

__attribute__((used)) static fz_text_span *
FUNC_1(fz_context *VAR_0, fz_text *VAR_1, fz_font *VAR_2, int VAR_3, int VAR_4, fz_bidi_direction VAR_5, fz_text_language VAR_6, fz_matrix VAR_7)
{
 if (!VAR_1->tail)
 {
  VAR_1->head = VAR_1->tail = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }
 else if (VAR_1->tail->font != VAR_2 ||
  VAR_1->tail->wmode != VAR_3 ||
  VAR_1->tail->bidi_level != VAR_4 ||
  VAR_1->tail->markup_dir != VAR_5 ||
  VAR_1->tail->language != VAR_6 ||
  VAR_1->tail->trm.a != VAR_7.a ||
  VAR_1->tail->trm.b != VAR_7.b ||
  VAR_1->tail->trm.c != VAR_7.c ||
  VAR_1->tail->trm.d != VAR_7.d)
 {
  VAR_1->tail = VAR_1->tail->next = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 }
 return VAR_1->tail;
}
