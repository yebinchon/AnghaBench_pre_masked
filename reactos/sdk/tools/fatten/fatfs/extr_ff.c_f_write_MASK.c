
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int csize; scalar_t__ winsect; int const* win; int wflag; int drv; } ;
struct TYPE_12__ {int flag; int fptr; int sclust; int clust; scalar_t__ dsect; int const* buf; int fsize; TYPE_3__* fs; scalar_t__ cltbl; scalar_t__ err; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 size_t FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,int const*,int,int) ;
 scalar_t__ FUNC_7 (int ,int const*,int,int) ;
 int FUNC_8 (int const*,int const*,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

FRESULT FUNC_12 (
 FIL* VAR_8,
 const void *VAR_9,
 UINT VAR_10,
 UINT* VAR_11
)
{
 FRESULT VAR_12;
 DWORD VAR_13, VAR_14;
 UINT VAR_15, VAR_16;
 const BYTE *VAR_17 = (const BYTE*)VAR_9;
 BYTE VAR_18;


 *VAR_11 = 0;

 VAR_12 = FUNC_11(VAR_8);
 if (VAR_12 != VAR_6) FUNC_1(VAR_8->fs, VAR_12);
 if (VAR_8->err)
  FUNC_1(VAR_8->fs, (FRESULT)VAR_8->err);
 if (!(VAR_8->flag & VAR_0))
  FUNC_1(VAR_8->fs, VAR_3);
 if (VAR_8->fptr + VAR_10 < VAR_8->fptr) VAR_10 = 0;

 for ( ; VAR_10;
  VAR_17 += VAR_15, VAR_8->fptr += VAR_15, *VAR_11 += VAR_15, VAR_10 -= VAR_15) {
  if ((VAR_8->fptr % FUNC_2(VAR_8->fs)) == 0) {
   VAR_18 = (BYTE)(VAR_8->fptr / FUNC_2(VAR_8->fs) & (VAR_8->fs->csize - 1));
   if (!VAR_18) {
    if (VAR_8->fptr == 0) {
     VAR_13 = VAR_8->sclust;
     if (VAR_13 == 0)
      VAR_13 = FUNC_5(VAR_8->fs, 0);
    } else {





      VAR_13 = FUNC_5(VAR_8->fs, VAR_8->clust);
    }
    if (VAR_13 == 0) break;
    if (VAR_13 == 1) FUNC_0(VAR_8->fs, VAR_5);
    if (VAR_13 == 0xFFFFFFFF) FUNC_0(VAR_8->fs, VAR_4);
    VAR_8->clust = VAR_13;
    if (VAR_8->sclust == 0) VAR_8->sclust = VAR_13;
   }




   if (VAR_8->flag & VAR_1) {
    if (FUNC_7(VAR_8->fs->drv, VAR_8->buf, VAR_8->dsect, 1) != VAR_7)
     FUNC_0(VAR_8->fs, VAR_4);
    VAR_8->flag &= ~VAR_1;
   }

   VAR_14 = FUNC_4(VAR_8->fs, VAR_8->clust);
   if (!VAR_14) FUNC_0(VAR_8->fs, VAR_5);
   VAR_14 += VAR_18;
   VAR_16 = VAR_10 / FUNC_2(VAR_8->fs);
   if (VAR_16) {
    if (VAR_18 + VAR_16 > VAR_8->fs->csize)
     VAR_16 = VAR_8->fs->csize - VAR_18;
    if (FUNC_7(VAR_8->fs->drv, VAR_17, VAR_14, VAR_16) != VAR_7)
     FUNC_0(VAR_8->fs, VAR_4);







    if (VAR_8->dsect - VAR_14 < VAR_16) {
     FUNC_8(VAR_8->buf, VAR_17 + ((VAR_8->dsect - VAR_14) * FUNC_2(VAR_8->fs)), FUNC_2(VAR_8->fs));
     VAR_8->flag &= ~VAR_1;
    }


    VAR_15 = FUNC_2(VAR_8->fs) * VAR_16;
    continue;
   }






   if (VAR_8->dsect != VAR_14) {
    if (VAR_8->fptr < VAR_8->fsize &&
     FUNC_6(VAR_8->fs->drv, VAR_8->buf, VAR_14, 1) != VAR_7)
      FUNC_0(VAR_8->fs, VAR_4);
   }

   VAR_8->dsect = VAR_14;
  }
  VAR_15 = FUNC_2(VAR_8->fs) - ((UINT)VAR_8->fptr % FUNC_2(VAR_8->fs));
  if (VAR_15 > VAR_10) VAR_15 = VAR_10;






  FUNC_8(&VAR_8->buf[VAR_8->fptr % FUNC_2(VAR_8->fs)], VAR_17, VAR_15);
  VAR_8->flag |= VAR_1;

 }

 if (VAR_8->fptr > VAR_8->fsize) VAR_8->fsize = VAR_8->fptr;
 VAR_8->flag |= VAR_2;

 FUNC_1(VAR_8->fs, VAR_6);
}
