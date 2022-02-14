
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext2_super_block {int dummy; } ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u16 ;
struct TYPE_9__ {TYPE_1__* manager; } ;
struct TYPE_8__ {scalar_t__ orig_super; TYPE_4__* io; scalar_t__ blocksize; } ;
struct TYPE_7__ {int write_byte; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,int,struct ext2_super_block*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,scalar_t__,int,scalar_t__*) ;
 int FUNC_3 (scalar_t__,struct ext2_super_block*,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static errcode_t FUNC_5(ext2_filsys VAR_3,
       struct ext2_super_block *VAR_4)
{
 __u16 *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 errcode_t VAR_10;

 if (!VAR_3->io->manager->write_byte || !VAR_3->orig_super) {
 fallback:
  FUNC_0(VAR_3->io, VAR_1);
  VAR_10 = FUNC_1(VAR_3->io, 1, -VAR_2,
           VAR_4);
  FUNC_0(VAR_3->io, VAR_3->blocksize);
  return VAR_10;
 }

 VAR_5 = (__u16 *) VAR_3->orig_super;
 VAR_6 = (__u16 *) VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_2/2; VAR_7++) {
  if (VAR_5[VAR_7] == VAR_6[VAR_7])
   continue;
  VAR_8 = VAR_7;
  for (VAR_7++; VAR_7 < VAR_2/2; VAR_7++)
   if (VAR_5[VAR_7] == VAR_6[VAR_7])
    break;
  VAR_9 = 2 * (VAR_7 - VAR_8);




  VAR_10 = FUNC_2(VAR_3->io,
          VAR_1 + (2 * VAR_8), VAR_9,
            VAR_6 + VAR_8);
  if (VAR_10 == VAR_0)
   goto fallback;
  if (VAR_10)
   return VAR_10;
 }
 FUNC_3(VAR_3->orig_super, VAR_4, VAR_2);
 return 0;
}
