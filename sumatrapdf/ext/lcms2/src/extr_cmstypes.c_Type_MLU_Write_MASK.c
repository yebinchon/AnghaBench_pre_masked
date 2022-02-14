
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_4__ {size_t UsedEntries; int PoolUsed; scalar_t__ MemPool; TYPE_1__* Entries; } ;
typedef TYPE_2__ cmsMLU ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int _cmsTagBase ;
struct TYPE_3__ {size_t Len; size_t StrW; int Country; int Language; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int ,int *,int,int *) ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsMLU* VAR_7 =(cmsMLU*) VAR_5;
    cmsUInt32Number VAR_8;
    cmsUInt32Number VAR_9, VAR_10;
    cmsUInt32Number VAR_11;

    if (VAR_5 == ((void*)0)) {


          if (!FUNC_1(VAR_2, VAR_4, 0)) return VAR_0;
          if (!FUNC_1(VAR_2, VAR_4, 12)) return VAR_0;
          return VAR_1;
    }

    if (!FUNC_1(VAR_2, VAR_4, VAR_7 ->UsedEntries)) return VAR_0;
    if (!FUNC_1(VAR_2, VAR_4, 12)) return VAR_0;

    VAR_8 = 12 * VAR_7 ->UsedEntries + sizeof(_cmsTagBase);

    for (VAR_11=0; VAR_11 < VAR_7 ->UsedEntries; VAR_11++) {

        VAR_9 = VAR_7 ->Entries[VAR_11].Len;
        VAR_10 = VAR_7 ->Entries[VAR_11].StrW;

        VAR_9 = (VAR_9 * sizeof(cmsUInt16Number)) / sizeof(wchar_t);
        VAR_10 = (VAR_10 * sizeof(cmsUInt16Number)) / sizeof(wchar_t) + VAR_8 + 8;

        if (!FUNC_0(VAR_2, VAR_4, VAR_7 ->Entries[VAR_11].Language)) return VAR_0;
        if (!FUNC_0(VAR_2, VAR_4, VAR_7 ->Entries[VAR_11].Country)) return VAR_0;
        if (!FUNC_1(VAR_2, VAR_4, VAR_9)) return VAR_0;
        if (!FUNC_1(VAR_2, VAR_4, VAR_10)) return VAR_0;
    }

    if (!FUNC_2(VAR_2, VAR_4, VAR_7 ->PoolUsed / sizeof(wchar_t), (wchar_t*) VAR_7 ->MemPool)) return VAR_0;

    return VAR_1;

    FUNC_3(VAR_6);
    FUNC_3(VAR_3);
}
