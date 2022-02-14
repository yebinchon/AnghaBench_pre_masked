
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
struct TYPE_7__ {int nSegments; TYPE_1__* Segments; } ;
typedef TYPE_2__ cmsToneCurve ;
typedef int cmsTagTypeSignature ;
typedef int cmsTagSignature ;
typedef int cmsStage ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_6__ {scalar_t__ Type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct _cms_typehandler_struct*,int *,TYPE_2__*,int) ;
 int FUNC_1 (int ,struct _cms_typehandler_struct*,int *,TYPE_2__*,int) ;
 TYPE_2__** FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int) ;
 int VAR_2 ;


 int FUNC_6 (int ,int ,char*,char*) ;
 size_t FUNC_7 (int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_8(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, cmsTagTypeSignature VAR_6, cmsStage* VAR_7)
{
    cmsUInt32Number VAR_8, VAR_9;
    cmsTagTypeSignature VAR_10;
    cmsToneCurve** VAR_11;


    VAR_9 = FUNC_7(VAR_3, VAR_7);
    VAR_11 = FUNC_2(VAR_7);

    for (VAR_8=0; VAR_8 < VAR_9; VAR_8++) {


        VAR_10 = VAR_6;

        if ((VAR_11[VAR_8] ->nSegments == 0)||
            ((VAR_11[VAR_8]->nSegments == 2) && (VAR_11[VAR_8] ->Segments[1].Type == 0)) )
            VAR_10 = 129;
        else
        if (VAR_11[VAR_8] ->Segments[0].Type < 0)
            VAR_10 = 129;

        if (!FUNC_5(VAR_3, VAR_5, VAR_10)) return VAR_0;

        switch (VAR_10) {

            case 129:
                if (!FUNC_0(VAR_3, VAR_4, VAR_5, VAR_11[VAR_8], 1)) return VAR_0;
                break;

            case 128:
                if (!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_11[VAR_8], 1)) return VAR_0;
                break;

            default:
                {
                    char VAR_12[5];

                    FUNC_3(VAR_12, (cmsTagSignature) VAR_6);
                    FUNC_6(VAR_3, VAR_2, "Unknown curve type '%s'", VAR_12);
                }
                return VAR_0;
        }

        if (!FUNC_4(VAR_3, VAR_5)) return VAR_0;
    }


    return VAR_1;
}
