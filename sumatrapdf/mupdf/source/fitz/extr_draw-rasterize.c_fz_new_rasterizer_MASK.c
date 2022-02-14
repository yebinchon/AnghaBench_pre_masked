
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int bits; } ;
struct TYPE_11__ {TYPE_3__ aa; } ;
typedef TYPE_1__ fz_rasterizer ;
struct TYPE_12__ {TYPE_3__ aa; } ;
typedef TYPE_2__ fz_context ;
typedef TYPE_3__ fz_aa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

fz_rasterizer *FUNC_2(fz_context *VAR_3, const fz_aa_context *VAR_4)
{
 fz_rasterizer *VAR_5;
 int VAR_6;




 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_3->aa;
 VAR_6 = VAR_4->bits;

 if (VAR_6 == 10)
  VAR_5 = FUNC_0(VAR_3, VAR_1);
 else if (VAR_6 == 9)
  VAR_5 = FUNC_0(VAR_3, VAR_2);
 else
  VAR_5 = FUNC_1(VAR_3);

 VAR_5->aa = *VAR_4;


 return VAR_5;
}
