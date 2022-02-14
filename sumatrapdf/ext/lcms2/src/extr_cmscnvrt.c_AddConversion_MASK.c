
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsVEC3 ;
typedef int cmsPipeline ;
typedef int cmsMAT3 ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int ,int ) ;


 int FUNC_4 (int ,int,int,int *,int *) ;

__attribute__((used)) static
cmsBool FUNC_5(cmsContext VAR_3, cmsPipeline* VAR_4, cmsColorSpaceSignature VAR_5, cmsColorSpaceSignature VAR_6, cmsMAT3* VAR_7, cmsVEC3* VAR_8)
{
    cmsFloat64Number* VAR_9 = (cmsFloat64Number*) VAR_7;
    cmsFloat64Number* VAR_10 = (cmsFloat64Number*) VAR_8;


    switch (VAR_5) {

    case 128:

        switch (VAR_6) {

        case 128:
            if (!FUNC_0(VAR_3, VAR_7, VAR_8) &&
                !FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_4(VAR_3, 3, 3, VAR_9, VAR_10)))
                return VAR_0;
            break;

        case 129:
            if (!FUNC_0(VAR_3, VAR_7, VAR_8) &&
                !FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_4(VAR_3, 3, 3, VAR_9, VAR_10)))
                return VAR_0;
            if (!FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_2(VAR_3)))
                return VAR_0;
            break;

        default:
            return VAR_0;
        }
        break;

    case 129:

        switch (VAR_6) {

        case 128:

            if (!FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_1(VAR_3)))
                return VAR_0;
            if (!FUNC_0(VAR_3, VAR_7, VAR_8) &&
                !FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_4(VAR_3, 3, 3, VAR_9, VAR_10)))
                return VAR_0;
            break;

        case 129:

            if (!FUNC_0(VAR_3, VAR_7, VAR_8)) {
                if (!FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_1(VAR_3)) ||
                    !FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_4(VAR_3, 3, 3, VAR_9, VAR_10)) ||
                    !FUNC_3(VAR_3, VAR_4, VAR_2, FUNC_2(VAR_3)))
                    return VAR_0;
            }
            break;

        default:
            return VAR_0;
        }
        break;


    default:
        if (VAR_5 != VAR_6) return VAR_0;
        break;
    }

    return VAR_1;
}
