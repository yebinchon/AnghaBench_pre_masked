
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8 ;
typedef size_t uint16 ;
struct TYPE_8__ {size_t* bmpcache_lru; TYPE_1__** bmpcache; int * bmpcache_count; } ;
struct TYPE_9__ {TYPE_2__ cache; } ;
struct TYPE_7__ {int next; int previous; scalar_t__ bitmap; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,size_t,size_t,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;

void
FUNC_4(RDPCLIENT * VAR_1, uint8 VAR_2)
{
 uint16 VAR_3;
 int VAR_4;

 if (!FUNC_1(VAR_2))
  return;

 VAR_3 = VAR_1->cache.bmpcache_lru[VAR_2];
 VAR_4 = VAR_1->cache.bmpcache[VAR_2][VAR_3].next;
 FUNC_0(("evict bitmap: id=%d idx=%d n_idx=%d bmp=0x%x\n", VAR_2, VAR_3, VAR_4,
      VAR_1->cache.bmpcache[VAR_2][VAR_3].bitmap));

 FUNC_3(VAR_1, VAR_1->cache.bmpcache[VAR_2][VAR_3].bitmap);
 --VAR_1->cache.bmpcache_count[VAR_2];
 VAR_1->cache.bmpcache[VAR_2][VAR_3].bitmap = 0;

 VAR_1->cache.bmpcache_lru[VAR_2] = VAR_4;
 VAR_1->cache.bmpcache[VAR_2][VAR_4].previous = VAR_0;

 FUNC_2(VAR_1, VAR_2, VAR_3, 0);
}
