
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ mf_fd; TYPE_4__* mf_used_last; } ;
typedef TYPE_2__ memfile_T ;
struct TYPE_14__ {TYPE_2__* ml_mfp; } ;
struct TYPE_16__ {scalar_t__ b_may_swap; TYPE_1__ b_ml; struct TYPE_16__* b_next; } ;
typedef TYPE_3__ buf_T ;
struct TYPE_17__ {int bh_flags; struct TYPE_17__* bh_prev; } ;
typedef TYPE_4__ bhdr_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;

int
FUNC_5()
{
    buf_T *VAR_6;
    memfile_T *VAR_7;
    bhdr_T *VAR_8;
    int VAR_9 = VAR_3;

    for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->b_next)
    {
 VAR_7 = VAR_6->b_ml.ml_mfp;
 if (VAR_7 != ((void*)0))
 {

     if (VAR_7->mf_fd < 0 && VAR_6->b_may_swap)
  FUNC_4(VAR_6);


     if (VAR_7->mf_fd >= 0)
     {
  for (VAR_8 = VAR_7->mf_used_last; VAR_8 != ((void*)0); )
  {
      if (!(VAR_8->bh_flags & VAR_1)
       && (!(VAR_8->bh_flags & VAR_0)
    || FUNC_3(VAR_7, VAR_8) != VAR_2))
      {
   FUNC_2(VAR_7, VAR_8);
   FUNC_1(VAR_7, VAR_8);
   FUNC_0(VAR_8);
   VAR_8 = VAR_7->mf_used_last;
   VAR_9 = VAR_4;
      }
      else
   VAR_8 = VAR_8->bh_prev;
  }
     }
 }
    }
    return VAR_9;
}
