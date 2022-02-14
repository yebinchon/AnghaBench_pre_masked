
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int temp_file_name; scalar_t__ found; } ;
struct TYPE_5__ {int temp_file_name; scalar_t__ found; } ;
struct TYPE_4__ {int temp_file_name; scalar_t__ found; } ;
struct vdso_info {TYPE_3__ vdsox32; TYPE_2__ vdso32; TYPE_1__ vdso; } ;
struct machine {struct vdso_info* vdso_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vdso_info**) ;

void FUNC_2(struct machine *VAR_0)
{
 struct vdso_info *VAR_1 = VAR_0->vdso_info;

 if (!VAR_1)
  return;

 if (VAR_1->vdso.found)
  FUNC_0(VAR_1->vdso.temp_file_name);







 FUNC_1(&VAR_0->vdso_info);
}
