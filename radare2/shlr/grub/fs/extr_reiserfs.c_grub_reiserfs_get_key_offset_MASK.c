
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset_type; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_6__ {TYPE_2__ v2; TYPE_1__ v1; } ;
struct grub_reiserfs_key {TYPE_3__ u; } ;
typedef unsigned long long grub_uint64_t ;


 unsigned long long FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct grub_reiserfs_key const*) ;

__attribute__((used)) static grub_uint64_t
FUNC_3 (const struct grub_reiserfs_key *VAR_0)
{
  if (FUNC_2 (VAR_0) == 1)
    return FUNC_0 (VAR_0->u.v1.offset);
  else
    return FUNC_1 (VAR_0->u.v2.offset_type) & (~0ULL >> 4);
}
