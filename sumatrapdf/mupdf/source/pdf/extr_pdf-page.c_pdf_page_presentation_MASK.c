
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * obj; } ;
typedef TYPE_1__ pdf_page ;
typedef int pdf_obj ;
struct TYPE_7__ {int duration; int vertical; int outwards; int type; int direction; } ;
typedef TYPE_2__ fz_transition ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int * FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 float FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *) ;

fz_transition *
FUNC_6(fz_context *VAR_32, pdf_page *VAR_33, fz_transition *VAR_34, float *VAR_35)
{
 pdf_obj *VAR_36, *VAR_37;

 *VAR_35 = FUNC_3(VAR_32, VAR_33->obj, FUNC_0(VAR_7));

 VAR_37 = FUNC_1(VAR_32, VAR_33->obj, FUNC_0(VAR_29));
 if (!VAR_37)
  return ((void*)0);

 VAR_36 = FUNC_1(VAR_32, VAR_37, FUNC_0(VAR_3));

 VAR_34->duration = (VAR_36 ? FUNC_5(VAR_32, VAR_36) : 1);

 VAR_34->vertical = !FUNC_4(VAR_32, FUNC_1(VAR_32, VAR_37, FUNC_0(VAR_6)), FUNC_0(VAR_23));
 VAR_34->outwards = !FUNC_4(VAR_32, FUNC_1(VAR_32, VAR_37, FUNC_0(VAR_25)), FUNC_0(VAR_24));


 VAR_34->direction = (FUNC_2(VAR_32, VAR_37, FUNC_0(VAR_4)));



 VAR_36 = FUNC_1(VAR_32, VAR_37, FUNC_0(VAR_27));
 if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_28)))
  VAR_34->type = VAR_17;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_0)))
  VAR_34->type = VAR_8;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_1)))
  VAR_34->type = VAR_9;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_31)))
  VAR_34->type = VAR_19;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_5)))
  VAR_34->type = VAR_11;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_22)))
  VAR_34->type = VAR_14;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_21)))
  VAR_34->type = VAR_13;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_26)))
  VAR_34->type = VAR_16;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_2)))
  VAR_34->type = VAR_10;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_30)))
  VAR_34->type = VAR_18;
 else if (FUNC_4(VAR_32, VAR_36, FUNC_0(VAR_20)))
  VAR_34->type = VAR_12;
 else
  VAR_34->type = VAR_15;

 return VAR_34;
}
