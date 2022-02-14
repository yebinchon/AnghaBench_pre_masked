
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_inode {int i_size; int i_size_high; int i_mode; } ;
typedef int ext2_off64_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_8__ {scalar_t__ s_rev_level; } ;
struct TYPE_7__ {TYPE_3__* super; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*) ;

errcode_t FUNC_6(ext2_filsys VAR_2, struct ext2_inode *VAR_3,
    ext2_off64_t VAR_4)
{

 if (!FUNC_0(VAR_3->i_mode) && (VAR_4 >> 32))
  return VAR_0;


 if (FUNC_0(VAR_3->i_mode) &&
     FUNC_3(VAR_4) &&
     (!FUNC_1(VAR_2->super) ||
      VAR_2->super->s_rev_level == VAR_1)) {
  FUNC_4(VAR_2->super);
  FUNC_5(VAR_2);
  FUNC_2(VAR_2);
 }

 VAR_3->i_size = VAR_4 & 0xffffffff;
 VAR_3->i_size_high = (VAR_4 >> 32);

 return 0;
}
