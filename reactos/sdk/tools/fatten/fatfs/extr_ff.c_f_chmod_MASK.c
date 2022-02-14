
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int wflag; } ;
struct TYPE_7__ {int* fn; int* dir; TYPE_2__* fs; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_2__**,int const**,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int const*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

FRESULT FUNC_6 (
 const TCHAR* VAR_11,
 BYTE VAR_12,
 BYTE VAR_13
)
{
 FRESULT VAR_14;
 DIR VAR_15;
 BYTE *VAR_16;
 VAR_4;


 VAR_14 = FUNC_3(&VAR_15.fs, &VAR_11, 1);
 if (VAR_14 == VAR_7) {
  FUNC_1(VAR_15);
  VAR_14 = FUNC_4(&VAR_15, VAR_11);
  FUNC_0();
  if (VAR_10 && VAR_14 == VAR_7 && (VAR_15.fn[VAR_8] & VAR_9))
   VAR_14 = VAR_6;
  if (VAR_14 == VAR_7) {
   VAR_16 = VAR_15.dir;
   if (!VAR_16) {
    VAR_14 = VAR_6;
   } else {
    VAR_13 &= VAR_2|VAR_1|VAR_3|VAR_0;
    VAR_16[VAR_5] = (VAR_12 & VAR_13) | (VAR_16[VAR_5] & (BYTE)~VAR_13);
    VAR_15.fs->wflag = 1;
    VAR_14 = FUNC_5(VAR_15.fs);
   }
  }
 }

 FUNC_2(VAR_15.fs, VAR_14);
}
