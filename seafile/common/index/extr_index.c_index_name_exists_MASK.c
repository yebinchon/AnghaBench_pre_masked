
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int name_hash; int i_name_hash; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (char*) ;
 struct cache_entry* FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char const*,int) ;

struct cache_entry *FUNC_3(struct index_state *VAR_0,
                                      const char *VAR_1, int VAR_2,
                                      int VAR_3)
{
    return FUNC_1 (VAR_0->name_hash, VAR_1);

}
