
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef int UINT ;
struct TYPE_9__ {int wflag; } ;
struct TYPE_8__ {int* fn; int* dir; TYPE_2__* fs; int sect; scalar_t__* lfn; scalar_t__ index; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ DIR ;
typedef int BYTE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (scalar_t__*,int*,int,int) ;
 int FUNC_5 (int*,int*,scalar_t__*,int) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static
FRESULT FUNC_10 (
 DIR* VAR_13
)
{
 FRESULT VAR_14;
 VAR_14 = FUNC_0(VAR_13, 1);


 if (VAR_14 == VAR_4) {
  VAR_14 = FUNC_8(VAR_13->fs, VAR_13->sect);
  if (VAR_14 == VAR_4) {
   FUNC_7(VAR_13->dir, 0, VAR_11);
   FUNC_6(VAR_13->dir, VAR_13->fn, 11);



   VAR_13->fs->wflag = 1;
  }
 }

 return VAR_14;
}
