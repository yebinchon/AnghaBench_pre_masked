
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_entries {struct ordered_hashmap_entry* e; } ;
struct ordered_hashmap_entry {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct ordered_hashmap_entry *FUNC_0(struct swap_entries *VAR_1, unsigned VAR_2) {
        return &VAR_1->e[VAR_2 - VAR_0];
}
