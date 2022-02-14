
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mmp_struct {unsigned int mmp_seq; unsigned int mmp_check_interval; int mmp_bdevname; int mmp_nodename; } ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_7__ {int flags; struct mmp_struct* mmp_buf; TYPE_1__* super; int device_name; int blocksize; } ;
struct TYPE_6__ {unsigned int s_mmp_update_interval; int s_mmp_block; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (int ,struct mmp_struct**) ;
 unsigned int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,struct mmp_struct*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,struct mmp_struct*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int) ;

errcode_t FUNC_9(ext2_filsys VAR_8)
{
 return VAR_3;

}
