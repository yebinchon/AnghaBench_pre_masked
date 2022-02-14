
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tag; } ;
struct TYPE_5__ {scalar_t__ language_count; TYPE_2__* languages; int languages_size; } ;
typedef int OPENTYPE_TAG ;
typedef TYPE_1__ LoadedScript ;
typedef TYPE_2__ LoadedLanguage ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void**,int *,scalar_t__,int) ;

__attribute__((used)) static LoadedLanguage *FUNC_2(LoadedScript *VAR_0, OPENTYPE_TAG VAR_1)
{
    LoadedLanguage *VAR_2;

    if (!FUNC_1((void **)&VAR_0->languages, &VAR_0->languages_size,
            VAR_0->language_count + 1, sizeof(*VAR_0->languages)))
    {
        FUNC_0("Failed to grow languages array.\n");
        return ((void*)0);
    }

    VAR_2 = &VAR_0->languages[VAR_0->language_count++];
    VAR_2->tag = VAR_1;

    return VAR_2;
}
