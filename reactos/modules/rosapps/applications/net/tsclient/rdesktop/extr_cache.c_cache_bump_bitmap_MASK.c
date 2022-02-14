
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8 ;
typedef size_t uint16 ;
struct TYPE_6__ {size_t* bmpcache_mru; int* bmpcache_lru; TYPE_1__** bmpcache; int * bmpcache_count; } ;
struct TYPE_7__ {TYPE_2__ cache; } ;
struct TYPE_5__ {int next; int previous; } ;
typedef TYPE_3__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

void
FUNC_3(RDPCLIENT * VAR_1, uint8 VAR_2, uint16 VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 if (!FUNC_1(VAR_2))
  return;

 if (VAR_1->cache.bmpcache_mru[VAR_2] == VAR_3)
  return;

 FUNC_0(("bump bitmap: id=%d, idx=%d, bump=%d\n", VAR_2, VAR_3, VAR_4));

 VAR_6 = VAR_1->cache.bmpcache[VAR_2][VAR_3].next;
 VAR_5 = VAR_1->cache.bmpcache[VAR_2][VAR_3].previous;

 if (FUNC_2(VAR_6))
 {

  --VAR_1->cache.bmpcache_count[VAR_2];
  if (FUNC_2(VAR_5))
   VAR_1->cache.bmpcache[VAR_2][VAR_5].next = VAR_6;
  else
   VAR_1->cache.bmpcache_lru[VAR_2] = VAR_6;
  if (FUNC_2(VAR_6))
   VAR_1->cache.bmpcache[VAR_2][VAR_6].previous = VAR_5;
  else
   VAR_1->cache.bmpcache_mru[VAR_2] = VAR_5;
 }
 else
 {
  VAR_5 = VAR_0;
  VAR_6 = VAR_1->cache.bmpcache_lru[VAR_2];
 }

 if (VAR_4 >= 0)
 {
  for (VAR_7 = 0; VAR_7 < VAR_4 && FUNC_2(VAR_6); VAR_7++)
  {
   VAR_5 = VAR_6;
   VAR_6 = VAR_1->cache.bmpcache[VAR_2][VAR_5].next;
  }
 }
 else
 {
  VAR_5 = VAR_1->cache.bmpcache_mru[VAR_2];
  VAR_6 = VAR_0;
 }


 ++VAR_1->cache.bmpcache_count[VAR_2];
 VAR_1->cache.bmpcache[VAR_2][VAR_3].previous = VAR_5;
 VAR_1->cache.bmpcache[VAR_2][VAR_3].next = VAR_6;

 if (VAR_5 >= 0)
  VAR_1->cache.bmpcache[VAR_2][VAR_5].next = VAR_3;
 else
  VAR_1->cache.bmpcache_lru[VAR_2] = VAR_3;

 if (VAR_6 >= 0)
  VAR_1->cache.bmpcache[VAR_2][VAR_6].previous = VAR_3;
 else
  VAR_1->cache.bmpcache_mru[VAR_2] = VAR_3;
}
