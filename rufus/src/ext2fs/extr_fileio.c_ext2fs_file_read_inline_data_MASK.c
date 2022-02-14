
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ext2_filsys ;
typedef TYPE_1__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_3__ {size_t pos; int buf; int inode; int ino; int fs; } ;


 scalar_t__ FUNC_0 (int ,int ,int *,int ,size_t*) ;
 int FUNC_1 (void*,int ,unsigned int) ;

__attribute__((used)) static errcode_t
FUNC_2(ext2_file_t VAR_0, void *VAR_1,
        unsigned int VAR_2, unsigned int *VAR_3)
{
 ext2_filsys VAR_4;
 errcode_t VAR_5;
 unsigned int VAR_6 = 0;
 size_t VAR_7;

 VAR_4 = VAR_0->fs;
 VAR_5 = FUNC_0(VAR_4, VAR_0->ino, &VAR_0->inode,
     VAR_0->buf, &VAR_7);
 if (VAR_5)
  return VAR_5;

 if (VAR_0->pos >= VAR_7)
  goto out;

 VAR_6 = VAR_7 - VAR_0->pos;
 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 FUNC_1(VAR_1, VAR_0->buf + VAR_0->pos, VAR_6);
 VAR_0->pos += VAR_6;
 VAR_1 = (char *) VAR_1 + VAR_6;

out:
 if (VAR_3)
  *VAR_3 = VAR_6;
 return VAR_5;
}
