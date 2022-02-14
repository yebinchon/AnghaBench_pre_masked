
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_ntfs_rlst {scalar_t__ next_vcn; scalar_t__ curr_lcn; int flags; scalar_t__ curr_vcn; } ;
typedef scalar_t__ grub_fshelp_node_t ;
typedef scalar_t__ grub_disk_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct grub_ntfs_rlst*) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_1 (grub_fshelp_node_t VAR_1, grub_disk_addr_t VAR_2)
{
  struct grub_ntfs_rlst *VAR_3;

  VAR_3 = (struct grub_ntfs_rlst *) VAR_1;
  if (VAR_2 >= VAR_3->next_vcn)
    {
      if (FUNC_0 (VAR_3))
 return -1;
      return VAR_3->curr_lcn;
    }
  else
    return (VAR_3->flags & VAR_0) ? 0 : (VAR_2 -
      VAR_3->curr_vcn + VAR_3->curr_lcn);
}
