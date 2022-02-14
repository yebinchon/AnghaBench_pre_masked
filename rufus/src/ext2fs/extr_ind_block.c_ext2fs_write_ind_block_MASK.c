
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef int blk_t ;
struct TYPE_3__ {int blocksize; int flags; int io; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,void*) ;

errcode_t FUNC_2(ext2_filsys VAR_1, blk_t VAR_2, void *VAR_3)
{






 if (VAR_1->flags & VAR_0)
  return 0;






 return FUNC_1(VAR_1->io, VAR_2, 1, VAR_3);
}
