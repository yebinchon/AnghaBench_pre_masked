
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {void* eh_max; void* eh_magic; scalar_t__ eh_entries; scalar_t__ eh_depth; } ;
typedef int handle_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (void*,int *,struct inode*) ;
 struct ext4_extent_header* FUNC_3 (struct inode*) ;

int FUNC_4(void *VAR_1, handle_t *VAR_2, struct inode *VAR_3)
{
 struct ext4_extent_header *VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 VAR_4->eh_depth = 0;
 VAR_4->eh_entries = 0;
 VAR_4->eh_magic = FUNC_0(VAR_0);
 VAR_4->eh_max = FUNC_0(FUNC_1(VAR_3, 0));
 FUNC_2(VAR_1, VAR_2, VAR_3);
 return 0;
}
