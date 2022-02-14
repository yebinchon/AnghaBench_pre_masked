
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source_rb {unsigned int source; int entry; } ;
struct module {char* sources; int sources_used; int sources_alloc; int sources_offsets_tree; int pool; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,char*) ;
 char* FUNC_3 (int ,int ,char*,int) ;
 unsigned int FUNC_4 (int,int) ;
 int FUNC_5 (char*,char const*,int) ;
 struct source_rb* FUNC_6 (int *,int) ;
 struct module* VAR_0 ;
 unsigned int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,char const*,int *) ;

unsigned FUNC_11(struct module* VAR_1, const char* VAR_2, const char* VAR_3)
{
    unsigned VAR_4 = -1;
    const char* VAR_5;
    char* VAR_6 = ((void*)0);

    if (!VAR_3) return VAR_4;
    if (!VAR_2 || *VAR_3 == '/')
        VAR_5 = VAR_3;
    else
    {
        unsigned VAR_7 = FUNC_9(VAR_2);

        VAR_6 = FUNC_1(FUNC_0(), 0, VAR_7 + 1 + FUNC_9(VAR_3) + 1);
        if (!VAR_6) return VAR_4;
        VAR_5 = VAR_6;
        FUNC_8(VAR_6, VAR_2);
        if (VAR_6[VAR_7 - 1] != '/') VAR_6[VAR_7++] = '/';
        FUNC_8(&VAR_6[VAR_7], VAR_3);
    }
    VAR_0 = VAR_1;
    if (!VAR_1->sources || (VAR_4 = FUNC_7(VAR_5)) == (unsigned)-1)
    {
        char* VAR_8;
        int VAR_9 = FUNC_9(VAR_5) + 1;
        struct source_rb* VAR_10;

        if (VAR_1->sources_used + VAR_9 + 1 > VAR_1->sources_alloc)
        {
            if (!VAR_1->sources)
            {
                VAR_1->sources_alloc = (VAR_1->sources_used + VAR_9 + 1 + 255) & ~255;
                VAR_8 = FUNC_1(FUNC_0(), 0, VAR_1->sources_alloc);
            }
            else
            {
                VAR_1->sources_alloc = FUNC_4( VAR_1->sources_alloc * 2,
                                             (VAR_1->sources_used + VAR_9 + 1 + 255) & ~255 );
                VAR_8 = FUNC_3(FUNC_0(), 0, VAR_1->sources,
                                  VAR_1->sources_alloc);
            }
            if (!VAR_8) goto done;
            VAR_1->sources = VAR_8;
        }
        VAR_4 = VAR_1->sources_used;
        FUNC_5(VAR_1->sources + VAR_1->sources_used, VAR_5, VAR_9);
        VAR_1->sources_used += VAR_9;
        VAR_1->sources[VAR_1->sources_used] = '\0';
        if ((VAR_10 = FUNC_6(&VAR_1->pool, sizeof(*VAR_10))))
        {
            VAR_10->source = VAR_4;
            FUNC_10(&VAR_1->sources_offsets_tree, VAR_5, &VAR_10->entry);
        }
    }
done:
    FUNC_2(FUNC_0(), 0, VAR_6);
    return VAR_4;
}
