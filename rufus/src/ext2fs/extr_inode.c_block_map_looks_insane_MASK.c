
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_inode_large {int i_flags; scalar_t__ i_links_count; scalar_t__* i_block; int i_mode; } ;
typedef TYPE_1__* ext2_filsys ;
struct TYPE_5__ {scalar_t__ s_first_data_block; } ;
struct TYPE_4__ {TYPE_2__* super; } ;


 int FUNC_0 (struct ext2_inode_large*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(ext2_filsys VAR_3,
      struct ext2_inode_large *VAR_4)
{
 unsigned int VAR_5, VAR_6;


 if ((VAR_4->i_flags & VAR_2) ||
     (VAR_4->i_flags & VAR_1))
  return 0;
 if (!FUNC_3(VAR_4->i_mode) &&
     !FUNC_2(VAR_4->i_mode) &&
     !FUNC_1(VAR_4->i_mode))
  return 0;
 if (FUNC_2(VAR_4->i_mode) &&
     FUNC_0(VAR_4) <= sizeof(VAR_4->i_block))
  return 0;


 if (VAR_4->i_links_count == 0)
  return 0;


 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_4->i_block[VAR_5] != 0 &&
      (VAR_4->i_block[VAR_5] < VAR_3->super->s_first_data_block ||
       VAR_4->i_block[VAR_5] >= FUNC_4(VAR_3->super)))
   VAR_6++;
 return VAR_6 > VAR_0 / 2;
}
