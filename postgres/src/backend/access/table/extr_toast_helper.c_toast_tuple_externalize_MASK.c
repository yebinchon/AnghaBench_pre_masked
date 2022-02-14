
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ttc_flags; int ttc_rel; TYPE_2__* ttc_attr; int * ttc_values; } ;
typedef TYPE_1__ ToastTupleContext ;
struct TYPE_5__ {int tai_colflags; int tai_oldexternal; } ;
typedef TYPE_2__ ToastAttrInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;

void
FUNC_3(ToastTupleContext *VAR_4, int VAR_5, int VAR_6)
{
 Datum *VAR_7 = &VAR_4->ttc_values[VAR_5];
 Datum VAR_8 = *VAR_7;
 ToastAttrInfo *VAR_9 = &VAR_4->ttc_attr[VAR_5];

 VAR_9->tai_colflags |= VAR_0;
 *VAR_7 = FUNC_2(VAR_4->ttc_rel, VAR_8, VAR_9->tai_oldexternal,
         VAR_6);
 if ((VAR_9->tai_colflags & VAR_1) != 0)
  FUNC_1(FUNC_0(VAR_8));
 VAR_9->tai_colflags |= VAR_1;
 VAR_4->ttc_flags |= (VAR_2 | VAR_3);
}
