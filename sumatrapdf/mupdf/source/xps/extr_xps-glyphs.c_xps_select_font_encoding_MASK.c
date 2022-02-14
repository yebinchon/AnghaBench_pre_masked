
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_font ;
typedef int fz_context ;
struct TYPE_4__ {int * charmaps; } ;
typedef TYPE_1__* FT_Face ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

void
FUNC_2(fz_context *VAR_0, fz_font *VAR_1, int VAR_2)
{
 FT_Face VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_3, VAR_3->charmaps[VAR_2]);
}
