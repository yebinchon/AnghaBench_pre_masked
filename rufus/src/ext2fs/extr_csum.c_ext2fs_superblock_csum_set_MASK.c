
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2_super_block {void* s_checksum; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef void* __u32 ;
struct TYPE_4__ {int flags; int super; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 void* VAR_1 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_1__*,struct ext2_super_block*) ;

errcode_t FUNC_3(ext2_filsys VAR_2,
         struct ext2_super_block *VAR_3)
{
 __u32 VAR_4, VAR_5;

 if (VAR_2->flags & VAR_0)
  VAR_4 = VAR_1;
 else
  VAR_4 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_2->super, VAR_4))
  return 0;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 VAR_3->s_checksum = FUNC_1(VAR_5);

 return 0;
}
