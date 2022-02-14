
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ttc_flags; TYPE_2__* ttc_attr; int * ttc_values; } ;
typedef TYPE_1__ ToastTupleContext ;
struct TYPE_5__ {int tai_colflags; int tai_size; } ;
typedef TYPE_2__ ToastAttrInfo ;
typedef int Datum ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4(ToastTupleContext *VAR_4, int VAR_5)
{
 Datum *VAR_6 = &VAR_4->ttc_values[VAR_5];
 Datum VAR_7 = FUNC_3(*VAR_6);
 ToastAttrInfo *VAR_8 = &VAR_4->ttc_attr[VAR_5];

 if (FUNC_0(VAR_7) != ((void*)0))
 {

  if ((VAR_8->tai_colflags & VAR_1) != 0)
   FUNC_2(FUNC_0(*VAR_6));
  *VAR_6 = VAR_7;
  VAR_8->tai_colflags |= VAR_1;
  VAR_8->tai_size = FUNC_1(FUNC_0(*VAR_6));
  VAR_4->ttc_flags |= (VAR_2 | VAR_3);
 }
 else
 {

  VAR_8->tai_colflags |= VAR_0;
 }
}
