
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int cmyk; int * oi; int rgb; int gray; } ;
typedef TYPE_1__ fz_default_colorspaces ;
typedef int fz_context ;
struct TYPE_13__ {int type; int name; } ;
typedef TYPE_2__ fz_colorspace ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (int *,char*,int ) ;

void FUNC_9(fz_context *VAR_0, fz_default_colorspaces *VAR_1, fz_colorspace *VAR_2)
{
 FUNC_3(VAR_0, VAR_1->oi);
 VAR_1->oi = ((void*)0);


 switch (VAR_2->type)
 {
 default:
  FUNC_8(VAR_0, "Ignoring incompatible output intent: %s.", VAR_2->name);
  break;
 case 129:
  VAR_1->oi = FUNC_4(VAR_0, VAR_2);
  if (VAR_1->gray == FUNC_1(VAR_0))
   FUNC_6(VAR_0, VAR_1, VAR_2);
  break;
 case 128:
  VAR_1->oi = FUNC_4(VAR_0, VAR_2);
  if (VAR_1->rgb == FUNC_2(VAR_0))
   FUNC_7(VAR_0, VAR_1, VAR_2);
  break;
 case 130:
  VAR_1->oi = FUNC_4(VAR_0, VAR_2);
  if (VAR_1->cmyk == FUNC_0(VAR_0))
   FUNC_5(VAR_0, VAR_1, VAR_2);
  break;
 }
}
