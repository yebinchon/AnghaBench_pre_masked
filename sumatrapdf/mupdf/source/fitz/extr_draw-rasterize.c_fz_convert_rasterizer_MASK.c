
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* convert ) (int *,TYPE_2__*,int,int *,int *,unsigned char*,int *) ;} ;
struct TYPE_8__ {TYPE_1__ fns; } ;
typedef TYPE_2__ fz_rasterizer ;
typedef int fz_pixmap ;
typedef int fz_overprint ;
typedef int fz_irect ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*,int,int *,int *,unsigned char*,int *) ;

void FUNC_6(fz_context *VAR_0, fz_rasterizer *VAR_1, int VAR_2, fz_pixmap *VAR_3, unsigned char *VAR_4, fz_overprint *VAR_5)
{
 fz_irect VAR_6 = FUNC_0(VAR_0, VAR_1);
 VAR_6 = FUNC_2(VAR_6, FUNC_4(VAR_3));
 VAR_6 = FUNC_2(VAR_6, FUNC_1(VAR_0, VAR_1));
 if (!FUNC_3(VAR_6))
  VAR_1->fns.convert(VAR_0, VAR_1, VAR_2, &VAR_6, VAR_3, VAR_4, VAR_5);
}
