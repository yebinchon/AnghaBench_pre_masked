
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_entry {int dummy; } ;
struct idmap_user {struct list_entry entry; } ;


 struct idmap_user* FUNC_0 (int,int) ;

__attribute__((used)) static struct list_entry* FUNC_1()
{
    struct idmap_user *VAR_0 = FUNC_0(1, sizeof(struct idmap_user));
    return VAR_0 == ((void*)0) ? ((void*)0) : &VAR_0->entry;
}
