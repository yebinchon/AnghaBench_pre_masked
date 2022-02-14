
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ext2_off64_t ;
typedef TYPE_1__* ext2_filsys ;
typedef TYPE_2__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_7__ {int ino; TYPE_1__* fs; } ;
struct TYPE_6__ {scalar_t__ blocksize; int io; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *,int *,int ,scalar_t__,int*,scalar_t__*) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (scalar_t__,char**) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int,char*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int,char*) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static errcode_t FUNC_7(ext2_file_t VAR_1,
           ext2_off64_t VAR_2)
{
 ext2_filsys VAR_3 = VAR_1->fs;
 char *VAR_4 = ((void*)0);
 ext2_off64_t VAR_5 = VAR_2 % VAR_3->blocksize;
 blk64_t VAR_6;
 int VAR_7;
 errcode_t VAR_8;

 if (VAR_5 == 0)
  return 0;

 VAR_8 = FUNC_6(VAR_1);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_3, VAR_1->ino, ((void*)0), ((void*)0), 0,
         VAR_2 / VAR_3->blocksize, &VAR_7, &VAR_6);
 if (VAR_8)
  return VAR_8;
 if ((VAR_6 == 0) || (VAR_7 & VAR_0))
  return 0;


 VAR_8 = FUNC_2(VAR_3->blocksize, &VAR_4);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_3(VAR_3->io, VAR_6, 1, VAR_4);
 if (VAR_8)
  goto out;

 FUNC_5(VAR_4 + VAR_5, 0, VAR_3->blocksize - VAR_5);

 VAR_8 = FUNC_4(VAR_3->io, VAR_6, 1, VAR_4);
 if (VAR_8)
  goto out;

out:
 FUNC_1(&VAR_4);
 return VAR_8;
}
