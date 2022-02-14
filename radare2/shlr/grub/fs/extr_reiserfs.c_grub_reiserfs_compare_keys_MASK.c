
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_reiserfs_key {int object_id; int directory_id; } ;
typedef scalar_t__ grub_uint64_t ;
typedef scalar_t__ grub_uint32_t ;
typedef enum grub_reiserfs_item_type { ____Placeholder_grub_reiserfs_item_type } grub_reiserfs_item_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct grub_reiserfs_key const*) ;
 int FUNC_2 (struct grub_reiserfs_key const*) ;

__attribute__((used)) static int
FUNC_3 (const struct grub_reiserfs_key *VAR_3,
                            const struct grub_reiserfs_key *VAR_4)
{
  grub_uint64_t VAR_5, VAR_6;
  enum grub_reiserfs_item_type VAR_7, VAR_8;
  grub_uint32_t VAR_9, VAR_10;

  if (! VAR_3 || ! VAR_4)
    return -2;

  VAR_9 = FUNC_0 (VAR_3->directory_id);
  VAR_10 = FUNC_0 (VAR_4->directory_id);
  if (VAR_9 < VAR_10)
    return -1;
  if (VAR_9 > VAR_10)
    return 1;

  VAR_9 = FUNC_0 (VAR_3->object_id);
  VAR_10 = FUNC_0 (VAR_4->object_id);
  if (VAR_9 < VAR_10)
    return -1;
  if (VAR_9 > VAR_10)
    return 1;

  VAR_5 = FUNC_1 (VAR_3);
  VAR_6 = FUNC_1 (VAR_4);
  if (VAR_5 < VAR_6)
    return -1;
  if (VAR_5 > VAR_6)
    return 1;

  VAR_7 = FUNC_2 (VAR_3);
  VAR_8 = FUNC_2 (VAR_4);
  if ((VAR_7 == VAR_0
       && (VAR_8 == VAR_1
           || VAR_8 == VAR_2))
      || (VAR_8 == VAR_0
          && (VAR_7 == VAR_1
              || VAR_7 == VAR_2)))
    return 0;
  if (VAR_7 < VAR_8)
    return -1;
  if (VAR_7 > VAR_8)
    return 1;

  return 0;
}
