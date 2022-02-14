
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_processor ;
typedef int pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_5__ {int n; float* c; int * shd; int * pat; scalar_t__* name; } ;
struct TYPE_6__ {TYPE_1__ sc; } ;
struct TYPE_7__ {TYPE_2__ pending; } ;
typedef TYPE_3__ filter_gstate ;


 TYPE_3__* FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, int VAR_2, float *VAR_3)
{
 pdf_filter_processor *VAR_4 = (pdf_filter_processor*)VAR_1;
 filter_gstate *VAR_5 = FUNC_0(VAR_0, VAR_4);
 int VAR_6;
 VAR_5->pending.sc.name[0] = 0;
 VAR_5->pending.sc.pat = ((void*)0);
 VAR_5->pending.sc.shd = ((void*)0);
 VAR_5->pending.sc.n = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
  VAR_5->pending.sc.c[VAR_6] = VAR_3[VAR_6];
}
