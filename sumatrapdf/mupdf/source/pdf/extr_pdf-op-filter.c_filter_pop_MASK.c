
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_6__* gstate; TYPE_7__* chain; } ;
typedef TYPE_5__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_12__ {int font; } ;
struct TYPE_13__ {TYPE_3__ text; } ;
struct TYPE_10__ {int font; } ;
struct TYPE_11__ {TYPE_1__ text; } ;
struct TYPE_15__ {TYPE_4__ sent; TYPE_2__ pending; scalar_t__ pushed; struct TYPE_15__* next; } ;
typedef TYPE_6__ filter_gstate ;
struct TYPE_16__ {int (* op_Q ) (int *,TYPE_7__*) ;} ;


 int FUNC_0 (int *,TYPE_6__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_7__*) ;

__attribute__((used)) static int
FUNC_3(fz_context *VAR_0, pdf_filter_processor *VAR_1)
{
 filter_gstate *VAR_2 = VAR_1->gstate;
 filter_gstate *VAR_3 = VAR_2->next;


 if (VAR_3 == ((void*)0))
  return 1;

 if (VAR_2->pushed)
  if (VAR_1->chain->op_Q)
   VAR_1->chain->op_Q(VAR_0, VAR_1->chain);

 FUNC_1(VAR_0, VAR_2->pending.text.font);
 FUNC_1(VAR_0, VAR_2->sent.text.font);
 FUNC_0(VAR_0, VAR_2);
 VAR_1->gstate = VAR_3;
 return 0;
}
