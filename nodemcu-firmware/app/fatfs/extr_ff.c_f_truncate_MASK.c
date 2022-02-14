
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ objsize; int sclust; } ;
struct TYPE_11__ {int n_fatent; int pdrv; } ;
struct TYPE_10__ {int flag; scalar_t__ fptr; int sect; int buf; TYPE_3__ obj; int clust; scalar_t__ err; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__**) ;

FRESULT FUNC_6 (
 FIL* VAR_8
)
{
 FRESULT VAR_9;
 FATFS *VAR_10;
 DWORD VAR_11;


 VAR_9 = FUNC_5(&VAR_8->obj, &VAR_10);
 if (VAR_9 != VAR_6 || (VAR_9 = (FRESULT)VAR_8->err) != VAR_6) FUNC_1(VAR_10, VAR_9);
 if (!(VAR_8->flag & VAR_2)) FUNC_1(VAR_10, VAR_3);

 if (VAR_8->fptr < VAR_8->obj.objsize) {
  if (VAR_8->fptr == 0) {
   VAR_9 = FUNC_4(&VAR_8->obj, VAR_8->obj.sclust, 0);
   VAR_8->obj.sclust = 0;
  } else {
   VAR_11 = FUNC_3(&VAR_8->obj, VAR_8->clust);
   VAR_9 = VAR_6;
   if (VAR_11 == 0xFFFFFFFF) VAR_9 = VAR_4;
   if (VAR_11 == 1) VAR_9 = VAR_5;
   if (VAR_9 == VAR_6 && VAR_11 < VAR_10->n_fatent) {
    VAR_9 = FUNC_4(&VAR_8->obj, VAR_11, VAR_8->clust);
   }
  }
  VAR_8->obj.objsize = VAR_8->fptr;
  VAR_8->flag |= VAR_1;

  if (VAR_9 == VAR_6 && (VAR_8->flag & VAR_0)) {
   if (FUNC_2(VAR_10->pdrv, VAR_8->buf, VAR_8->sect, 1) != VAR_7) {
    VAR_9 = VAR_4;
   } else {
    VAR_8->flag &= (BYTE)~VAR_0;
   }
  }

  if (VAR_9 != VAR_6) FUNC_0(VAR_10, VAR_9);
 }

 FUNC_1(VAR_10, VAR_9);
}
