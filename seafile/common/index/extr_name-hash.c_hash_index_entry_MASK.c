
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int name_hash; } ;
struct cache_entry {int ce_flags; int * next; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_entry*) ;
 unsigned int FUNC_1 (int ,int ) ;
 void** FUNC_2 (unsigned int,struct cache_entry*,int *) ;

__attribute__((used)) static void FUNC_3(struct index_state *VAR_1, struct cache_entry *VAR_2)
{
    void **VAR_3;
    unsigned int VAR_4;

    if (VAR_2->ce_flags & VAR_0)
        return;
    VAR_2->ce_flags |= VAR_0;
    VAR_2->next = ((void*)0);
    VAR_4 = FUNC_1(VAR_2->name, FUNC_0(VAR_2));
    VAR_3 = FUNC_2(VAR_4, VAR_2, &VAR_1->name_hash);
    if (VAR_3) {
        VAR_2->next = *VAR_3;
        *VAR_3 = VAR_2;
    }



}
