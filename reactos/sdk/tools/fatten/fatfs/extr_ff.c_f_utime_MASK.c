
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int wflag; } ;
struct TYPE_10__ {int* fn; TYPE_3__* fs; int * dir; } ;
struct TYPE_9__ {int fdate; int ftime; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FILINFO ;
typedef TYPE_2__ DIR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_3__**,int const**,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int const*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

FRESULT FUNC_7 (
 const TCHAR* VAR_8,
 const FILINFO* VAR_9
)
{
 FRESULT VAR_10;
 DIR VAR_11;
 BYTE *VAR_12;
 VAR_0;



 VAR_10 = FUNC_4(&VAR_11.fs, &VAR_8, 1);
 if (VAR_10 == VAR_4) {
  FUNC_1(VAR_11);
  VAR_10 = FUNC_5(&VAR_11, VAR_8);
  FUNC_0();
  if (VAR_7 && VAR_10 == VAR_4 && (VAR_11.fn[VAR_5] & VAR_6))
   VAR_10 = VAR_3;
  if (VAR_10 == VAR_4) {
   VAR_12 = VAR_11.dir;
   if (!VAR_12) {
    VAR_10 = VAR_3;
   } else {
    FUNC_3(VAR_12 + VAR_2, VAR_9->ftime);
    FUNC_3(VAR_12 + VAR_1, VAR_9->fdate);
    VAR_11.fs->wflag = 1;
    VAR_10 = FUNC_6(VAR_11.fs);
   }
  }
 }

 FUNC_2(VAR_11.fs, VAR_10);
}
