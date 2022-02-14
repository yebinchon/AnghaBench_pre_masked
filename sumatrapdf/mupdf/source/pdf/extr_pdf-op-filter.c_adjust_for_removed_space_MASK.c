
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* gstate; } ;
typedef TYPE_3__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_7__ {float word_space; float scale; } ;
struct TYPE_8__ {TYPE_1__ text; } ;
struct TYPE_10__ {TYPE_2__ pending; } ;
typedef TYPE_4__ filter_gstate ;


 int FUNC_0 (int *,TYPE_3__*,float,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_filter_processor *VAR_1)
{
 filter_gstate *VAR_2 = VAR_1->gstate;
 float VAR_3 = VAR_2->pending.text.word_space;
 FUNC_0(VAR_0, VAR_1, VAR_3 * VAR_2->pending.text.scale, VAR_3);
}
