
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef TYPE_2__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef unsigned int __u64 ;
struct TYPE_11__ {int i_flags; } ;
struct TYPE_10__ {unsigned int pos; scalar_t__ buf; TYPE_7__ inode; TYPE_1__* fs; } ;
struct TYPE_9__ {unsigned int blocksize; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (TYPE_7__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,void*,unsigned int,unsigned int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

errcode_t FUNC_6(ext2_file_t VAR_2, void *VAR_3,
      unsigned int VAR_4, unsigned int *VAR_5)
{
 ext2_filsys VAR_6;
 errcode_t VAR_7 = 0;
 unsigned int VAR_8, VAR_9, VAR_10 = 0;
 __u64 VAR_11;
 char *VAR_12 = (char *) VAR_3;

 FUNC_0(VAR_2, VAR_0);
 VAR_6 = VAR_2->fs;


 if (VAR_2->inode.i_flags & VAR_1)
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

 while ((VAR_2->pos < FUNC_1(&VAR_2->inode)) && (VAR_4 > 0)) {
  VAR_7 = FUNC_5(VAR_2);
  if (VAR_7)
   goto fail;
  VAR_7 = FUNC_3(VAR_2, 0);
  if (VAR_7)
   goto fail;

  VAR_8 = VAR_2->pos % VAR_6->blocksize;
  VAR_9 = VAR_6->blocksize - VAR_8;
  if (VAR_9 > VAR_4)
   VAR_9 = VAR_4;
  VAR_11 = FUNC_1(&VAR_2->inode) - VAR_2->pos ;
  if (VAR_9 > VAR_11)
   VAR_9 = VAR_11;

  FUNC_4(VAR_12, VAR_2->buf+VAR_8, VAR_9);
  VAR_2->pos += VAR_9;
  VAR_12 += VAR_9;
  VAR_10 += VAR_9;
  VAR_4 -= VAR_9;
 }

fail:
 if (VAR_5)
  *VAR_5 = VAR_10;
 return VAR_7;
}
