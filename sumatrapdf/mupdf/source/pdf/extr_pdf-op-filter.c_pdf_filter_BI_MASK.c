
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_4__ {TYPE_2__* chain; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_image ;
typedef int fz_context ;
struct TYPE_5__ {int (* op_BI ) (int *,TYPE_2__*,int *,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int *,char const*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, pdf_processor *VAR_2, fz_image *VAR_3, const char *VAR_4)
{
 pdf_filter_processor *VAR_5 = (pdf_filter_processor*)VAR_2;
 FUNC_0(VAR_1, VAR_5, VAR_0);
 if (VAR_5->chain->op_BI)
  VAR_5->chain->op_BI(VAR_1, VAR_5->chain, VAR_3, VAR_4);
}
