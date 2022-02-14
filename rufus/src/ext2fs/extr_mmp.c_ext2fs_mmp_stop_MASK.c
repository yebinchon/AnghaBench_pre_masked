
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mmp_struct {int mmp_seq; } ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_7__ {int s_mmp_block; } ;
struct TYPE_6__ {int flags; int mmp_fd; TYPE_5__* super; struct mmp_struct* mmp_cmp; struct mmp_struct* mmp_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,struct mmp_struct*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,struct mmp_struct*) ;
 scalar_t__ FUNC_4 (struct mmp_struct*,struct mmp_struct*,int) ;

errcode_t FUNC_5(ext2_filsys VAR_5)
{
 if (!FUNC_1(VAR_5->super) ||
     !(VAR_5->flags & VAR_2) || (VAR_5->flags & VAR_3))
  return 0;

 return VAR_1;

}
