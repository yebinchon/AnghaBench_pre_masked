
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int lookup_count; int * lookups; } ;
typedef TYPE_1__ LoadedFeature ;


 int VAR_0 ;
 int FUNC_0 (void const*,int ,int *,unsigned int,int,int*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, LoadedFeature *VAR_2,
        WORD *VAR_3, unsigned int VAR_4, int VAR_5, int *VAR_6)
{
    int VAR_7;
    int VAR_8 = VAR_0;

    FUNC_1("%i lookups\n", VAR_2->lookup_count);
    for (VAR_7 = 0; VAR_7 < VAR_2->lookup_count; VAR_7++)
    {
        VAR_8 = FUNC_0(VAR_1, VAR_2->lookups[VAR_7], VAR_3, VAR_4, VAR_5, VAR_6);
        if (VAR_8 != VAR_0)
            break;
    }
    if (VAR_8 == VAR_0)
        FUNC_1("lookups found no glyphs\n");
    else
    {
        int VAR_9;
        VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
        if (VAR_9!=VAR_0)
            VAR_8 = VAR_9;
    }
    return VAR_8;
}
