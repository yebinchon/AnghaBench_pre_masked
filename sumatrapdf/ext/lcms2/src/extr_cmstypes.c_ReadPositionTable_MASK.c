
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
struct TYPE_8__ {int (* Tell ) (int ,TYPE_1__*) ;int ReportedSize; int (* Seek ) (int ,TYPE_1__*,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int (* PositionTableEntryFn ) (int ,struct _cms_typehandler_struct*,TYPE_1__*,void*,int,int) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,TYPE_1__*,int*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;

__attribute__((used)) static
cmsBool FUNC_5(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3,
                              cmsIOHANDLER* VAR_4,
                              cmsUInt32Number VAR_5,
                              cmsUInt32Number VAR_6,
                              void *VAR_7,
                              PositionTableEntryFn VAR_8)
{
    cmsUInt32Number VAR_9;
    cmsUInt32Number *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    cmsUInt32Number VAR_12;

    VAR_12 = VAR_4->Tell(VAR_2, VAR_4);


    if (((VAR_4->ReportedSize - VAR_12) / (2 * sizeof(cmsUInt32Number))) < VAR_5)
        return VAR_0;


    VAR_10 = (cmsUInt32Number *) FUNC_0(VAR_2, VAR_5, sizeof(cmsUInt32Number));
    if (VAR_10 == ((void*)0)) goto Error;

    VAR_11 = (cmsUInt32Number *) FUNC_0(VAR_2, VAR_5, sizeof(cmsUInt32Number));
    if (VAR_11 == ((void*)0)) goto Error;

    for (VAR_9=0; VAR_9 < VAR_5; VAR_9++) {

        if (!FUNC_2(VAR_2, VAR_4, &VAR_10[VAR_9])) goto Error;
        if (!FUNC_2(VAR_2, VAR_4, &VAR_11[VAR_9])) goto Error;

        VAR_10[VAR_9] += VAR_6;
    }


    for (VAR_9=0; VAR_9 < VAR_5; VAR_9++) {

        if (!VAR_4 -> Seek(VAR_2, VAR_4, VAR_10[VAR_9])) goto Error;


        if (!VAR_8(VAR_2, VAR_3, VAR_4, VAR_7, VAR_9, VAR_11[VAR_9])) goto Error;
    }


    if (VAR_10 != ((void*)0)) FUNC_1(VAR_2, VAR_10);
    if (VAR_11 != ((void*)0)) FUNC_1(VAR_2, VAR_11);
    return VAR_1;

Error:
    if (VAR_10 != ((void*)0)) FUNC_1(VAR_2, VAR_10);
    if (VAR_11 != ((void*)0)) FUNC_1(VAR_2, VAR_11);
    return VAR_0;
}
