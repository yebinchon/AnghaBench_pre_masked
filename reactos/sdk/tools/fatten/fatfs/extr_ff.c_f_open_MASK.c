
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int wflag; int id; void* winsect; scalar_t__ last_clust; } ;
struct TYPE_15__ {int* dir; TYPE_3__* fs; } ;
struct TYPE_14__ {int* dir_ptr; int flag; TYPE_3__* fs; int id; scalar_t__ cltbl; scalar_t__ dsect; scalar_t__ fptr; int fsize; void* sclust; scalar_t__ err; int lockid; void* dir_sect; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FIL ;
typedef void* DWORD ;
typedef TYPE_2__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void* FUNC_1 () ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (int*,void*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_3__**,int const**,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int const*) ;
 int FUNC_11 (TYPE_2__*,int) ;
 void* FUNC_12 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,void*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,void*) ;
 int FUNC_15 (int*,int ) ;

FRESULT FUNC_16 (
 FIL* VAR_21,
 const TCHAR* VAR_22,
 BYTE VAR_23
)
{
 FRESULT VAR_24;
 DIR VAR_25;
 BYTE *VAR_26;
 VAR_2;

 DWORD VAR_27, VAR_28;



 if (!VAR_21) return VAR_17;
 VAR_21->fs = 0;



 VAR_23 &= VAR_10 | VAR_11 | VAR_7 | VAR_9 | VAR_8;
 VAR_24 = FUNC_9(&VAR_25.fs, &VAR_22, (BYTE)(VAR_23 & ~VAR_10));




 if (VAR_24 == VAR_19) {
  FUNC_2(VAR_25);
  VAR_24 = FUNC_10(&VAR_25, VAR_22);
  VAR_26 = VAR_25.dir;

  if (VAR_24 == VAR_19) {
   if (!VAR_26)
    VAR_24 = VAR_16;




  }

  if (VAR_23 & (VAR_7 | VAR_9 | VAR_8)) {
   if (VAR_24 != VAR_19) {
    if (VAR_24 == VAR_18)



     VAR_24 = FUNC_7(&VAR_25);

    VAR_23 |= VAR_7;
    VAR_26 = VAR_25.dir;
   }
   else {
    if (VAR_26[VAR_3] & (VAR_1 | VAR_0)) {
     VAR_24 = VAR_13;
    } else {
     if (VAR_23 & VAR_8)
      VAR_24 = VAR_14;
    }
   }
   if (VAR_24 == VAR_19 && (VAR_23 & VAR_7)) {
    VAR_27 = FUNC_1();
    FUNC_5(VAR_26 + VAR_4, VAR_27);
    FUNC_5(VAR_26 + VAR_6, VAR_27);
    VAR_26[VAR_3] = 0;
    FUNC_5(VAR_26 + VAR_5, 0);
    VAR_28 = FUNC_12(VAR_25.fs, VAR_26);
    FUNC_15(VAR_26, 0);
    VAR_25.fs->wflag = 1;
    if (VAR_28) {
     VAR_27 = VAR_25.fs->winsect;
     VAR_24 = FUNC_14(VAR_25.fs, VAR_28);
     if (VAR_24 == VAR_19) {
      VAR_25.fs->last_clust = VAR_28 - 1;
      VAR_24 = FUNC_13(VAR_25.fs, VAR_27);
     }
    }
   }
  }
  else {
   if (VAR_24 == VAR_19) {
    if (VAR_26[VAR_3] & VAR_0) {
     VAR_24 = VAR_18;
    } else {
     if ((VAR_23 & VAR_11) && (VAR_26[VAR_3] & VAR_1))
      VAR_24 = VAR_13;
    }
   }
  }
  if (VAR_24 == VAR_19) {
   if (VAR_23 & VAR_7)
    VAR_23 |= VAR_12;
   VAR_21->dir_sect = VAR_25.fs->winsect;
   VAR_21->dir_ptr = VAR_26;




  }
  FUNC_0();

  if (VAR_24 == VAR_19) {
   VAR_21->flag = VAR_23;
   VAR_21->err = 0;
   VAR_21->sclust = FUNC_12(VAR_25.fs, VAR_26);
   VAR_21->fsize = FUNC_3(VAR_26 + VAR_5);
   VAR_21->fptr = 0;
   VAR_21->dsect = 0;



   VAR_21->fs = VAR_25.fs;
   VAR_21->id = VAR_21->fs->id;
  }
 }

 FUNC_4(VAR_25.fs, VAR_24);
}
