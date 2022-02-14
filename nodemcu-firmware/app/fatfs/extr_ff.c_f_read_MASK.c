
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {scalar_t__ objsize; int sclust; } ;
struct TYPE_14__ {int csize; int winsect; int* win; int pdrv; scalar_t__ wflag; } ;
struct TYPE_13__ {int flag; scalar_t__ fptr; int clust; int sect; int* buf; TYPE_3__ obj; scalar_t__ cltbl; scalar_t__ err; } ;
typedef scalar_t__ FSIZE_t ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ,int*,int,int) ;
 scalar_t__ FUNC_6 (int ,int*,int,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int*,int*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_2__**) ;

FRESULT FUNC_11 (
 FIL* VAR_7,
 void* VAR_8,
 UINT VAR_9,
 UINT* VAR_10
)
{
 FRESULT VAR_11;
 FATFS *VAR_12;
 DWORD VAR_13, VAR_14;
 FSIZE_t VAR_15;
 UINT VAR_16, VAR_17, VAR_18;
 BYTE *VAR_19 = (BYTE*)VAR_8;


 *VAR_10 = 0;
 VAR_11 = FUNC_10(&VAR_7->obj, &VAR_12);
 if (VAR_11 != VAR_5 || (VAR_11 = (FRESULT)VAR_7->err) != VAR_5) FUNC_1(VAR_12, VAR_11);
 if (!(VAR_7->flag & VAR_1)) FUNC_1(VAR_12, VAR_2);
 VAR_15 = VAR_7->obj.objsize - VAR_7->fptr;
 if (VAR_9 > VAR_15) VAR_9 = (UINT)VAR_15;

 for ( ; VAR_9;
  VAR_9 -= VAR_16, *VAR_10 += VAR_16, VAR_19 += VAR_16, VAR_7->fptr += VAR_16) {
  if (VAR_7->fptr % FUNC_2(VAR_12) == 0) {
   VAR_18 = (UINT)(VAR_7->fptr / FUNC_2(VAR_12) & (VAR_12->csize - 1));
   if (VAR_18 == 0) {
    if (VAR_7->fptr == 0) {
     VAR_13 = VAR_7->obj.sclust;
    } else {





     {
      VAR_13 = FUNC_7(&VAR_7->obj, VAR_7->clust);
     }
    }
    if (VAR_13 < 2) FUNC_0(VAR_12, VAR_4);
    if (VAR_13 == 0xFFFFFFFF) FUNC_0(VAR_12, VAR_3);
    VAR_7->clust = VAR_13;
   }
   VAR_14 = FUNC_4(VAR_12, VAR_7->clust);
   if (VAR_14 == 0) FUNC_0(VAR_12, VAR_4);
   VAR_14 += VAR_18;
   VAR_17 = VAR_9 / FUNC_2(VAR_12);
   if (VAR_17 > 0) {
    if (VAR_18 + VAR_17 > VAR_12->csize) {
     VAR_17 = VAR_12->csize - VAR_18;
    }
    if (FUNC_5(VAR_12->pdrv, VAR_19, VAR_14, VAR_17) != VAR_6) FUNC_0(VAR_12, VAR_3);






    if ((VAR_7->flag & VAR_0) && VAR_7->sect - VAR_14 < VAR_17) {
     FUNC_8(VAR_19 + ((VAR_7->sect - VAR_14) * FUNC_2(VAR_12)), VAR_7->buf, FUNC_2(VAR_12));
    }


    VAR_16 = FUNC_2(VAR_12) * VAR_17;
    continue;
   }

   if (VAR_7->sect != VAR_14) {

    if (VAR_7->flag & VAR_0) {
     if (FUNC_6(VAR_12->pdrv, VAR_7->buf, VAR_7->sect, 1) != VAR_6) FUNC_0(VAR_12, VAR_3);
     VAR_7->flag &= (BYTE)~VAR_0;
    }

    if (FUNC_5(VAR_12->pdrv, VAR_7->buf, VAR_14, 1) != VAR_6) FUNC_0(VAR_12, VAR_3);
   }

   VAR_7->sect = VAR_14;
  }
  VAR_16 = FUNC_2(VAR_12) - (UINT)VAR_7->fptr % FUNC_2(VAR_12);
  if (VAR_16 > VAR_9) VAR_16 = VAR_9;




  FUNC_8(VAR_19, VAR_7->buf + VAR_7->fptr % FUNC_2(VAR_12), VAR_16);

 }

 FUNC_1(VAR_12, VAR_5);
}
