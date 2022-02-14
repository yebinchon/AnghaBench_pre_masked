
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_ntfs_file {scalar_t__ buf; TYPE_1__* data; } ;
struct grub_ntfs_attr {int * sbuf; int edat_buf; int emft_buf; int attr_end; scalar_t__ attr_nxt; int flags; struct grub_ntfs_file* mft; } ;
struct TYPE_2__ {struct grub_ntfs_file mmft; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1 (struct grub_ntfs_attr *VAR_1, struct grub_ntfs_file *VAR_2)
{
  VAR_1->mft = VAR_2;
  VAR_1->flags = (VAR_2 == &VAR_2->data->mmft) ? VAR_0 : 0;
  VAR_1->attr_nxt = VAR_2->buf + FUNC_0 (VAR_2->buf, 0x14);
  VAR_1->attr_end = VAR_1->emft_buf = VAR_1->edat_buf = *(VAR_1->sbuf = ((void*)0));
}
