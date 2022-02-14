
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ext2_ext_attr_header {int dummy; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_5__ {int io; int blocksize; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,struct ext2_ext_attr_header*) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (int ,char**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,void*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int,char*) ;

errcode_t FUNC_6(ext2_filsys VAR_0, blk64_t VAR_1, void *VAR_2,
     ext2_ino_t VAR_3)
{
 errcode_t VAR_4;
 char *VAR_5;







 VAR_5 = (char *) VAR_2;


 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_1,
   (struct ext2_ext_attr_header *)VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_0->io, VAR_1, 1, VAR_5);



 if (!VAR_4)
  FUNC_3(VAR_0);
 return VAR_4;
}
