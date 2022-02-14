
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct NBNameCache {int cs; } ;
typedef char UCHAR ;
struct TYPE_3__ {int * entry; } ;
typedef TYPE_1__ NBNameCacheNode ;
typedef int NBNameCacheEntry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__** FUNC_2 (struct NBNameCache*,char const*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*,int) ;

const NBNameCacheEntry *FUNC_4(struct NBNameCache *VAR_1,
 const UCHAR VAR_2[VAR_0])
{
    const NBNameCacheEntry *VAR_3;
    UCHAR VAR_4[VAR_0];

    FUNC_3(VAR_4, VAR_2, VAR_0 - 1);
    VAR_4[VAR_0 - 1] = '\0';
    if (VAR_1)
    {
        NBNameCacheNode **VAR_5;

        FUNC_0(&VAR_1->cs);
        VAR_5 = FUNC_2(VAR_1, (const char *)VAR_2);
        if (VAR_5)
            VAR_3 = (*VAR_5)->entry;
        else
            VAR_3 = ((void*)0);
        FUNC_1(&VAR_1->cs);
    }
    else
        VAR_3 = ((void*)0);
    return VAR_3;
}
