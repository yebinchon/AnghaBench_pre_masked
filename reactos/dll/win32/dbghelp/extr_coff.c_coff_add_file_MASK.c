
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct CoffFileSet {int nfiles; int nfiles_alloc; struct CoffFile* files; } ;
struct CoffFile {int startaddr; int linetab_offset; scalar_t__ neps_alloc; scalar_t__ neps; int * entries; scalar_t__ linecnt; int compiland; scalar_t__ endaddr; } ;


 int FUNC_0 () ;
 struct CoffFile* FUNC_1 (int ,int ,int) ;
 struct CoffFile* FUNC_2 (int ,int ,struct CoffFile*,int) ;
 int FUNC_3 (struct module*,int *,char const*) ;
 int FUNC_4 (struct module*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct CoffFileSet* VAR_0, struct module* VAR_1,
                         const char* VAR_2)
{
    struct CoffFile* VAR_3;

    if (VAR_0->nfiles + 1 >= VAR_0->nfiles_alloc)
    {
        if (VAR_0->files)
        {
            VAR_0->nfiles_alloc *= 2;
            VAR_0->files = FUNC_2(FUNC_0(), 0, VAR_0->files,
                                            VAR_0->nfiles_alloc * sizeof(struct CoffFile));
        }
        else
        {
            VAR_0->nfiles_alloc = 16;
            VAR_0->files = FUNC_1(FUNC_0(), 0,
                                          VAR_0->nfiles_alloc * sizeof(struct CoffFile));
        }
    }
    VAR_3 = VAR_0->files + VAR_0->nfiles;
    VAR_3->startaddr = 0xffffffff;
    VAR_3->endaddr = 0;
    VAR_3->compiland = FUNC_4(VAR_1, 0,
                                         FUNC_3(VAR_1, ((void*)0), VAR_2));
    VAR_3->linetab_offset = -1;
    VAR_3->linecnt = 0;
    VAR_3->entries = ((void*)0);
    VAR_3->neps = VAR_3->neps_alloc = 0;

    return VAR_0->nfiles++;
}
