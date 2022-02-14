
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ linenr_T ;
struct TYPE_8__ {scalar_t__ bh_data; } ;
typedef TYPE_2__ bhdr_T ;
struct TYPE_7__ {scalar_t__ ml_line_count; scalar_t__ ml_locked_low; scalar_t__ ml_locked_high; int ml_flags; int * ml_mfp; } ;
struct TYPE_10__ {TYPE_1__ b_ml; } ;
struct TYPE_9__ {int* db_index; } ;
typedef TYPE_3__ DATA_BL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (TYPE_5__*,scalar_t__,int ) ;

void
FUNC_1()
{
    bhdr_T *VAR_6;
    DATA_BL *VAR_7;
    linenr_T VAR_8;
    int VAR_9;

    if (VAR_4->b_ml.ml_mfp == ((void*)0))
 return;




    for (VAR_8 = VAR_5; VAR_8 <= VAR_4->b_ml.ml_line_count; )
    {





 if ((VAR_6 = FUNC_0(VAR_4, VAR_8, VAR_2)) == ((void*)0))
     return;

 VAR_7 = (DATA_BL *)(VAR_6->bh_data);

 for (VAR_9 = VAR_8 - VAR_4->b_ml.ml_locked_low;
       VAR_8 <= VAR_4->b_ml.ml_locked_high; ++VAR_9, ++VAR_8)
     if ((VAR_7->db_index[VAR_9]) & VAR_1)
     {
  (VAR_7->db_index[VAR_9]) &= VAR_0;
  VAR_4->b_ml.ml_flags |= VAR_3;
     }
    }

    VAR_5 = 0;
    return;
}
