
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_processor ;
typedef int pdf_filter_processor ;
typedef int fz_shade ;
typedef int fz_context ;
struct TYPE_5__ {scalar_t__ n; int * shd; int * pat; int name; } ;
struct TYPE_6__ {TYPE_1__ SC; } ;
struct TYPE_7__ {TYPE_2__ pending; } ;
typedef TYPE_3__ filter_gstate ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,char const*) ;
 int FUNC_2 (int ,char const*,int) ;
 TYPE_3__* FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, pdf_processor *VAR_2, const char *VAR_3, fz_shade *VAR_4)
{
 pdf_filter_processor *VAR_5 = (pdf_filter_processor*)VAR_2;
 filter_gstate *VAR_6 = FUNC_3(VAR_1, VAR_5);
 FUNC_2(VAR_6->pending.SC.name, VAR_3, sizeof VAR_6->pending.SC.name);
 VAR_6->pending.SC.pat = ((void*)0);
 VAR_6->pending.SC.shd = VAR_4;
 VAR_6->pending.SC.n = 0;
 FUNC_1(VAR_1, VAR_5, FUNC_0(VAR_0), VAR_3);
}
