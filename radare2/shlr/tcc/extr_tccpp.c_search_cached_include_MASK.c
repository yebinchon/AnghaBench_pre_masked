
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hash_next; int filename; } ;
struct TYPE_5__ {int* cached_includes_hash; TYPE_2__** cached_includes; } ;
typedef TYPE_1__ TCCState ;
typedef TYPE_2__ CachedInclude ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static CachedInclude *FUNC_2(TCCState *VAR_0, const char *VAR_1)
{
 CachedInclude *VAR_2;
 int VAR_3, VAR_4;
 VAR_4 = FUNC_1 (VAR_1);
 VAR_3 = VAR_0->cached_includes_hash[VAR_4];
 for (;;) {
  if (VAR_3 == 0) {
   break;
  }
  VAR_2 = VAR_0->cached_includes[VAR_3 - 1];
  if (0 == FUNC_0 (VAR_2->filename, VAR_1)) {
   return VAR_2;
  }
  VAR_3 = VAR_2->hash_next;
 }
 return ((void*)0);
}
