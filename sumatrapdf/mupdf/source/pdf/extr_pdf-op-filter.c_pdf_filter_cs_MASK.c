
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
typedef int fz_colorspace ;
struct TYPE_5__ {int * cs; int name; } ;
struct TYPE_6__ {TYPE_1__ cs; } ;
struct TYPE_7__ {TYPE_2__ pending; } ;
typedef TYPE_3__ filter_gstate ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,char const*) ;
 int FUNC_2 (int ,char const*,int) ;
 TYPE_3__* FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, pdf_processor *VAR_2, const char *VAR_3, fz_colorspace *VAR_4)
{
 pdf_filter_processor *VAR_5 = (pdf_filter_processor*)VAR_2;
 filter_gstate *VAR_6 = FUNC_3(VAR_1, VAR_5);
 FUNC_2(VAR_6->pending.cs.name, VAR_3, sizeof VAR_6->pending.cs.name);
 VAR_6->pending.cs.cs = VAR_4;
 FUNC_1(VAR_1, VAR_5, FUNC_0(VAR_0), VAR_3);
}
