
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
struct TYPE_15__ {scalar_t__ Data; } ;
typedef TYPE_2__ cmsStage ;
struct TYPE_16__ {int (* Read ) (int ,TYPE_3__*,int*,int,int) ;int (* Seek ) (int ,TYPE_3__*,int) ;} ;
typedef TYPE_3__ cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_14__ {int * T; } ;
struct TYPE_17__ {int nEntries; TYPE_1__ Tab; } ;
typedef TYPE_4__ _cmsStageCLutData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,TYPE_3__*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,char*,int) ;
 TYPE_2__* FUNC_4 (int ,int*,int,int,int *) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (struct _cms_typehandler_struct*) ;
 int FUNC_7 (int ,TYPE_3__*,int) ;
 int FUNC_8 (int ,TYPE_3__*,int*,int,int) ;
 int FUNC_9 (int ,TYPE_3__*,int*,int,int) ;

__attribute__((used)) static
cmsStage* FUNC_10(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4,
                   cmsUInt32Number VAR_5, cmsUInt32Number VAR_6, cmsUInt32Number VAR_7)
{
    cmsUInt8Number VAR_8[VAR_1];
    cmsUInt32Number VAR_9[VAR_1], VAR_10;
    cmsUInt8Number VAR_11;
    cmsStage* VAR_12;
    _cmsStageCLutData* VAR_13;
    FUNC_6(VAR_3);

    if (!VAR_4 -> Seek(VAR_2, VAR_4, VAR_5)) return ((void*)0);
    if (VAR_4 -> Read(VAR_2, VAR_4, VAR_8, VAR_1, 1) != 1) return ((void*)0);


    for (VAR_10=0; VAR_10 < VAR_1; VAR_10++) {

        if (VAR_8[VAR_10] == 1) return ((void*)0);
        VAR_9[VAR_10] = VAR_8[VAR_10];
    }

    if (!FUNC_2(VAR_2, VAR_4, &VAR_11)) return ((void*)0);

    if (!FUNC_2(VAR_2, VAR_4, ((void*)0))) return ((void*)0);
    if (!FUNC_2(VAR_2, VAR_4, ((void*)0))) return ((void*)0);
    if (!FUNC_2(VAR_2, VAR_4, ((void*)0))) return ((void*)0);

    VAR_12 = FUNC_4(VAR_2, VAR_9, VAR_6, VAR_7, ((void*)0));
    if (VAR_12 == ((void*)0)) return ((void*)0);

    VAR_13 = (_cmsStageCLutData*) VAR_12 ->Data;


    if (VAR_11 == 1) {

        cmsUInt8Number VAR_14;

        for (VAR_10=0; VAR_10 < VAR_13 ->nEntries; VAR_10++) {

            if (VAR_4 ->Read(VAR_2, VAR_4, &VAR_14, sizeof(cmsUInt8Number), 1) != 1) {
                FUNC_5(VAR_2, VAR_12);
                return ((void*)0);
            }
            VAR_13 ->Tab.T[VAR_10] = FUNC_0(VAR_14);
        }

    }
    else
        if (VAR_11 == 2) {

            if (!FUNC_1(VAR_2, VAR_4, VAR_13->nEntries, VAR_13 ->Tab.T)) {
                FUNC_5(VAR_2, VAR_12);
                return ((void*)0);
            }
        }
        else {
            FUNC_5(VAR_2, VAR_12);
            FUNC_3(VAR_2, VAR_0, "Unknown precision of '%d'", VAR_11);
            return ((void*)0);
        }

    return VAR_12;
}
