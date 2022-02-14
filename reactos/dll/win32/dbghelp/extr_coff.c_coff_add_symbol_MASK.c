
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
struct CoffFile {int neps; int neps_alloc; struct symt** entries; } ;


 int FUNC_0 () ;
 struct symt** FUNC_1 (int ,int ,int) ;
 struct symt** FUNC_2 (int ,int ,struct symt**,int) ;

__attribute__((used)) static void FUNC_3(struct CoffFile* VAR_0, struct symt* VAR_1)
{
    if (VAR_0->neps + 1 >= VAR_0->neps_alloc)
    {
        if (VAR_0->entries)
        {
            VAR_0->neps_alloc *= 2;
            VAR_0->entries = FUNC_2(FUNC_0(), 0, VAR_0->entries,
                                             VAR_0->neps_alloc * sizeof(struct symt*));
        }
        else
        {
            VAR_0->neps_alloc = 32;
            VAR_0->entries = FUNC_1(FUNC_0(), 0,
                                           VAR_0->neps_alloc * sizeof(struct symt*));
        }
    }
    VAR_0->entries[VAR_0->neps++] = VAR_1;
}
