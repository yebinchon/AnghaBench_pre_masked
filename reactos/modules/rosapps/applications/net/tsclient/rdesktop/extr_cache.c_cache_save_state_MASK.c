
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_8__ {int next; } ;
struct TYPE_6__ {int* bmpcache_lru; TYPE_5__** bmpcache; } ;
struct TYPE_7__ {TYPE_1__ cache; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (TYPE_5__**) ;
 int FUNC_3 (TYPE_2__*,size_t,int,size_t) ;

void
FUNC_4(RDPCLIENT * VAR_0)
{
 uint32 VAR_1 = 0, VAR_2 = 0;
 int VAR_3;

 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0->cache.bmpcache); VAR_1++)
  if (FUNC_1(VAR_1))
  {
   FUNC_0(("Saving cache state for bitmap cache %d...", VAR_1));
   VAR_3 = VAR_0->cache.bmpcache_lru[VAR_1];
   while (VAR_3 >= 0)
   {
    FUNC_3(VAR_0, VAR_1, VAR_3, ++VAR_2);
    VAR_3 = VAR_0->cache.bmpcache[VAR_1][VAR_3].next;
   }
   FUNC_0((" %d stamps written.\n", VAR_2));
  }
}
