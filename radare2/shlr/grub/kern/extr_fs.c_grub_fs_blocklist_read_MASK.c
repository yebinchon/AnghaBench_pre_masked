
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_3__* grub_file_t ;
struct TYPE_8__ {TYPE_2__* device; int closure; scalar_t__ read_hook; } ;
struct TYPE_7__ {TYPE_1__* disk; } ;
struct TYPE_6__ {scalar_t__ read_hook; int closure; } ;


 int FUNC_0 (int ,TYPE_3__*,char*,int ) ;

__attribute__((used)) static grub_ssize_t
FUNC_1 (grub_file_t VAR_0, char *VAR_1, grub_size_t VAR_2)
{
  grub_ssize_t VAR_3;
  VAR_0->device->disk->read_hook = VAR_0->read_hook;
  VAR_0->device->disk->closure = VAR_0->closure;
  VAR_3 = FUNC_0 (0, VAR_0, VAR_1, VAR_2);
  VAR_0->device->disk->read_hook = 0;
  return VAR_3;
}
