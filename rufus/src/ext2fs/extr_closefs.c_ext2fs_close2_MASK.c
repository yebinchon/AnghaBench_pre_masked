
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* io_stats ;
typedef TYPE_4__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_17__ {TYPE_1__* manager; } ;
struct TYPE_16__ {int flags; int desc_blocks; int blocksize; TYPE_2__* super; TYPE_5__* io; scalar_t__ (* write_bitmaps ) (TYPE_4__*) ;} ;
struct TYPE_15__ {int bytes_written; } ;
struct TYPE_14__ {scalar_t__ s_kbytes_written; } ;
struct TYPE_13__ {int (* get_stats ) (TYPE_5__*,TYPE_3__**) ;} ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__**) ;

errcode_t FUNC_6(ext2_filsys VAR_4, int VAR_5)
{
 errcode_t VAR_6;
 int VAR_7;
 io_stats VAR_8 = 0;

 FUNC_0(VAR_4, VAR_0);

 if (VAR_4->write_bitmaps) {
  VAR_6 = VAR_4->write_bitmaps(VAR_4);
  if (VAR_6)
   return VAR_6;
 }
 if (VAR_4->super->s_kbytes_written &&
     VAR_4->io->manager->get_stats)
  VAR_4->io->manager->get_stats(VAR_4->io, &VAR_8);
 if (VAR_8 && VAR_8->bytes_written && (VAR_4->flags & VAR_2)) {
  VAR_4->super->s_kbytes_written += VAR_8->bytes_written >> 10;
  VAR_7 = VAR_4->desc_blocks + 1;
  if (!(VAR_4->flags & VAR_3))
   VAR_4->super->s_kbytes_written += VAR_7 /
    (VAR_4->blocksize / 1024);
  if ((VAR_4->flags & VAR_1) == 0)
   VAR_4->flags |= VAR_3 | VAR_1;
 }
 if (VAR_4->flags & VAR_1) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_4);
 return 0;
}
