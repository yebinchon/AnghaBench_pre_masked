
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {char* win; scalar_t__ fs_type; int dirbase; char csize; int wflag; scalar_t__ winsect; } ;
struct TYPE_13__ {int* fn; int sclust; char* dir; TYPE_2__* fs; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DIR ;
typedef char BYTE ;


 char VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_2__**,int const**,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int const*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (char*,int) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;

FRESULT FUNC_17 (
 const TCHAR* VAR_18
)
{
 FRESULT VAR_19;
 DIR VAR_20;
 BYTE *VAR_21, VAR_22;
 DWORD VAR_23, VAR_24, VAR_25, VAR_26 = FUNC_1();
 VAR_1;



 VAR_19 = FUNC_9(&VAR_20.fs, &VAR_18, 1);
 if (VAR_19 == VAR_12) {
  FUNC_2(VAR_20);
  VAR_19 = FUNC_10(&VAR_20, VAR_18);
  if (VAR_19 == VAR_12) VAR_19 = VAR_8;
  if (VAR_17 && VAR_19 == VAR_11 && (VAR_20.fn[VAR_14] & VAR_15))
   VAR_19 = VAR_10;
  if (VAR_19 == VAR_11) {
   VAR_24 = FUNC_7(VAR_20.fs, 0);
   VAR_19 = VAR_12;
   if (VAR_24 == 0) VAR_19 = VAR_6;
   if (VAR_24 == 1) VAR_19 = VAR_9;
   if (VAR_24 == 0xFFFFFFFF) VAR_19 = VAR_7;
   if (VAR_19 == VAR_12)
    VAR_19 = FUNC_16(VAR_20.fs);
   if (VAR_19 == VAR_12) {
    VAR_23 = FUNC_6(VAR_20.fs, VAR_24);
    VAR_21 = VAR_20.fs->win;
    FUNC_12(VAR_21, 0, FUNC_4(VAR_20.fs));
    FUNC_12(VAR_21 + VAR_4, ' ', 11);
    VAR_21[VAR_4] = '.';
    VAR_21[VAR_2] = VAR_0;
    FUNC_5(VAR_21 + VAR_3, VAR_26);
    FUNC_5(VAR_21 + VAR_5, VAR_26);
    FUNC_14(VAR_21, VAR_24);
    FUNC_11(VAR_21 + VAR_16, VAR_21, VAR_16);
    VAR_21[VAR_16 + 1] = '.'; VAR_25 = VAR_20.sclust;
    if (VAR_20.fs->fs_type == VAR_13 && VAR_25 == VAR_20.fs->dirbase)
     VAR_25 = 0;
    FUNC_14(VAR_21 + VAR_16, VAR_25);
    for (VAR_22 = VAR_20.fs->csize; VAR_22; VAR_22--) {
     VAR_20.fs->winsect = VAR_23++;
     VAR_20.fs->wflag = 1;
     VAR_19 = FUNC_16(VAR_20.fs);
     if (VAR_19 != VAR_12) break;
     FUNC_12(VAR_21, 0, FUNC_4(VAR_20.fs));
    }
   }
   if (VAR_19 == VAR_12) VAR_19 = FUNC_8(&VAR_20);
   if (VAR_19 != VAR_12) {
    FUNC_13(VAR_20.fs, VAR_24);
   } else {
    VAR_21 = VAR_20.dir;
    VAR_21[VAR_2] = VAR_0;
    FUNC_5(VAR_21 + VAR_3, VAR_26);
    FUNC_5(VAR_21 + VAR_5, VAR_26);
    FUNC_14(VAR_21, VAR_24);
    VAR_20.fs->wflag = 1;
    VAR_19 = FUNC_15(VAR_20.fs);
   }
  }
  FUNC_0();
 }

 FUNC_3(VAR_20.fs, VAR_19);
}
