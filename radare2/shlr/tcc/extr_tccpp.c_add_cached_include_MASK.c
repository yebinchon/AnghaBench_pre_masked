
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ifndef_macro; int hash_next; int filename; } ;
struct TYPE_7__ {int nb_cached_includes; int * cached_includes_hash; int cached_includes; } ;
typedef TYPE_1__ TCCState ;
typedef TYPE_2__ CachedInclude ;


 int FUNC_0 (void***,int *,TYPE_2__*) ;
 char* FUNC_1 (int,int *) ;
 int FUNC_2 (char const*) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char const*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (int ,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static inline void FUNC_8(TCCState *VAR_0, const char *VAR_1, int VAR_2)
{
 CachedInclude *VAR_3;
 int VAR_4;

 if (FUNC_5 (VAR_0, VAR_1)) {
  return;
 }



 VAR_3 = FUNC_3 (sizeof(CachedInclude) + FUNC_7 (VAR_1));
 FUNC_6 (VAR_3->filename, VAR_1);
 VAR_3->ifndef_macro = VAR_2;
 FUNC_0 ((void ***) &VAR_0->cached_includes, &VAR_0->nb_cached_includes, VAR_3);

 VAR_4 = FUNC_2 (VAR_1);
 VAR_3->hash_next = VAR_0->cached_includes_hash[VAR_4];
 VAR_0->cached_includes_hash[VAR_4] = VAR_0->nb_cached_includes;
}
