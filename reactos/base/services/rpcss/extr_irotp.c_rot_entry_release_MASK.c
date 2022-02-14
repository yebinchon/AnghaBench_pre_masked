
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rot_entry {struct rot_entry* moniker_data; struct rot_entry* moniker; struct rot_entry* object; int refs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct rot_entry*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct rot_entry *VAR_0)
{
    if (!FUNC_2(&VAR_0->refs))
    {
        FUNC_1(FUNC_0(), 0, VAR_0->object);
        FUNC_1(FUNC_0(), 0, VAR_0->moniker);
        FUNC_1(FUNC_0(), 0, VAR_0->moniker_data);
        FUNC_1(FUNC_0(), 0, VAR_0);
    }
}
