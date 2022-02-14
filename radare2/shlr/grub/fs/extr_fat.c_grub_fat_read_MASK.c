
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int grub_ssize_t ;
typedef int grub_size_t ;
typedef TYPE_2__* grub_file_t ;
struct TYPE_5__ {int offset; int flags; int closure; int read_hook; int data; TYPE_1__* device; } ;
struct TYPE_4__ {int disk; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,char*) ;

__attribute__((used)) static grub_ssize_t
FUNC_1 (grub_file_t VAR_0, char *VAR_1, grub_size_t VAR_2)
{
  return FUNC_0 (VAR_0->device->disk, VAR_0->data, VAR_0->read_hook,
        VAR_0->closure, VAR_0->flags,
        VAR_0->offset, VAR_2, VAR_1);
}
