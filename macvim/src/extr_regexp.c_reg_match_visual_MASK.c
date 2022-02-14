
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ lnum; scalar_t__ col; } ;
struct TYPE_15__ {TYPE_3__ w_cursor; } ;
typedef TYPE_2__ win_T ;
typedef TYPE_3__ pos_T ;
typedef scalar_t__ linenr_T ;
typedef scalar_t__ colnr_T ;
struct TYPE_14__ {int vi_mode; TYPE_3__ vi_start; TYPE_3__ vi_end; } ;
struct TYPE_17__ {TYPE_1__ b_visual; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_3__,TYPE_3__) ;
 char* VAR_9 ;
 TYPE_6__* VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_3()
{
    pos_T VAR_16, VAR_17;
    linenr_T VAR_18;
    colnr_T VAR_19;
    win_T *VAR_20 = VAR_12 == ((void*)0) ? VAR_8 : VAR_12;
    int VAR_21;
    colnr_T VAR_22, VAR_23;
    colnr_T VAR_24, VAR_25;
    colnr_T VAR_26;


    if (VAR_10 != VAR_7 || VAR_4.lnum == 0)
 return VAR_1;

    if (VAR_5)
    {
 if (FUNC_1(VAR_4, VAR_20->w_cursor))
 {
     VAR_16 = VAR_4;
     VAR_17 = VAR_20->w_cursor;
 }
 else
 {
     VAR_16 = VAR_20->w_cursor;
     VAR_17 = VAR_4;
 }
 VAR_21 = VAR_6;
    }
    else
    {
 if (FUNC_1(VAR_7->b_visual.vi_start, VAR_7->b_visual.vi_end))
 {
     VAR_16 = VAR_7->b_visual.vi_start;
     VAR_17 = VAR_7->b_visual.vi_end;
 }
 else
 {
     VAR_16 = VAR_7->b_visual.vi_end;
     VAR_17 = VAR_7->b_visual.vi_start;
 }
 VAR_21 = VAR_7->b_visual.vi_mode;
    }
    VAR_18 = VAR_15 + VAR_11;
    if (VAR_18 < VAR_16.lnum || VAR_18 > VAR_17.lnum)
 return VAR_1;

    if (VAR_21 == 'v')
    {
 VAR_19 = (colnr_T)(VAR_13 - VAR_14);
 if ((VAR_18 == VAR_16.lnum && VAR_19 < VAR_16.col)
  || (VAR_18 == VAR_17.lnum && VAR_19 >= VAR_17.col + (*VAR_9 != 'e')))
     return VAR_1;
    }
    else if (VAR_21 == VAR_0)
    {
 FUNC_0(VAR_20, &VAR_16, &VAR_22, ((void*)0), &VAR_23);
 FUNC_0(VAR_20, &VAR_17, &VAR_24, ((void*)0), &VAR_25);
 if (VAR_24 < VAR_22)
     VAR_22 = VAR_24;
 if (VAR_25 > VAR_23)
     VAR_23 = VAR_25;
 if (VAR_16.col == VAR_2 || VAR_17.col == VAR_2)
     VAR_23 = VAR_2;
 VAR_26 = FUNC_2(VAR_20, VAR_14, (colnr_T)(VAR_13 - VAR_14));
 if (VAR_26 < VAR_22 || VAR_26 > VAR_23 - (*VAR_9 == 'e'))
     return VAR_1;
    }
    return VAR_3;
}
