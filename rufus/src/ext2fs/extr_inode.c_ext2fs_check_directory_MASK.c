
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_inode {int i_mode; } ;
typedef scalar_t__ ext2_ino_t ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_8__ {scalar_t__ (* check_directory ) (TYPE_2__*,scalar_t__) ;TYPE_1__* super; } ;
struct TYPE_7__ {scalar_t__ s_inodes_count; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,struct ext2_inode*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;

errcode_t FUNC_4(ext2_filsys VAR_4, ext2_ino_t VAR_5)
{
 struct ext2_inode VAR_6;
 errcode_t VAR_7;

 FUNC_0(VAR_4, VAR_2);

 if (VAR_5 > VAR_4->super->s_inodes_count)
  return VAR_0;

 if (VAR_4->check_directory) {
  VAR_7 = (VAR_4->check_directory)(VAR_4, VAR_5);
  if (VAR_7 != VAR_1)
   return VAR_7;
 }
 VAR_7 = FUNC_2(VAR_4, VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (!FUNC_1(VAR_6.i_mode))
  return VAR_3;
 return 0;
}
