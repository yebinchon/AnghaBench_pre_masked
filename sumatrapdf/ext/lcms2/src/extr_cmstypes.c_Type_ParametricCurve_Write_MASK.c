
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef struct _cms_typehandler_struct* cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_4__ {int nSegments; TYPE_1__* Segments; } ;
typedef TYPE_2__ cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_3__ {int Type; int * Params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct _cms_typehandler_struct*) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, void* VAR_6, cmsUInt32Number VAR_7)
{
    cmsToneCurve* VAR_8 = (cmsToneCurve*) VAR_6;
    int VAR_9, VAR_10, VAR_11;
    static const int VAR_12[] = { 0, 1, 3, 4, 5, 7 };
    FUNC_3(VAR_4);

    VAR_11 = VAR_8 -> Segments[0].Type;

    if (VAR_8 ->nSegments > 1 || VAR_11 < 1) {

        FUNC_2(VAR_3, VAR_2, "Multisegment or Inverted parametric curves cannot be written");
        return VAR_0;
    }

    if (VAR_11 > 5) {
        FUNC_2(VAR_3, VAR_2, "Unsupported parametric curve");
        return VAR_0;
    }

    VAR_10 = VAR_12[VAR_11];

    if (!FUNC_1(VAR_3, VAR_5, (cmsUInt16Number) (VAR_8 ->Segments[0].Type - 1))) return VAR_0;
    if (!FUNC_1(VAR_3, VAR_5, 0)) return VAR_0;

    for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {

        if (!FUNC_0(VAR_3, VAR_5, VAR_8 -> Segments[0].Params[VAR_9])) return VAR_0;
    }

    return VAR_1;

    FUNC_3(VAR_7);
}
