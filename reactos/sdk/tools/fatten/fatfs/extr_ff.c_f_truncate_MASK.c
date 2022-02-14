
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int n_fatent; int drv; } ;
struct TYPE_8__ {int flag; scalar_t__ fsize; scalar_t__ fptr; int sclust; TYPE_3__* fs; scalar_t__ err; int dsect; int buf; int clust; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

FRESULT FUNC_6 (
 FIL* VAR_8
)
{
 FRESULT VAR_9;
 DWORD VAR_10;


 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9 == VAR_6) {
  if (VAR_8->err) {
   VAR_9 = (FRESULT)VAR_8->err;
  } else {
   if (!(VAR_8->flag & VAR_0))
    VAR_9 = VAR_3;
  }
 }
 if (VAR_9 == VAR_6) {
  if (VAR_8->fsize > VAR_8->fptr) {
   VAR_8->fsize = VAR_8->fptr;
   VAR_8->flag |= VAR_2;
   if (VAR_8->fptr == 0) {
    VAR_9 = FUNC_4(VAR_8->fs, VAR_8->sclust);
    VAR_8->sclust = 0;
   } else {
    VAR_10 = FUNC_2(VAR_8->fs, VAR_8->clust);
    VAR_9 = VAR_6;
    if (VAR_10 == 0xFFFFFFFF) VAR_9 = VAR_4;
    if (VAR_10 == 1) VAR_9 = VAR_5;
    if (VAR_9 == VAR_6 && VAR_10 < VAR_8->fs->n_fatent) {
     VAR_9 = FUNC_3(VAR_8->fs, VAR_8->clust, 0x0FFFFFFF);
     if (VAR_9 == VAR_6) VAR_9 = FUNC_4(VAR_8->fs, VAR_10);
    }
   }

   if (VAR_9 == VAR_6 && (VAR_8->flag & VAR_1)) {
    if (FUNC_1(VAR_8->fs->drv, VAR_8->buf, VAR_8->dsect, 1) != VAR_7)
     VAR_9 = VAR_4;
    else
     VAR_8->flag &= ~VAR_1;
   }

  }
  if (VAR_9 != VAR_6) VAR_8->err = (FRESULT)VAR_9;
 }

 FUNC_0(VAR_8->fs, VAR_9);
}
