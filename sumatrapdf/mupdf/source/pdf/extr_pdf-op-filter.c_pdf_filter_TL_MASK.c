
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_9__ {TYPE_3__* gstate; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_6__ {float leading; } ;
struct TYPE_7__ {TYPE_1__ text; } ;
struct TYPE_8__ {TYPE_2__ pending; } ;


 int FUNC_0 (int *,TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2)
{
 pdf_filter_processor *VAR_3 = (pdf_filter_processor*)VAR_1;
 FUNC_0(VAR_0, VAR_3, 0);
 VAR_3->gstate->pending.text.leading = VAR_2;
}
