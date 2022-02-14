
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_5__ {TYPE_2__* chain; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_shade ;
typedef int fz_context ;
struct TYPE_6__ {int (* op_sh ) (int *,TYPE_2__*,char const*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ,char const*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,char const*,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_2, pdf_processor *VAR_3, const char *VAR_4, fz_shade *VAR_5)
{
 pdf_filter_processor *VAR_6 = (pdf_filter_processor*)VAR_3;
 FUNC_2(VAR_2, VAR_6, VAR_0);
 if (VAR_6->chain->op_sh)
  VAR_6->chain->op_sh(VAR_2, VAR_6->chain, VAR_4, VAR_5);
 FUNC_1(VAR_2, VAR_6, FUNC_0(VAR_1), VAR_4);
}
