
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* fs; } ;
struct TYPE_10__ {scalar_t__ dptr; int blk_ofs; int* dir; int sect; TYPE_1__ obj; } ;
struct TYPE_9__ {scalar_t__ fs_type; int wflag; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_2__ FATFS ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ DIR ;


 void* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static FRESULT FUNC_3 (
 DIR* VAR_8
)
{
 FRESULT VAR_9;
 FATFS *VAR_10 = VAR_8->obj.fs;
 VAR_9 = FUNC_2(VAR_10, VAR_8->sect);
 if (VAR_9 == VAR_5) {
  VAR_8->dir[VAR_1] = VAR_0;
  VAR_10->wflag = 1;
 }


 return VAR_9;
}
