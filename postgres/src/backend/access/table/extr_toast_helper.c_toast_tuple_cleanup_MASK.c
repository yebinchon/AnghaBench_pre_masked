
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int ttc_flags; int * ttc_oldvalues; TYPE_5__* ttc_rel; TYPE_3__* ttc_attr; int * ttc_values; } ;
typedef TYPE_2__ ToastTupleContext ;
struct TYPE_8__ {int tai_colflags; } ;
typedef TYPE_3__ ToastAttrInfo ;
struct TYPE_9__ {TYPE_1__* rd_att; } ;
struct TYPE_6__ {int natts; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;

void
FUNC_3(ToastTupleContext *VAR_4)
{
 TupleDesc VAR_5 = VAR_4->ttc_rel->rd_att;
 int VAR_6 = VAR_5->natts;




 if ((VAR_4->ttc_flags & VAR_3) != 0)
 {
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  {
   ToastAttrInfo *VAR_8 = &VAR_4->ttc_attr[VAR_7];

   if ((VAR_8->tai_colflags & VAR_1) != 0)
    FUNC_1(FUNC_0(VAR_4->ttc_values[VAR_7]));
  }
 }




 if ((VAR_4->ttc_flags & VAR_2) != 0)
 {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  {
   ToastAttrInfo *VAR_10 = &VAR_4->ttc_attr[VAR_9];

   if ((VAR_10->tai_colflags & VAR_0) != 0)
    FUNC_2(VAR_4->ttc_rel, VAR_4->ttc_oldvalues[VAR_9], 0);
  }
 }
}
