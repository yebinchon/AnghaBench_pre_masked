
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef char cmsUInt16Number ;
typedef void cmsMLU ;
struct TYPE_9__ {int (* Read ) (int ,TYPE_1__*,char*,int,int) ;} ;
typedef TYPE_1__ cmsIOHANDLER ;
typedef int cmsContext ;


 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_1__*,char*) ;
 int FUNC_3 (int ,TYPE_1__*,int*) ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 void* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ,void*,int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct _cms_typehandler_struct*) ;
 int FUNC_9 (int ,TYPE_1__*,char*,int,int) ;
 int FUNC_10 (int ,TYPE_1__*,char*,int,int) ;
 int FUNC_11 (int ,TYPE_1__*,char*,int,int) ;

__attribute__((used)) static
void *FUNC_12(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, cmsUInt32Number* VAR_5, cmsUInt32Number VAR_6)
{
    char* VAR_7 = ((void*)0);
    cmsMLU* VAR_8 = ((void*)0);
    cmsUInt32Number VAR_9;
    cmsUInt32Number VAR_10, VAR_11, VAR_12;
    cmsUInt16Number VAR_13, VAR_14;
    cmsUInt8Number VAR_15;
    FUNC_8(VAR_3);

    *VAR_5 = 0;


    if (VAR_6 < sizeof(cmsUInt32Number)) return ((void*)0);


    if (!FUNC_3(VAR_2, VAR_4, &VAR_9)) return ((void*)0);
    VAR_6 -= sizeof(cmsUInt32Number);


    if (VAR_6 < VAR_9) return ((void*)0);


    VAR_8 = FUNC_5(VAR_2, 1);
    if (VAR_8 == ((void*)0)) return ((void*)0);


    VAR_7 = (char*) FUNC_1(VAR_2, VAR_9 + 1);
    if (VAR_7 == ((void*)0)) goto Error;


    if (VAR_4 ->Read(VAR_2, VAR_4, VAR_7, sizeof(char), VAR_9) != VAR_9) goto Error;
    VAR_6 -= VAR_9;


    VAR_7[VAR_9] = 0;


    if (!FUNC_7(VAR_2, VAR_8, VAR_1, VAR_0, VAR_7)) goto Error;
    FUNC_0(VAR_2, (void*) VAR_7);
    VAR_7 = ((void*)0);


    if (VAR_6 < 2* sizeof(cmsUInt32Number)) goto Done;
    if (!FUNC_3(VAR_2, VAR_4, &VAR_11)) goto Done;
    if (!FUNC_3(VAR_2, VAR_4, &VAR_12)) goto Done;
    VAR_6 -= 2* sizeof(cmsUInt32Number);

    if (VAR_6 < VAR_12*sizeof(cmsUInt16Number)) goto Done;

    for (VAR_10=0; VAR_10 < VAR_12; VAR_10++) {
        if (!VAR_4 ->Read(VAR_2, VAR_4, &VAR_14, sizeof(cmsUInt16Number), 1)) goto Done;
    }
    VAR_6 -= VAR_12*sizeof(cmsUInt16Number);





    if (VAR_6 >= sizeof(cmsUInt16Number) + sizeof(cmsUInt8Number) + 67) {

        if (!FUNC_2(VAR_2, VAR_4, &VAR_13)) goto Done;
        if (!FUNC_4(VAR_2, VAR_4, &VAR_15)) goto Done;


        for (VAR_10=0; VAR_10 < 67; VAR_10++) {
            if (!VAR_4 ->Read(VAR_2, VAR_4, &VAR_14, sizeof(cmsUInt8Number), 1)) goto Error;
        }
    }

Done:

    *VAR_5 = 1;
    return VAR_8;

Error:
    if (VAR_7) FUNC_0(VAR_2, (void*) VAR_7);
    if (VAR_8) FUNC_6(VAR_2, VAR_8);
    return ((void*)0);
}
