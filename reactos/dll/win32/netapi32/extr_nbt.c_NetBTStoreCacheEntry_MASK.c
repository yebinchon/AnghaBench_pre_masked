
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NBNameCache {int dummy; } ;
typedef int UCHAR ;
typedef int NBNameCacheEntry ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct NBNameCache*,int *) ;
 struct NBNameCache* FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static UCHAR FUNC_4(struct NBNameCache **VAR_4,
 NBNameCacheEntry *VAR_5)
{
    UCHAR VAR_6;

    if (!VAR_4) return VAR_0;
    if (!VAR_5) return VAR_0;

    if (!*VAR_4)
        *VAR_4 = FUNC_3(FUNC_0(), VAR_3);
    if (*VAR_4)
        VAR_6 = FUNC_2(*VAR_4, VAR_5)
         ? VAR_1 : VAR_2;
    else
    {
        FUNC_1(FUNC_0(), 0, VAR_5);
        VAR_6 = VAR_2;
    }
    return VAR_6;
}
