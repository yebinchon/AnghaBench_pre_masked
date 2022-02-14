
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ id; int pdrv; scalar_t__ fs_type; } ;
struct TYPE_7__ {scalar_t__ id; TYPE_2__* fs; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_1__ FFOBJID ;
typedef TYPE_2__ FATFS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static FRESULT FUNC_3 (
 FFOBJID* VAR_4,
 FATFS** VAR_5
)
{
 FRESULT VAR_6 = VAR_0;


 if (VAR_4 && VAR_4->fs && VAR_4->fs->fs_type && VAR_4->id == VAR_4->fs->id) {
  if (!(FUNC_0(VAR_4->fs->pdrv) & VAR_3)) {
   VAR_6 = VAR_1;
  }

 }
 *VAR_5 = (VAR_6 == VAR_1) ? VAR_4->fs : 0;
 return VAR_6;
}
