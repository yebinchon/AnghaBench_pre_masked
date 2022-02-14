
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_cache_entry {TYPE_1__* funcs; } ;
struct cache_entry {int dummy; } ;
struct TYPE_2__ {int (* free ) (struct file_cache_entry*) ;} ;


 int FUNC_0 (struct file_cache_entry*) ;
 int FUNC_1 (struct file_cache_entry*) ;

__attribute__((used)) static void FUNC_2(struct cache_entry *VAR_0,
                                void *VAR_1 __attribute__((unused)))
{
    struct file_cache_entry *VAR_2 = (struct file_cache_entry *)VAR_0;

    VAR_2->funcs->free(VAR_2);
    FUNC_0(VAR_2);
}
