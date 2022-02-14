
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct varlena {int dummy; } ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_12__ {int ttc_flags; TYPE_2__* ttc_attr; int * ttc_values; scalar_t__* ttc_isnull; int * ttc_oldisnull; int * ttc_oldvalues; TYPE_1__* ttc_rel; } ;
typedef TYPE_4__ ToastTupleContext ;
struct TYPE_13__ {int attlen; char attstorage; } ;
struct TYPE_11__ {int natts; } ;
struct TYPE_10__ {int tai_colflags; int tai_size; struct varlena* tai_oldexternal; } ;
struct TYPE_9__ {TYPE_3__* rd_att; } ;
typedef TYPE_5__* Form_pg_attribute ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct varlena*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (struct varlena*) ;
 scalar_t__ FUNC_4 (struct varlena*) ;
 int FUNC_5 (struct varlena*) ;
 int FUNC_6 (struct varlena*) ;
 struct varlena* FUNC_7 (struct varlena*) ;
 struct varlena* FUNC_8 (struct varlena*) ;
 scalar_t__ FUNC_9 (char*,char*,int ) ;

void
FUNC_10(ToastTupleContext *VAR_7)
{
 TupleDesc VAR_8 = VAR_7->ttc_rel->rd_att;
 int VAR_9 = VAR_8->natts;
 int VAR_10;

 VAR_7->ttc_flags = 0;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  Form_pg_attribute VAR_11 = FUNC_2(VAR_8, VAR_10);
  struct varlena *VAR_12;
  struct varlena *VAR_13;

  VAR_7->ttc_attr[VAR_10].tai_colflags = 0;
  VAR_7->ttc_attr[VAR_10].tai_oldexternal = ((void*)0);

  if (VAR_7->ttc_oldvalues != ((void*)0))
  {



   VAR_12 =
    (struct varlena *) FUNC_0(VAR_7->ttc_oldvalues[VAR_10]);
   VAR_13 =
    (struct varlena *) FUNC_0(VAR_7->ttc_values[VAR_10]);





   if (VAR_11->attlen == -1 && !VAR_7->ttc_oldisnull[VAR_10] &&
    FUNC_4(VAR_12))
   {
    if (VAR_7->ttc_isnull[VAR_10] ||
     !FUNC_4(VAR_13) ||
     FUNC_9((char *) VAR_12, (char *) VAR_13,
         FUNC_6(VAR_12)) != 0)
    {




     VAR_7->ttc_attr[VAR_10].tai_colflags |= VAR_1;
     VAR_7->ttc_flags |= VAR_5;
    }
    else
    {





     VAR_7->ttc_attr[VAR_10].tai_colflags |= VAR_0;
     continue;
    }
   }
  }
  else
  {



   VAR_13 = (struct varlena *) FUNC_0(VAR_7->ttc_values[VAR_10]);
  }




  if (VAR_7->ttc_isnull[VAR_10])
  {
   VAR_7->ttc_attr[VAR_10].tai_colflags |= VAR_0;
   VAR_7->ttc_flags |= VAR_3;
   continue;
  }




  if (VAR_11->attlen == -1)
  {



   if (VAR_11->attstorage == 'p')
    VAR_7->ttc_attr[VAR_10].tai_colflags |= VAR_0;
   if (FUNC_3(VAR_13))
   {
    VAR_7->ttc_attr[VAR_10].tai_oldexternal = VAR_13;
    if (VAR_11->attstorage == 'p')
     VAR_13 = FUNC_7(VAR_13);
    else
     VAR_13 = FUNC_8(VAR_13);
    VAR_7->ttc_values[VAR_10] = FUNC_1(VAR_13);
    VAR_7->ttc_attr[VAR_10].tai_colflags |= VAR_2;
    VAR_7->ttc_flags |= (VAR_4 | VAR_6);
   }




   VAR_7->ttc_attr[VAR_10].tai_size = FUNC_5(VAR_13);
  }
  else
  {



   VAR_7->ttc_attr[VAR_10].tai_colflags |= VAR_0;
  }
 }
}
