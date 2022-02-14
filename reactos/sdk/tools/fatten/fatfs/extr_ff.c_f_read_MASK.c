
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {int csize; scalar_t__ winsect; scalar_t__* win; int drv; scalar_t__ wflag; } ;
struct TYPE_11__ {int flag; scalar_t__ fsize; scalar_t__ fptr; scalar_t__ sclust; scalar_t__ dsect; scalar_t__* buf; TYPE_3__* fs; scalar_t__ clust; scalar_t__ cltbl; scalar_t__ err; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 size_t FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

FRESULT FUNC_11 (
 FIL* VAR_7,
 void* VAR_8,
 UINT VAR_9,
 UINT* VAR_10
)
{
 FRESULT VAR_11;
 DWORD VAR_12, VAR_13, VAR_14;
 UINT VAR_15, VAR_16;
 BYTE VAR_17, *VAR_18 = (BYTE*)VAR_8;


 *VAR_10 = 0;

 VAR_11 = FUNC_10(VAR_7);
 if (VAR_11 != VAR_5) FUNC_1(VAR_7->fs, VAR_11);
 if (VAR_7->err)
  FUNC_1(VAR_7->fs, (FRESULT)VAR_7->err);
 if (!(VAR_7->flag & VAR_0))
  FUNC_1(VAR_7->fs, VAR_2);
 VAR_14 = VAR_7->fsize - VAR_7->fptr;
 if (VAR_9 > VAR_14) VAR_9 = (UINT)VAR_14;

 for ( ; VAR_9;
  VAR_18 += VAR_15, VAR_7->fptr += VAR_15, *VAR_10 += VAR_15, VAR_9 -= VAR_15) {
  if ((VAR_7->fptr % FUNC_2(VAR_7->fs)) == 0) {
   VAR_17 = (BYTE)(VAR_7->fptr / FUNC_2(VAR_7->fs) & (VAR_7->fs->csize - 1));
   if (!VAR_17) {
    if (VAR_7->fptr == 0) {
     VAR_12 = VAR_7->sclust;
    } else {





      VAR_12 = FUNC_7(VAR_7->fs, VAR_7->clust);
    }
    if (VAR_12 < 2) FUNC_0(VAR_7->fs, VAR_4);
    if (VAR_12 == 0xFFFFFFFF) FUNC_0(VAR_7->fs, VAR_3);
    VAR_7->clust = VAR_12;
   }
   VAR_13 = FUNC_4(VAR_7->fs, VAR_7->clust);
   if (!VAR_13) FUNC_0(VAR_7->fs, VAR_4);
   VAR_13 += VAR_17;
   VAR_16 = VAR_9 / FUNC_2(VAR_7->fs);
   if (VAR_16) {
    if (VAR_17 + VAR_16 > VAR_7->fs->csize)
     VAR_16 = VAR_7->fs->csize - VAR_17;
    if (FUNC_5(VAR_7->fs->drv, VAR_18, VAR_13, VAR_16) != VAR_6)
     FUNC_0(VAR_7->fs, VAR_3);





    if ((VAR_7->flag & VAR_1) && VAR_7->dsect - VAR_13 < VAR_16)
     FUNC_8(VAR_18 + ((VAR_7->dsect - VAR_13) * FUNC_2(VAR_7->fs)), VAR_7->buf, FUNC_2(VAR_7->fs));


    VAR_15 = FUNC_2(VAR_7->fs) * VAR_16;
    continue;
   }

   if (VAR_7->dsect != VAR_13) {

    if (VAR_7->flag & VAR_1) {
     if (FUNC_6(VAR_7->fs->drv, VAR_7->buf, VAR_7->dsect, 1) != VAR_6)
      FUNC_0(VAR_7->fs, VAR_3);
     VAR_7->flag &= ~VAR_1;
    }

    if (FUNC_5(VAR_7->fs->drv, VAR_7->buf, VAR_13, 1) != VAR_6)
     FUNC_0(VAR_7->fs, VAR_3);
   }

   VAR_7->dsect = VAR_13;
  }
  VAR_15 = FUNC_2(VAR_7->fs) - ((UINT)VAR_7->fptr % FUNC_2(VAR_7->fs));
  if (VAR_15 > VAR_9) VAR_15 = VAR_9;





  FUNC_8(VAR_18, &VAR_7->buf[VAR_7->fptr % FUNC_2(VAR_7->fs)], VAR_15);

 }

 FUNC_1(VAR_7->fs, VAR_5);
}
