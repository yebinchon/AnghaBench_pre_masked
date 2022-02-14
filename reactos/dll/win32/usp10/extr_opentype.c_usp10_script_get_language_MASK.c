
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tag; } ;
struct TYPE_5__ {size_t language_count; TYPE_2__* languages; } ;
typedef scalar_t__ OPENTYPE_TAG ;
typedef TYPE_1__ LoadedScript ;
typedef TYPE_2__ LoadedLanguage ;



__attribute__((used)) static LoadedLanguage *FUNC_0(LoadedScript *VAR_0, OPENTYPE_TAG VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->language_count; ++VAR_2)
    {
        if (VAR_0->languages[VAR_2].tag == VAR_1)
            return &VAR_0->languages[VAR_2];
    }

    return ((void*)0);
}
