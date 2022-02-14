
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {int capacity; int sdata; int * cache; } ;
struct p9_client {int msize; int * fcall_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct p9_client *VAR_2, struct p9_fcall *VAR_3,
    int VAR_4)
{
 if (FUNC_2(VAR_2->fcall_cache) && VAR_4 == VAR_2->msize) {
  VAR_3->sdata = FUNC_1(VAR_2->fcall_cache, VAR_1);
  VAR_3->cache = VAR_2->fcall_cache;
 } else {
  VAR_3->sdata = FUNC_0(VAR_4, VAR_1);
  VAR_3->cache = ((void*)0);
 }
 if (!VAR_3->sdata)
  return -VAR_0;
 VAR_3->capacity = VAR_4;
 return 0;
}
