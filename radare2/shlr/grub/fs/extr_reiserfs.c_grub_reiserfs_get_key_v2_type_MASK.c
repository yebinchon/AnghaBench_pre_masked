
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset_type; } ;
struct TYPE_4__ {TYPE_1__ v2; } ;
struct grub_reiserfs_key {TYPE_2__ u; } ;
typedef enum grub_reiserfs_item_type { ____Placeholder_grub_reiserfs_item_type } grub_reiserfs_item_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static enum grub_reiserfs_item_type
FUNC_1 (const struct grub_reiserfs_key *VAR_6)
{
  unsigned long long VAR_7 = FUNC_0 (VAR_6->u.v2.offset_type);
  switch ((int)(VAR_7>>60))
    {
    case 0:
      return VAR_4;
    case 15:
      return VAR_0;
    case 3:
      return VAR_2;
    case 2:
      return VAR_1;
    case 1:
      return VAR_3;
    }
  return VAR_5;
}
