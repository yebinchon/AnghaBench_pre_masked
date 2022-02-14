
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coro {int dummy; } ;
struct cache_entry {int dummy; } ;
struct cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cache_entry*) ;
 int VAR_3 ;
 struct cache_entry* FUNC_1 (struct cache*,char const*,int*) ;
 int FUNC_2 (struct coro*,int ,struct cache*,struct cache_entry*) ;
 int FUNC_3 (struct coro*,int ) ;

struct cache_entry *FUNC_4(struct cache *VAR_4,
                                                 struct coro *VAR_5,
                                                 const char *VAR_6)
{
    for (int VAR_7 = VAR_2; VAR_7; VAR_7--) {
        int VAR_8;
        struct cache_entry *VAR_9 = FUNC_1(VAR_4, VAR_6, &VAR_8);

        if (FUNC_0(VAR_9)) {





            FUNC_2(VAR_5, VAR_3, VAR_4, VAR_9);
            return VAR_9;
        }





        if (VAR_8 == VAR_1) {
            FUNC_3(VAR_5, VAR_0);
        } else {
            break;
        }
    }

    return ((void*)0);
}
