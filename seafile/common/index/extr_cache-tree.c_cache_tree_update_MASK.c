
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_tree {int dummy; } ;
struct cache_entry {int dummy; } ;
typedef int CommitCB ;


 int FUNC_0 (char const*,int,char const*,struct cache_tree*,struct cache_entry**,int,char*,int ,int,int,int ) ;
 int FUNC_1 (struct cache_entry**,int) ;

int FUNC_2(const char *VAR_0,
                      int VAR_1,
                      const char *VAR_2,
                      struct cache_tree *VAR_3,
                      struct cache_entry **VAR_4,
                      int VAR_5,
                      int VAR_6,
                      int VAR_7,
                      CommitCB VAR_8)
{
    int VAR_9;
    VAR_9 = FUNC_1(VAR_4, VAR_5);
    if (VAR_9)
        return VAR_9;
    VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2,
                   VAR_3, VAR_4, VAR_5, "", 0, VAR_6, VAR_7, VAR_8);
    if (VAR_9 < 0)
        return VAR_9;
    return 0;
}
