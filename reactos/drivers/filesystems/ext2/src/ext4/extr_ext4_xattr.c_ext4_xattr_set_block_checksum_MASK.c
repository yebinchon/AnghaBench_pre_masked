
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_header {scalar_t__ h_checksum; } ;
typedef int ext4_fsblk_t ;
typedef int PEXT2_MCB ;



__attribute__((used)) static void
FUNC_0(PEXT2_MCB VAR_0,
         ext4_fsblk_t VAR_1,
         struct ext4_xattr_header *VAR_2)
{

 VAR_2->h_checksum = 0;
}
