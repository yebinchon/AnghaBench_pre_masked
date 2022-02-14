
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fz_stext_page ;
struct TYPE_6__ {int image; int transform; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_8__ {int bbox; TYPE_2__ u; int type; } ;
typedef TYPE_3__ fz_stext_block ;
typedef int fz_matrix ;
typedef int fz_image ;
typedef int fz_context ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static fz_stext_block *
FUNC_3(fz_context *VAR_2, fz_stext_page *VAR_3, fz_matrix VAR_4, fz_image *VAR_5)
{
 fz_stext_block *VAR_6 = FUNC_0(VAR_2, VAR_3);
 VAR_6->type = VAR_0;
 VAR_6->u.i.transform = VAR_4;
 VAR_6->u.i.image = FUNC_1(VAR_2, VAR_5);
 VAR_6->bbox = FUNC_2(VAR_1, VAR_4);
 return VAR_6;
}
