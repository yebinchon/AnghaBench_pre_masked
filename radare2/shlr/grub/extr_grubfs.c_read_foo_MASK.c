
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct grub_disk {TYPE_1__* data; } ;
typedef int const grub_size_t ;
typedef int grub_err_t ;
typedef int const grub_disk_addr_t ;
struct TYPE_3__ {int io; int (* read_at ) (int ,scalar_t__,int *,int const) ;} ;
typedef TYPE_1__ RIOBind ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__,int *,int const) ;

__attribute__((used)) static grub_err_t FUNC_2 (struct grub_disk *VAR_2, grub_disk_addr_t VAR_3, grub_size_t VAR_4, char *VAR_5) {
 if (!VAR_2) {
  FUNC_0 ("oops. no disk\n");
  return 1;
 }
 const int VAR_6 = 512;
 RIOBind *VAR_7 = VAR_2->data;
 if (VAR_0) {
  VAR_7 = VAR_0;
 }

 return !VAR_7->read_at (VAR_7->io, VAR_1+(VAR_6*VAR_3), (ut8*)VAR_5, VAR_4*VAR_6);
}
