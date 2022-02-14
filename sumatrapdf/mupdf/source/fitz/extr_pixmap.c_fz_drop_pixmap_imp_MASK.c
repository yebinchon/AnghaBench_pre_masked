
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_storable ;
struct TYPE_3__ {int flags; int underlying; struct TYPE_3__* samples; int seps; int colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void
FUNC_4(fz_context *VAR_1, fz_storable *VAR_2)
{
 fz_pixmap *VAR_3 = (fz_pixmap *)VAR_2;

 FUNC_0(VAR_1, VAR_3->colorspace);
 FUNC_2(VAR_1, VAR_3->seps);
 if (VAR_3->flags & VAR_0)
  FUNC_3(VAR_1, VAR_3->samples);
 FUNC_1(VAR_1, VAR_3->underlying);
 FUNC_3(VAR_1, VAR_3);
}
