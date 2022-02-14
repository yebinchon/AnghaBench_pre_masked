
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mmp_struct {int mmp_checksum; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef int __u32 ;
struct TYPE_4__ {int super; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct mmp_struct*) ;

errcode_t FUNC_3(ext2_filsys VAR_0, struct mmp_struct *VAR_1)
{
 __u32 VAR_2;

 if (!FUNC_1(VAR_0->super))
  return 0;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 VAR_1->mmp_checksum = FUNC_0(VAR_2);

 return 0;
}
