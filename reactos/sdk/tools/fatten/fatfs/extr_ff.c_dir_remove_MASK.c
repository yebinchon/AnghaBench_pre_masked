
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int wflag; } ;
struct TYPE_6__ {scalar_t__ index; int lfn_idx; TYPE_2__* fs; void** dir; int sect; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ DIR ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (void**,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static
FRESULT FUNC_4 (
 DIR* VAR_5
)
{
 FRESULT VAR_6;
 VAR_6 = FUNC_1(VAR_5, VAR_5->index);
 if (VAR_6 == VAR_3) {
  VAR_6 = FUNC_3(VAR_5->fs, VAR_5->sect);
  if (VAR_6 == VAR_3) {
   FUNC_2(VAR_5->dir, 0, VAR_4);
   *VAR_5->dir = VAR_0;
   VAR_5->fs->wflag = 1;
  }
 }


 return VAR_6;
}
