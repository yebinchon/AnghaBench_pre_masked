
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* ext2_filsys ;
typedef int errcode_t ;
struct TYPE_7__ {TYPE_2__* icache; } ;
struct TYPE_6__ {unsigned int cache_size; scalar_t__ buffer_blk; TYPE_1__* cache; } ;
struct TYPE_5__ {scalar_t__ ino; } ;



errcode_t FUNC_0(ext2_filsys VAR_0)
{
 unsigned VAR_1;

 if (!VAR_0->icache)
  return 0;

 for (VAR_1=0; VAR_1 < VAR_0->icache->cache_size; VAR_1++)
  VAR_0->icache->cache[VAR_1].ino = 0;

 VAR_0->icache->buffer_blk = 0;
 return 0;
}
