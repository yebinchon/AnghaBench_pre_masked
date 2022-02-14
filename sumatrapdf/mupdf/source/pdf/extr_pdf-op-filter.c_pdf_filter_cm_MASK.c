
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_processor ;
typedef int pdf_filter_processor ;
struct TYPE_7__ {float a; float b; float c; float d; float e; float f; } ;
typedef TYPE_2__ fz_matrix ;
typedef int fz_context ;
struct TYPE_6__ {int ctm; } ;
struct TYPE_8__ {TYPE_1__ pending; } ;
typedef TYPE_3__ filter_gstate ;


 int FUNC_0 (TYPE_2__,int ) ;
 TYPE_3__* FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 pdf_filter_processor *VAR_8 = (pdf_filter_processor*)VAR_1;
 filter_gstate *VAR_9 = FUNC_1(VAR_0, VAR_8);
 fz_matrix VAR_10;


 if (VAR_2 == 1 && VAR_3 == 0 && VAR_4 == 0 && VAR_5 == 1 && VAR_6 == 0 && VAR_7 == 0)
  return;

 VAR_10.a = VAR_2;
 VAR_10.b = VAR_3;
 VAR_10.c = VAR_4;
 VAR_10.d = VAR_5;
 VAR_10.e = VAR_6;
 VAR_10.f = VAR_7;

 VAR_9->pending.ctm = FUNC_0(VAR_10, VAR_9->pending.ctm);
}
