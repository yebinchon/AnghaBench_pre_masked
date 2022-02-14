
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset_type; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_6__ {TYPE_2__ v2; TYPE_1__ v1; } ;
struct grub_reiserfs_key {TYPE_3__ u; } ;
typedef int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef enum grub_reiserfs_item_type { ____Placeholder_grub_reiserfs_item_type } grub_reiserfs_item_type ;







 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct grub_reiserfs_key*) ;

__attribute__((used)) static void
FUNC_4 (struct grub_reiserfs_key *VAR_0,
                            enum grub_reiserfs_item_type VAR_1,
                            int VAR_2)
{
  grub_uint32_t VAR_3;

  switch (VAR_1)
    {
    case 128:
      VAR_3 = 0;
      break;
    case 132:
      VAR_3 = (VAR_2 == 1) ? 555 : 15;
      break;
    case 130:
      VAR_3 = (VAR_2 == 1) ? 500 : 3;
      break;
    case 131:
      VAR_3 = (VAR_2 == 1) ? 0xFFFFFFFF : 2;
      break;
    case 129:
      VAR_3 = (VAR_2 == 1) ? 0xFFFFFFFE : 1;
      break;
    default:
      return;
    }

  if (VAR_2 == 1)
    VAR_0->u.v1.type = FUNC_1 (VAR_3);
  else
    VAR_0->u.v2.offset_type
      = ((VAR_0->u.v2.offset_type & FUNC_2 (~0ULL >> 4))
         | FUNC_2 ((grub_uint64_t) VAR_3 << 60));

  FUNC_0 (FUNC_3 (VAR_0) == VAR_1);
}
