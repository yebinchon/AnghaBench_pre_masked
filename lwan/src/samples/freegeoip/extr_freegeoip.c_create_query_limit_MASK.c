
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_limit {scalar_t__ queries; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct query_limit*) ;
 struct query_limit* FUNC_1 (int) ;

__attribute__((used)) static struct cache_entry *FUNC_2(const char *VAR_0
                                              __attribute__((unused)),
                                              void *VAR_1
                                              __attribute__((unused)))
{
    struct query_limit *VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (FUNC_0(VAR_2))
        VAR_2->queries = 0;
    return (struct cache_entry *)VAR_2;
}
