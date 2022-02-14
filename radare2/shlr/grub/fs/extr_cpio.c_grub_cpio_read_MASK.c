
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_cpio_data {scalar_t__ dofs; int disk; } ;
typedef int grub_ssize_t ;
typedef scalar_t__ grub_size_t ;
typedef TYPE_1__* grub_file_t ;
struct TYPE_3__ {scalar_t__ offset; struct grub_cpio_data* data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__,scalar_t__,char*) ;

__attribute__((used)) static grub_ssize_t
FUNC_1 (grub_file_t VAR_0, char *VAR_1, grub_size_t VAR_2)
{
  struct grub_cpio_data *VAR_3;

  VAR_3 = VAR_0->data;
  return (FUNC_0 (VAR_3->disk, 0, VAR_3->dofs + VAR_0->offset,
     VAR_2, VAR_1)) ? -1 : (grub_ssize_t) VAR_2;
}
