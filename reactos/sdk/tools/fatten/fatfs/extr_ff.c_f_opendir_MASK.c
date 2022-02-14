
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int* dir; TYPE_1__* fs; scalar_t__ lockid; int sclust; int id; } ;
struct TYPE_11__ {int id; } ;
typedef int TCHAR ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FATFS ;
typedef TYPE_2__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int const**,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*,int*) ;

FRESULT FUNC_8 (
 DIR* VAR_8,
 const TCHAR* VAR_9
)
{
 FRESULT VAR_10;
 FATFS* VAR_11;
 VAR_1;


 if (!VAR_8) return VAR_3;


 VAR_10 = FUNC_4(&VAR_11, &VAR_9, 0);
 if (VAR_10 == VAR_6) {
  VAR_8->fs = VAR_11;
  FUNC_1(*VAR_8);
  VAR_10 = FUNC_5(VAR_8, VAR_9);
  FUNC_0();
  if (VAR_10 == VAR_6) {
   if (VAR_8->dir) {
    if (VAR_8->dir[VAR_2] & VAR_0)
     VAR_8->sclust = FUNC_7(VAR_11, VAR_8->dir);
    else
     VAR_10 = VAR_5;
   }
   if (VAR_10 == VAR_6) {
    VAR_8->id = VAR_11->id;
    VAR_10 = FUNC_3(VAR_8, 0);
   }
  }
  if (VAR_10 == VAR_4) VAR_10 = VAR_5;
 }
 if (VAR_10 != VAR_6) VAR_8->fs = 0;

 FUNC_2(VAR_11, VAR_10);
}
