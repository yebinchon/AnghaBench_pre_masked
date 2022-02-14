
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_processor ;
typedef int pdf_pattern ;
typedef int pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_5__ {int n; float* c; int * shd; int * pat; int name; } ;
struct TYPE_6__ {TYPE_1__ sc; } ;
struct TYPE_7__ {TYPE_2__ pending; } ;
typedef TYPE_3__ filter_gstate ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,char const*) ;
 int FUNC_2 (int ,char const*,int) ;
 TYPE_3__* FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, pdf_processor *VAR_2, const char *VAR_3, pdf_pattern *VAR_4, int VAR_5, float *VAR_6)
{
 pdf_filter_processor *VAR_7 = (pdf_filter_processor*)VAR_2;
 filter_gstate *VAR_8 = FUNC_3(VAR_1, VAR_7);
 int VAR_9;
 FUNC_2(VAR_8->pending.sc.name, VAR_3, sizeof VAR_8->pending.sc.name);
 VAR_8->pending.sc.pat = VAR_4;
 VAR_8->pending.sc.shd = ((void*)0);
 VAR_8->pending.sc.n = VAR_5;
 for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9)
  VAR_8->pending.sc.c[VAR_9] = VAR_6[VAR_9];
 FUNC_1(VAR_1, VAR_7, FUNC_0(VAR_0), VAR_3);
}
