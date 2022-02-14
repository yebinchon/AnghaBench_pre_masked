
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SdbStringHashTable {int dummy; } ;
struct SdbHashEntry {int Tagid; } ;
typedef int WCHAR ;
typedef int TAGID ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct SdbStringHashTable*,struct SdbHashEntry**,int const*,int ) ;
 struct SdbStringHashTable* FUNC_1 () ;
 int FUNC_2 (char*) ;
 struct SdbHashEntry** FUNC_3 (struct SdbStringHashTable*,int const*) ;

BOOL FUNC_4(struct SdbStringHashTable** VAR_1, const WCHAR* VAR_2, TAGID* VAR_3)
{
    struct SdbHashEntry** VAR_4;

    if (!*VAR_1)
    {
        *VAR_1 = FUNC_1();
        if (!*VAR_1)
        {
            FUNC_2("Error creating hash table\n");
            return VAR_0;
        }
    }

    VAR_4 = FUNC_3(*VAR_1, VAR_2);
    if (*VAR_4)
    {
        *VAR_3 = (*VAR_4)->Tagid;
        return VAR_0;
    }
    return FUNC_0(*VAR_1, VAR_4, VAR_2, *VAR_3);
}
