
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ext2_filsys ;
typedef TYPE_1__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_4__ {size_t pos; int inode; int ino; int buf; int fs; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,size_t*) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ,unsigned int) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,void const*,unsigned int) ;

__attribute__((used)) static errcode_t
FUNC_7(ext2_file_t VAR_1, const void *VAR_2,
         unsigned int VAR_3, unsigned int *VAR_4)
{
 ext2_filsys VAR_5;
 errcode_t VAR_6;
 unsigned int VAR_7 = 0;
 size_t VAR_8;

 VAR_5 = VAR_1->fs;
 VAR_6 = FUNC_3(VAR_5, VAR_1->ino, &VAR_1->inode,
     VAR_1->buf, &VAR_8);
 if (VAR_6)
  return VAR_6;

 if (VAR_1->pos < VAR_8) {
  VAR_7 = VAR_3 - VAR_1->pos;
  FUNC_6(VAR_1->buf + VAR_1->pos, VAR_2, VAR_7);

  VAR_6 = FUNC_4(VAR_5, VAR_1->ino, &VAR_1->inode,
      VAR_1->buf, VAR_7);
  if (VAR_6 == VAR_0)
   goto expand;
  if (VAR_6)
   return VAR_6;

  VAR_1->pos += VAR_7;


  if (VAR_7 != 0 && FUNC_0(&VAR_1->inode) < VAR_1->pos) {
   errcode_t VAR_9;

   VAR_9 = FUNC_1(VAR_1, VAR_1->pos);
   if (VAR_6 == 0)
    VAR_6 = VAR_9;
  }

  if (VAR_4)
   *VAR_4 = VAR_7;
  return 0;
 }

expand:
 VAR_6 = FUNC_2(VAR_5, VAR_1->ino);
 if (VAR_6)
  return VAR_6;







 VAR_6 = FUNC_5(VAR_5, VAR_1->ino, &VAR_1->inode);
 if (VAR_6)
  return VAR_6;
 return VAR_0;
}
