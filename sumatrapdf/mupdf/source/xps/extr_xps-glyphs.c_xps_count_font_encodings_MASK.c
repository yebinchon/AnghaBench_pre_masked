
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_font ;
typedef int fz_context ;
struct TYPE_3__ {int num_charmaps; } ;
typedef TYPE_1__* FT_Face ;


 TYPE_1__* FUNC_0 (int *,int *) ;

int
FUNC_1(fz_context *VAR_0, fz_font *VAR_1)
{
 FT_Face VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2->num_charmaps;
}
