
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* tuning; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_6__ {int refs; int image_scale; int image_decode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_3)
{
 if (VAR_3)
 {
  VAR_3->tuning = FUNC_0(VAR_3, VAR_2);
  VAR_3->tuning->refs = 1;
  VAR_3->tuning->image_decode = VAR_0;
  VAR_3->tuning->image_scale = VAR_1;
 }
}
