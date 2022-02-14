
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {int block_bh; } ;
struct ext4_xattr_header {void* h_blocks; void* h_refcount; int h_magic; } ;


 struct ext4_xattr_header* FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ext4_xattr_header*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ext4_xattr_ref *VAR_1)
{
 struct ext4_xattr_header *VAR_2 = ((void*)0);
 VAR_2 = FUNC_0(VAR_1->block_bh);

 FUNC_2(VAR_2, 0, sizeof(struct ext4_xattr_header));
 VAR_2->h_magic = VAR_0;
 VAR_2->h_refcount = FUNC_1(1);
 VAR_2->h_blocks = FUNC_1(1);
}
