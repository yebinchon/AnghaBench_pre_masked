
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int image; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_8__ {int x1; int x0; int y1; int y0; } ;
struct TYPE_9__ {TYPE_2__ u; TYPE_3__ bbox; } ;
typedef TYPE_4__ fz_stext_block ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,char*,int,int) ;
 int FUNC_2 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_output *VAR_1, fz_stext_block *VAR_2)
{
 int VAR_3 = VAR_2->bbox.x1 - VAR_2->bbox.x0;
 int VAR_4 = VAR_2->bbox.y1 - VAR_2->bbox.y0;

 FUNC_1(VAR_0, VAR_1, "<p><img width=\"%d\" height=\"%d\" src=\"", VAR_3, VAR_4);
 FUNC_0(VAR_0, VAR_1, VAR_2->u.i.image);
 FUNC_2(VAR_0, VAR_1, "\"/></p>\n");
}
