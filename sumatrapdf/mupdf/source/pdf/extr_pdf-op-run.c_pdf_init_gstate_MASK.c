
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int alpha; int gstate_num; void* color_params; int * shade; int * pattern; scalar_t__* v; void* colorspace; void* kind; } ;
struct TYPE_7__ {int alpha; int gstate_num; void* color_params; int * shade; int * pattern; scalar_t__* v; void* colorspace; void* kind; } ;
struct TYPE_6__ {int scale; int size; scalar_t__ rise; scalar_t__ render; int * font; scalar_t__ leading; scalar_t__ word_space; scalar_t__ char_space; } ;
struct TYPE_9__ {TYPE_3__ stroke; TYPE_2__ fill; scalar_t__ luminosity; int softmask_ctm; int * softmask_resources; int * softmask; scalar_t__ blendmode; TYPE_1__ text; int stroke_state; scalar_t__ clip_depth; int ctm; } ;
typedef TYPE_4__ pdf_gstate ;
typedef int fz_matrix ;
typedef int fz_context ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_3, pdf_gstate *VAR_4, fz_matrix VAR_5)
{
 VAR_4->ctm = VAR_5;
 VAR_4->clip_depth = 0;

 VAR_4->stroke_state = FUNC_2(VAR_3);

 VAR_4->stroke.kind = VAR_0;
 VAR_4->stroke.colorspace = FUNC_1(VAR_3, FUNC_0(VAR_3));
 VAR_4->stroke.v[0] = 0;
 VAR_4->stroke.pattern = ((void*)0);
 VAR_4->stroke.shade = ((void*)0);
 VAR_4->stroke.alpha = 1;
 VAR_4->stroke.gstate_num = -1;

 VAR_4->fill.kind = VAR_0;
 VAR_4->fill.colorspace = FUNC_1(VAR_3, FUNC_0(VAR_3));
 VAR_4->fill.v[0] = 0;
 VAR_4->fill.pattern = ((void*)0);
 VAR_4->fill.shade = ((void*)0);
 VAR_4->fill.alpha = 1;
 VAR_4->fill.gstate_num = -1;

 VAR_4->text.char_space = 0;
 VAR_4->text.word_space = 0;
 VAR_4->text.scale = 1;
 VAR_4->text.leading = 0;
 VAR_4->text.font = ((void*)0);
 VAR_4->text.size = -1;
 VAR_4->text.render = 0;
 VAR_4->text.rise = 0;

 VAR_4->blendmode = 0;
 VAR_4->softmask = ((void*)0);
 VAR_4->softmask_resources = ((void*)0);
 VAR_4->softmask_ctm = VAR_2;
 VAR_4->luminosity = 0;

 VAR_4->fill.color_params = VAR_1;
 VAR_4->stroke.color_params = VAR_1;
}
