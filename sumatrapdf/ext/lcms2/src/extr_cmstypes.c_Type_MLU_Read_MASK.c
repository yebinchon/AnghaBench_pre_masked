
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_6__ {int UsedEntries; int PoolSize; int PoolUsed; int * MemPool; TYPE_1__* Entries; } ;
typedef TYPE_2__ cmsMLU ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int _cmsTagBase ;
struct TYPE_5__ {int Len; int StrW; int Country; int Language; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (int ,int *,int,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
void *FUNC_8(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number* VAR_4, cmsUInt32Number VAR_5)
{
    cmsMLU* VAR_6;
    cmsUInt32Number VAR_7, VAR_8, VAR_9;
    cmsUInt32Number VAR_10;
    cmsUInt32Number VAR_11, VAR_12;
    cmsUInt32Number VAR_13;
    wchar_t* VAR_14;
    cmsUInt32Number VAR_15, VAR_16, VAR_17;
    FUNC_7(VAR_2);

    *VAR_4 = 0;
    if (!FUNC_2(VAR_1, VAR_3, &VAR_7)) return ((void*)0);
    if (!FUNC_2(VAR_1, VAR_3, &VAR_8)) return ((void*)0);

    if (VAR_8 != 12) {

        FUNC_6(VAR_1, VAR_0, "multiLocalizedUnicodeType of len != 12 is not supported.");
        return ((void*)0);
    }

    VAR_6 = FUNC_4(VAR_1, VAR_7);
    if (VAR_6 == ((void*)0)) return ((void*)0);

    VAR_6 ->UsedEntries = VAR_7;

    VAR_10 = 12 * VAR_7 + sizeof(_cmsTagBase);
    VAR_17 = 0;

    for (VAR_13=0; VAR_13 < VAR_7; VAR_13++) {

        if (!FUNC_1(VAR_1, VAR_3, &VAR_6 ->Entries[VAR_13].Language)) goto Error;
        if (!FUNC_1(VAR_1, VAR_3, &VAR_6 ->Entries[VAR_13].Country)) goto Error;


        if (!FUNC_2(VAR_1, VAR_3, &VAR_11)) goto Error;
        if (!FUNC_2(VAR_1, VAR_3, &VAR_12)) goto Error;


        if (VAR_12 < (VAR_10 + 8)) goto Error;
        if (((VAR_12 + VAR_11) < VAR_11) || ((VAR_12 + VAR_11) > VAR_5 + 8)) goto Error;


        VAR_15 = VAR_12 - VAR_10 - 8;


        VAR_6 ->Entries[VAR_13].Len = (VAR_11 * sizeof(wchar_t)) / sizeof(cmsUInt16Number);
        VAR_6 ->Entries[VAR_13].StrW = (VAR_15 * sizeof(wchar_t)) / sizeof(cmsUInt16Number);


        VAR_16 = VAR_15 + VAR_11;
        if (VAR_16 > VAR_17)
            VAR_17 = VAR_16;
    }


    VAR_5 = (VAR_17 * sizeof(wchar_t)) / sizeof(cmsUInt16Number);
    if (VAR_5 == 0)
    {
        VAR_14 = ((void*)0);
        VAR_9 = 0;

    }
    else
    {
        VAR_14 = (wchar_t*) FUNC_0(VAR_1, VAR_5);
        if (VAR_14 == ((void*)0)) goto Error;
        VAR_9 = VAR_5 / sizeof(wchar_t);
        if (!FUNC_3(VAR_1, VAR_3, VAR_9, VAR_14)) goto Error;
    }

    VAR_6 ->MemPool = VAR_14;
    VAR_6 ->PoolSize = VAR_5;
    VAR_6 ->PoolUsed = VAR_5;

    *VAR_4 = 1;
    return (void*) VAR_6;

Error:
    if (VAR_6) FUNC_5(VAR_1, VAR_6);
    return ((void*)0);
}
