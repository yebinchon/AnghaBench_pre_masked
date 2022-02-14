
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef char UINT ;
struct TYPE_10__ {scalar_t__ sclust; TYPE_2__* fs; } ;
struct TYPE_12__ {int* dir; TYPE_1__ obj; } ;
struct TYPE_11__ {scalar_t__ fs_type; int wflag; } ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_2__ FATFS ;
typedef int DWORD ;
typedef TYPE_3__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (scalar_t__ const**,TYPE_2__**,int ) ;
 int FUNC_11 (int*,int*,int) ;
 int FUNC_12 (int*,char,int) ;
 int FUNC_13 (int*,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (scalar_t__ const**) ;

FRESULT FUNC_16 (
 const TCHAR* VAR_17
)
{
 FRESULT VAR_18;
 DIR VAR_19;
 FATFS *VAR_20;
 BYTE VAR_21[22];
 UINT VAR_22;
 WCHAR VAR_23;
 static const char VAR_24[] = "+.,;=[]/\\\"*:<>\?|\x7F";





 VAR_18 = FUNC_10(&VAR_17, &VAR_20, VAR_7);
 if (VAR_18 != VAR_11) FUNC_2(VAR_20, VAR_18);
 {
  FUNC_12(VAR_21, ' ', 11);
  VAR_22 = 0;
  while ((UINT)*VAR_17 >= ' ') {




   VAR_23 = (BYTE)*VAR_17++;
   if (FUNC_4((BYTE)VAR_23)) VAR_23 = FUNC_5((BYTE)*VAR_17) ? VAR_23 << 8 | (BYTE)*VAR_17++ : 0;
   if (FUNC_1(VAR_23)) VAR_23 -= 0x20;

   if (VAR_6 && VAR_23 >= 0x80) VAR_23 = VAR_6[VAR_23 - 0x80];




   if (VAR_23 == 0 || FUNC_3(VAR_24 + 0, (int)VAR_23) || VAR_22 >= (UINT)((VAR_23 >= 0x100) ? 10 : 11)) {
    FUNC_2(VAR_20, VAR_9);
   }
   if (VAR_23 >= 0x100) VAR_21[VAR_22++] = (BYTE)(VAR_23 >> 8);
   VAR_21[VAR_22++] = (BYTE)VAR_23;
  }
  if (VAR_21[0] == VAR_2) FUNC_2(VAR_20, VAR_9);
  while (VAR_22 && VAR_21[VAR_22 - 1] == ' ') VAR_22--;
 }


 VAR_19.obj.fs = VAR_20; VAR_19.obj.sclust = 0;
 VAR_18 = FUNC_7(&VAR_19, 0);
 if (VAR_18 == VAR_11) {
  VAR_18 = FUNC_0(&VAR_19);
  if (VAR_18 == VAR_11) {
   if (VAR_8 && VAR_20->fs_type == VAR_12) {
    VAR_19.dir[VAR_15] = (BYTE)VAR_22;
    FUNC_11(VAR_19.dir + VAR_14, VAR_21, 22);
   } else {
    if (VAR_22 != 0) {
     FUNC_11(VAR_19.dir, VAR_21, 11);
    } else {
     VAR_19.dir[VAR_4] = VAR_2;
    }
   }
   VAR_20->wflag = 1;
   VAR_18 = FUNC_14(VAR_20);
  } else {
   if (VAR_18 == VAR_10) {
    VAR_18 = VAR_11;
    if (VAR_22 != 0) {
     VAR_18 = FUNC_6(&VAR_19, 1);
     if (VAR_18 == VAR_11) {
      FUNC_12(VAR_19.dir, 0, VAR_13);
      if (VAR_8 && VAR_20->fs_type == VAR_12) {
       VAR_19.dir[VAR_16] = VAR_5;
       VAR_19.dir[VAR_15] = (BYTE)VAR_22;
       FUNC_11(VAR_19.dir + VAR_14, VAR_21, 22);
      } else {
       VAR_19.dir[VAR_3] = VAR_0;
       FUNC_11(VAR_19.dir, VAR_21, 11);
      }
      VAR_20->wflag = 1;
      VAR_18 = FUNC_14(VAR_20);
     }
    }
   }
  }
 }

 FUNC_2(VAR_20, VAR_18);
}
