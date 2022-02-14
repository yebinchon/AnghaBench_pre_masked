
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {char* name; struct TYPE_7__* next; int * value; } ;
struct TYPE_6__ {char* name; TYPE_2__* key; struct TYPE_6__* next; } ;
typedef TYPE_1__ PROFILESECTION ;
typedef TYPE_2__ PROFILEKEY ;
typedef scalar_t__* LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (char*,scalar_t__*,int) ;

__attribute__((used)) static PROFILEKEY *FUNC_7( PROFILESECTION **VAR_0, LPCWSTR VAR_1,
                                 LPCWSTR VAR_2, BOOL VAR_3, BOOL VAR_4 )
{
    LPCWSTR VAR_5;
    int VAR_6 = 0, VAR_7 = 0;

    while (FUNC_3(*VAR_1)) VAR_1++;
    if (*VAR_1)
    {
        VAR_5 = VAR_1 + FUNC_5(VAR_1) - 1;
        while ((VAR_5 > VAR_1) && FUNC_3(*VAR_5)) VAR_5--;
        VAR_6 = VAR_5 - VAR_1 + 1;
    }

    while (FUNC_3(*VAR_2)) VAR_2++;
    if (*VAR_2)
    {
        VAR_5 = VAR_2 + FUNC_5(VAR_2) - 1;
        while ((VAR_5 > VAR_2) && FUNC_3(*VAR_5)) VAR_5--;
        VAR_7 = VAR_5 - VAR_2 + 1;
    }

    while (*VAR_0)
    {
        if (!FUNC_6((*VAR_0)->name, VAR_1, VAR_6) &&
            ((*VAR_0)->name)[VAR_6] == '\0')
        {
            PROFILEKEY **VAR_8 = &(*VAR_0)->key;

            while (*VAR_8)
            {





                if(!VAR_4)
                {
                    if ( (!(FUNC_6( (*VAR_8)->name, VAR_2, VAR_7 )))
                         && (((*VAR_8)->name)[VAR_7] == '\0') )
                        return *VAR_8;
                }
                VAR_8 = &(*VAR_8)->next;
            }
            if (!VAR_3) return ((void*)0);
            if (!(*VAR_8 = FUNC_1( FUNC_0(), 0, sizeof(PROFILEKEY) + FUNC_5(VAR_2) * sizeof(WCHAR) )))
                return ((void*)0);
            FUNC_4( (*VAR_8)->name, VAR_2 );
            (*VAR_8)->value = ((void*)0);
            (*VAR_8)->next = ((void*)0);
            return *VAR_8;
        }
        VAR_0 = &(*VAR_0)->next;
    }
    if (!VAR_3) return ((void*)0);
    *VAR_0 = FUNC_1( FUNC_0(), 0, sizeof(PROFILESECTION) + FUNC_5(VAR_1) * sizeof(WCHAR) );
    if(*VAR_0 == ((void*)0)) return ((void*)0);
    FUNC_4( (*VAR_0)->name, VAR_1 );
    (*VAR_0)->next = ((void*)0);
    if (!((*VAR_0)->key = FUNC_1( FUNC_0(), 0,
                                        sizeof(PROFILEKEY) + FUNC_5(VAR_2) * sizeof(WCHAR) )))
    {
        FUNC_2(FUNC_0(), 0, *VAR_0);
        return ((void*)0);
    }
    FUNC_4( (*VAR_0)->key->name, VAR_2 );
    (*VAR_0)->key->value = ((void*)0);
    (*VAR_0)->key->next = ((void*)0);
    return (*VAR_0)->key;
}
