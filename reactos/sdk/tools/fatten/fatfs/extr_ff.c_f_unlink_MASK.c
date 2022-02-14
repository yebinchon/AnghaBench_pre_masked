
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ cdir; } ;
struct TYPE_15__ {int* fn; int* dir; TYPE_2__* fs; scalar_t__ sclust; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__**,int const**,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int const*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;

FRESULT FUNC_13 (
 const TCHAR* VAR_11
)
{
 FRESULT VAR_12;
 DIR VAR_13, VAR_14;
 BYTE *VAR_15;
 DWORD VAR_16 = 0;
 VAR_2;



 VAR_12 = FUNC_7(&VAR_13.fs, &VAR_11, 1);
 if (VAR_12 == VAR_7) {
  FUNC_1(VAR_13);
  VAR_12 = FUNC_8(&VAR_13, VAR_11);
  if (VAR_10 && VAR_12 == VAR_7 && (VAR_13.fn[VAR_8] & VAR_9))
   VAR_12 = VAR_5;



  if (VAR_12 == VAR_7) {
   VAR_15 = VAR_13.dir;
   if (!VAR_15) {
    VAR_12 = VAR_5;
   } else {
    if (VAR_15[VAR_3] & VAR_1)
     VAR_12 = VAR_4;
   }
   if (VAR_12 == VAR_7) {
    VAR_16 = FUNC_9(VAR_13.fs, VAR_15);
    if (VAR_16 && (VAR_15[VAR_3] & VAR_0)) {





     {
      FUNC_10(&VAR_14, &VAR_13, sizeof (DIR));
      VAR_14.sclust = VAR_16;
      VAR_12 = FUNC_6(&VAR_14, 2);
      if (VAR_12 == VAR_7) {
       VAR_12 = FUNC_4(&VAR_14, 0);
       if (VAR_12 == VAR_7) VAR_12 = VAR_4;
       if (VAR_12 == VAR_6) VAR_12 = VAR_7;
      }
     }
    }
   }
   if (VAR_12 == VAR_7) {
    VAR_12 = FUNC_5(&VAR_13);
    if (VAR_12 == VAR_7 && VAR_16)
     VAR_12 = FUNC_11(VAR_13.fs, VAR_16);
    if (VAR_12 == VAR_7) VAR_12 = FUNC_12(VAR_13.fs);
   }
  }
  FUNC_0();
 }

 FUNC_2(VAR_13.fs, VAR_12);
}
