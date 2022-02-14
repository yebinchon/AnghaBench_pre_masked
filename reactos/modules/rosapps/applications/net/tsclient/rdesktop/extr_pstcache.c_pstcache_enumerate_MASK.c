
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
typedef int sint16 ;
struct TYPE_8__ {scalar_t__ stamp; int key; } ;
struct TYPE_7__ {int* pstcache_fd; int pstcache_Bpp; int server_depth; scalar_t__ pstcache_enumerated; scalar_t__ bitmap_cache_precache; scalar_t__ bitmap_cache_persist_enable; scalar_t__ bitmap_cache; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int HASH_KEY ;
typedef TYPE_2__ CELLHEADER ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,size_t,int*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*,size_t,int) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int,TYPE_2__*,int) ;
 int VAR_3 ;

int
FUNC_8(RDPCLIENT * VAR_4, uint8 VAR_5, HASH_KEY * VAR_6)
{
 int VAR_7, VAR_8;
 uint16 VAR_9;
 sint16 VAR_10[0xa00];
 uint32 VAR_11[0xa00];
 CELLHEADER VAR_12;

 if (!(VAR_4->bitmap_cache && VAR_4->bitmap_cache_persist_enable && FUNC_1(VAR_5)))
  return 0;


 if (VAR_4->pstcache_enumerated)
  return 0;

 FUNC_0(("Persistent bitmap cache enumeration... "));
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
 {
  VAR_7 = VAR_4->pstcache_fd[VAR_5];
  FUNC_6(VAR_7, VAR_9 * (VAR_4->pstcache_Bpp * VAR_1 + sizeof(CELLHEADER)));
  if (FUNC_7(VAR_7, &VAR_12, sizeof(CELLHEADER)) <= 0)
   break;

  if (FUNC_3(VAR_12.key, VAR_3, sizeof(HASH_KEY)) != 0)
  {
   FUNC_4(VAR_6[VAR_9], VAR_12.key, sizeof(HASH_KEY));


   if (VAR_4->bitmap_cache_precache && VAR_12.stamp && VAR_4->server_depth > 8)
    FUNC_5(VAR_4, VAR_5, VAR_9);


   for (VAR_8 = VAR_9; VAR_8 > 0 && VAR_12.stamp < VAR_11[VAR_8 - 1]; VAR_8--)
   {
    VAR_10[VAR_8] = VAR_10[VAR_8 - 1];
    VAR_11[VAR_8] = VAR_11[VAR_8 - 1];
   }

   VAR_10[VAR_8] = VAR_9;
   VAR_11[VAR_8] = VAR_12.stamp;
  }
  else
  {
   break;
  }
 }

 FUNC_0(("%d cached bitmaps.\n", VAR_9));

 FUNC_2(VAR_4, VAR_5, VAR_10, VAR_9);
 VAR_4->pstcache_enumerated = VAR_2;
 return VAR_9;
}
