
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; int drv; int fs_type; } ;
struct TYPE_3__ {scalar_t__ id; TYPE_2__* fs; } ;
typedef int FRESULT ;
typedef TYPE_1__ FIL ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
FRESULT FUNC_2 (
 void* VAR_3
)
{
 FIL *VAR_4 = (FIL*)VAR_3;


 if (!VAR_4 || !VAR_4->fs || !VAR_4->fs->fs_type || VAR_4->fs->id != VAR_4->id || (FUNC_1(VAR_4->fs->drv) & VAR_2))
  return VAR_0;

 FUNC_0(VAR_4->fs);

 return VAR_1;
}
