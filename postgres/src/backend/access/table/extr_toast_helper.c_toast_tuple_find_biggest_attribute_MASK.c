
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_12__ {TYPE_2__* ttc_attr; int * ttc_values; TYPE_1__* ttc_rel; } ;
typedef TYPE_4__ ToastTupleContext ;
struct TYPE_13__ {char attstorage; } ;
struct TYPE_11__ {int natts; } ;
struct TYPE_10__ {scalar_t__ tai_colflags; scalar_t__ tai_size; } ;
struct TYPE_9__ {TYPE_3__* rd_att; } ;
typedef TYPE_5__* Form_pg_attribute ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(ToastTupleContext *VAR_3,
           bool VAR_4, bool VAR_5)
{
 TupleDesc VAR_6 = VAR_3->ttc_rel->rd_att;
 int VAR_7 = VAR_6->natts;
 int VAR_8 = -1;
 int32 VAR_9 = FUNC_1(VAR_2);
 int32 VAR_10 = VAR_0;
 int VAR_11;

 if (VAR_4)
  VAR_10 |= VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
 {
  Form_pg_attribute VAR_12 = FUNC_2(VAR_6, VAR_11);

  if ((VAR_3->ttc_attr[VAR_11].tai_colflags & VAR_10) != 0)
   continue;
  if (FUNC_4(FUNC_0(VAR_3->ttc_values[VAR_11])))
   continue;
  if (VAR_4 &&
   FUNC_3(FUNC_0(VAR_3->ttc_values[VAR_11])))
   continue;
  if (VAR_5 && VAR_12->attstorage != 'm')
   continue;
  if (!VAR_5 && VAR_12->attstorage != 'x' && VAR_12->attstorage != 'e')
   continue;

  if (VAR_3->ttc_attr[VAR_11].tai_size > VAR_9)
  {
   VAR_8 = VAR_11;
   VAR_9 = VAR_3->ttc_attr[VAR_11].tai_size;
  }
 }

 return VAR_8;
}
