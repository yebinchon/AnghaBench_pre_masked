
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int n_fatent; int csize; int drv; } ;
struct TYPE_11__ {int* cltbl; int sclust; int fsize; int fptr; int clust; int dsect; int flag; TYPE_3__* fs; int buf; scalar_t__ err; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef int DWORD ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,int ,int,int) ;
 scalar_t__ FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

FRESULT FUNC_10 (
 FIL* VAR_9,
 DWORD VAR_10
)
{
 FRESULT VAR_11;
 DWORD VAR_12, VAR_13, VAR_14, VAR_15;





 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11 != VAR_7) FUNC_1(VAR_9->fs, VAR_11);
 if (VAR_9->err)
  FUNC_1(VAR_9->fs, (FRESULT)VAR_9->err);
 {
  if (VAR_10 > VAR_9->fsize

    && !(VAR_9->flag & VAR_1)

   ) VAR_10 = VAR_9->fsize;

  VAR_15 = VAR_9->fptr;
  VAR_9->fptr = VAR_14 = 0;
  if (VAR_10) {
   VAR_13 = (DWORD)VAR_9->fs->csize * FUNC_2(VAR_9->fs);
   if (VAR_15 > 0 &&
    (VAR_10 - 1) / VAR_13 >= (VAR_15 - 1) / VAR_13) {
    VAR_9->fptr = (VAR_15 - 1) & ~(VAR_13 - 1);
    VAR_10 -= VAR_9->fptr;
    VAR_12 = VAR_9->clust;
   } else {
    VAR_12 = VAR_9->sclust;

    if (VAR_12 == 0) {
     VAR_12 = FUNC_5(VAR_9->fs, 0);
     if (VAR_12 == 1) FUNC_0(VAR_9->fs, VAR_5);
     if (VAR_12 == 0xFFFFFFFF) FUNC_0(VAR_9->fs, VAR_4);
     VAR_9->sclust = VAR_12;
    }

    VAR_9->clust = VAR_12;
   }
   if (VAR_12 != 0) {
    while (VAR_10 > VAR_13) {

     if (VAR_9->flag & VAR_1) {
      VAR_12 = FUNC_5(VAR_9->fs, VAR_12);
      if (VAR_12 == 0) {
       VAR_10 = VAR_13; break;
      }
     } else

      VAR_12 = FUNC_8(VAR_9->fs, VAR_12);
     if (VAR_12 == 0xFFFFFFFF) FUNC_0(VAR_9->fs, VAR_4);
     if (VAR_12 <= 1 || VAR_12 >= VAR_9->fs->n_fatent) FUNC_0(VAR_9->fs, VAR_5);
     VAR_9->clust = VAR_12;
     VAR_9->fptr += VAR_13;
     VAR_10 -= VAR_13;
    }
    VAR_9->fptr += VAR_10;
    if (VAR_10 % FUNC_2(VAR_9->fs)) {
     VAR_14 = FUNC_4(VAR_9->fs, VAR_12);
     if (!VAR_14) FUNC_0(VAR_9->fs, VAR_5);
     VAR_14 += VAR_10 / FUNC_2(VAR_9->fs);
    }
   }
  }
  if (VAR_9->fptr % FUNC_2(VAR_9->fs) && VAR_14 != VAR_9->dsect) {


   if (VAR_9->flag & VAR_2) {
    if (FUNC_7(VAR_9->fs->drv, VAR_9->buf, VAR_9->dsect, 1) != VAR_8)
     FUNC_0(VAR_9->fs, VAR_4);
    VAR_9->flag &= ~VAR_2;
   }

   if (FUNC_6(VAR_9->fs->drv, VAR_9->buf, VAR_14, 1) != VAR_8)
    FUNC_0(VAR_9->fs, VAR_4);

   VAR_9->dsect = VAR_14;
  }

  if (VAR_9->fptr > VAR_9->fsize) {
   VAR_9->fsize = VAR_9->fptr;
   VAR_9->flag |= VAR_3;
  }

 }

 FUNC_1(VAR_9->fs, VAR_11);
}
