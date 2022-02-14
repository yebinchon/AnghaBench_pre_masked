
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ v1; } ;
struct grub_reiserfs_key {TYPE_2__ u; } ;
typedef enum grub_reiserfs_item_type { ____Placeholder_grub_reiserfs_item_type } grub_reiserfs_item_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static enum grub_reiserfs_item_type
FUNC_1 (const struct grub_reiserfs_key *VAR_6)
{
  switch (FUNC_0 (VAR_6->u.v1.type))
    {
    case 0:
      return VAR_4;
    case 555:
      return VAR_0;
    case 500:
      return VAR_2;
    case 0x20000000:
    case 0xFFFFFFFF:
      return VAR_1;
    case 0x10000000:
    case 0xFFFFFFFE:
      return VAR_3;
    }
  return VAR_5;
}
