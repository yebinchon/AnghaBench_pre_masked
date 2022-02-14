
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef TYPE_2__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_6__ {int flags; int buf; int physblock; int blockno; int inode; int ino; TYPE_1__* fs; } ;
struct TYPE_5__ {int blocksize; int io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *,int ,int ,int ,int*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static errcode_t FUNC_3(ext2_file_t VAR_3, int VAR_4)
{
 ext2_filsys VAR_5 = VAR_3->fs;
 errcode_t VAR_6;
 int VAR_7;

 if (!(VAR_3->flags & VAR_2)) {
  VAR_6 = FUNC_0(VAR_5, VAR_3->ino, &VAR_3->inode,
         VAR_0, 0, VAR_3->blockno, &VAR_7,
         &VAR_3->physblock);
  if (VAR_6)
   return VAR_6;
  if (!VAR_4) {
   if (VAR_3->physblock &&
       !(VAR_7 & VAR_1)) {
    VAR_6 = FUNC_1(VAR_5->io,
              VAR_3->physblock,
              1, VAR_3->buf);
    if (VAR_6)
     return VAR_6;
   } else
    FUNC_2(VAR_3->buf, 0, VAR_5->blocksize);
  }
  VAR_3->flags |= VAR_2;
 }
 return 0;
}
