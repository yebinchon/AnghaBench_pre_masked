
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int wflag; int drv; } ;
struct TYPE_7__ {int flag; TYPE_3__* fs; int sclust; int fsize; int * dir_ptr; int dir_sect; int dsect; int buf; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

FRESULT FUNC_9 (
 FIL* VAR_10
)
{
 FRESULT VAR_11;
 DWORD VAR_12;
 BYTE *VAR_13;


 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11 == VAR_8) {
  if (VAR_10->flag & VAR_6) {

   if (VAR_10->flag & VAR_5) {
    if (FUNC_4(VAR_10->fs->drv, VAR_10->buf, VAR_10->dsect, 1) != VAR_9)
     FUNC_1(VAR_10->fs, VAR_7);
    VAR_10->flag &= ~VAR_5;
   }


   VAR_11 = FUNC_5(VAR_10->fs, VAR_10->dir_sect);
   if (VAR_11 == VAR_8) {
    VAR_13 = VAR_10->dir_ptr;
    VAR_13[VAR_1] |= VAR_0;
    FUNC_2(VAR_13 + VAR_2, VAR_10->fsize);
    FUNC_6(VAR_13, VAR_10->sclust);
    VAR_12 = FUNC_0();
    FUNC_2(VAR_13 + VAR_4, VAR_12);
    FUNC_3(VAR_13 + VAR_3, 0);
    VAR_10->flag &= ~VAR_6;
    VAR_10->fs->wflag = 1;
    VAR_11 = FUNC_7(VAR_10->fs);
   }
  }
 }

 FUNC_1(VAR_10->fs, VAR_11);
}
