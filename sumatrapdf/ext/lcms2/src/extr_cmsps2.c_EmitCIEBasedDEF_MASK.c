
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_9__ {struct TYPE_9__* Next; } ;
typedef TYPE_1__ cmsStage ;
struct TYPE_10__ {TYPE_1__* Elements; } ;
typedef TYPE_2__ cmsPipeline ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
typedef int cmsCIEXYZ ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,TYPE_1__*,char const*,char const*,char const*,char const*,int ,int ) ;
 int FUNC_5 (int ,int *,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*) ;

__attribute__((used)) static
int FUNC_10(cmsContext VAR_3, cmsIOHANDLER* VAR_4, cmsPipeline* VAR_5, cmsUInt32Number VAR_6, cmsCIEXYZ* VAR_7)
{
    const char* VAR_8;
    const char* VAR_9;
    const char* VAR_10, *VAR_11;
    cmsStage* VAR_12;

    VAR_12 = VAR_5 ->Elements;

    switch (FUNC_7(VAR_3, VAR_12)) {
    case 3:

            FUNC_5(VAR_3, VAR_4, "[ /CIEBasedDEF\n");
            VAR_8 ="<";
            VAR_9= ">\n";
            VAR_10 = VAR_11 = "";
            break;
    case 4:
            FUNC_5(VAR_3, VAR_4, "[ /CIEBasedDEFG\n");
            VAR_8 = "[";
            VAR_9 = "]\n";
            VAR_10 = "<";
            VAR_11 = ">\n";
            break;
    default:
            return 0;

    }

    FUNC_5(VAR_3, VAR_4, "<<\n");

    if (FUNC_9(VAR_3, VAR_12) == VAR_2) {

        FUNC_5(VAR_3, VAR_4, "/DecodeDEF [ ");
        FUNC_2(VAR_3, VAR_4, FUNC_8(VAR_3, VAR_12), FUNC_6(VAR_12));
        FUNC_5(VAR_3, VAR_4, "]\n");

        VAR_12 = VAR_12 ->Next;
    }

    if (FUNC_9(VAR_3, VAR_12) == VAR_1) {

            FUNC_5(VAR_3, VAR_4, "/Table ");
            FUNC_4(VAR_3, VAR_4, VAR_12, VAR_8, VAR_9, VAR_10, VAR_11, VAR_0, (cmsColorSpaceSignature) 0);
            FUNC_5(VAR_3, VAR_4, "]\n");
    }

    FUNC_1(VAR_3, VAR_4);
    FUNC_3(VAR_3, VAR_4, VAR_7);
    FUNC_0(VAR_3, VAR_4, VAR_6);

    FUNC_5(VAR_3, VAR_4, "   >>\n");
    FUNC_5(VAR_3, VAR_4, "]\n");

    return 1;
}
