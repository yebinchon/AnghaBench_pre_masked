
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_3__ {int* pstcache_fd; int pstcache_Bpp; int server_depth; scalar_t__ bitmap_cache_persist_enable; scalar_t__ bitmap_cache; scalar_t__ pstcache_enumerated; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,size_t,int) ;
 int FUNC_6 (char*) ;

BOOL
FUNC_7(RDPCLIENT * VAR_2, uint8 VAR_3)
{
 int VAR_4;
 char VAR_5[256];

 if (VAR_2->pstcache_enumerated)
  return VAR_1;

 VAR_2->pstcache_fd[VAR_3] = 0;

 if (!(VAR_2->bitmap_cache && VAR_2->bitmap_cache_persist_enable))
  return VAR_0;

 if (!FUNC_4())
 {
  FUNC_0(("failed to get/make cache directory!\n"));
  return VAR_0;
 }

 VAR_2->pstcache_Bpp = (VAR_2->server_depth + 7) / 8;
 FUNC_5(VAR_5, "cache/pstcache_%d_%d", VAR_3, VAR_2->pstcache_Bpp);
 FUNC_0(("persistent bitmap cache file: %s\n", VAR_5));

 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4 == -1)
  return VAR_0;

 if (!FUNC_2(VAR_4, 0, 0))
 {
  FUNC_6("Persistent bitmap caching is disabled. (The file is already in use)\n");
  FUNC_1(VAR_4);
  return VAR_0;
 }

 VAR_2->pstcache_fd[VAR_3] = VAR_4;
 return VAR_1;
}
