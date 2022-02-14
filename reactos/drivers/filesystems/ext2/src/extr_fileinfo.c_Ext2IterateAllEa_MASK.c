
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_ref {int * iter_arg; } ;
struct ext4_xattr_item {int name_len; int data_size; } ;
typedef int ULONG ;
typedef int * PULONG ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ext4_xattr_ref *VAR_1, struct ext4_xattr_item *VAR_2, BOOL VAR_3)
{
    PULONG VAR_4 = VAR_1->iter_arg;
    ULONG VAR_5 = 4 + 1 + 1 + 2 + VAR_2->name_len + 1 + VAR_2->data_size;

    *VAR_4 += VAR_5 - 4;
    return VAR_0;
}
