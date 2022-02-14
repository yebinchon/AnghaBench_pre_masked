
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_9__ {int wflag; } ;
struct TYPE_8__ {int* dir; TYPE_2__* fs; scalar_t__ sclust; } ;
typedef char TCHAR ;
typedef scalar_t__ FRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (int*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 char const FUNC_10 (int,int) ;
 int FUNC_11 (char const) ;
 scalar_t__ FUNC_12 (TYPE_2__**,char const**,int) ;
 int FUNC_13 (int*,int*,int) ;
 int FUNC_14 (int*,int ,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;

FRESULT FUNC_16 (
 const TCHAR* VAR_11
)
{
 FRESULT VAR_12;
 DIR VAR_13;
 BYTE VAR_14[11];
 UINT VAR_15, VAR_16, VAR_17;
 WCHAR VAR_18;
 DWORD VAR_19;



 VAR_12 = FUNC_12(&VAR_13.fs, &VAR_11, 1);
 if (VAR_12) FUNC_4(VAR_13.fs, VAR_12);


 VAR_14[0] = 0;
 for (VAR_17 = 0; VAR_11[VAR_17]; VAR_17++) ;
 for ( ; VAR_17 && VAR_11[VAR_17 - 1] == ' '; VAR_17--) ;
 if (VAR_17) {
  VAR_15 = VAR_16 = 0;
  do {



   VAR_18 = (BYTE)VAR_11[VAR_15++];
   if (FUNC_1(VAR_18))
    VAR_18 = (VAR_16 < 10 && VAR_15 < VAR_17 && FUNC_2(VAR_11[VAR_15])) ? VAR_18 << 8 | (BYTE)VAR_11[VAR_15++] : 0;



   if (FUNC_3(VAR_18)) VAR_18 -= 0x20;



   if (!VAR_10 && VAR_18 >= 0x80) VAR_18 = 0;



   if (!VAR_18 || FUNC_6("\"*+,.:;<=>\?[]|\x7F", VAR_18) || VAR_16 >= (UINT)((VAR_18 >= 0x100) ? 10 : 11))
    FUNC_4(VAR_13.fs, VAR_6);
   if (VAR_18 >= 0x100) VAR_14[VAR_16++] = (BYTE)(VAR_18 >> 8);
   VAR_14[VAR_16++] = (BYTE)VAR_18;
  } while (VAR_15 < VAR_17);
  while (VAR_16 < 11) VAR_14[VAR_16++] = ' ';
  if (VAR_14[0] == VAR_1) FUNC_4(VAR_13.fs, VAR_6);
 }


 VAR_13.sclust = 0;
 VAR_12 = FUNC_9(&VAR_13, 0);
 if (VAR_12 == VAR_8) {
  VAR_12 = FUNC_8(&VAR_13, 1);
  if (VAR_12 == VAR_8) {
   if (VAR_14[0]) {
    FUNC_13(VAR_13.dir, VAR_14, 11);
    VAR_19 = FUNC_0();
    FUNC_5(VAR_13.dir + VAR_3, VAR_19);
    FUNC_5(VAR_13.dir + VAR_4, VAR_19);
   } else {
    VAR_13.dir[0] = VAR_1;
   }
   VAR_13.fs->wflag = 1;
   VAR_12 = FUNC_15(VAR_13.fs);
  } else {
   if (VAR_12 == VAR_7) {
    VAR_12 = VAR_8;
    if (VAR_14[0]) {
     VAR_12 = FUNC_7(&VAR_13, 1);
     if (VAR_12 == VAR_8) {
      FUNC_14(VAR_13.dir, 0, VAR_9);
      FUNC_13(VAR_13.dir, VAR_14, 11);
      VAR_13.dir[VAR_2] = VAR_0;
      VAR_19 = FUNC_0();
      FUNC_5(VAR_13.dir + VAR_3, VAR_19);
      FUNC_5(VAR_13.dir + VAR_4, VAR_19);
      VAR_13.fs->wflag = 1;
      VAR_12 = FUNC_15(VAR_13.fs);
     }
    }
   }
  }
 }

 FUNC_4(VAR_13.fs, VAR_12);
}
