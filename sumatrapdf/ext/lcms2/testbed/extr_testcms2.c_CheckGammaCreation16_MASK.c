
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;


 int FUNC_0 (int *,double) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int * FUNC_3 (int ,double) ;
 scalar_t__ FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsToneCurve* VAR_0 = FUNC_3(FUNC_1(), 1.0);
    cmsInt32Number VAR_1;
    cmsUInt16Number VAR_2, VAR_3;

    for (VAR_1=0; VAR_1 < 0xffff; VAR_1++) {

        VAR_2 = (cmsUInt16Number) VAR_1;
        VAR_3 = FUNC_4(FUNC_1(), VAR_0, VAR_2);
        if (VAR_2 != VAR_3) {
            FUNC_2("(lin gamma): Must be %x, But is %x : ", VAR_2, VAR_3);
            FUNC_5(FUNC_1(), VAR_0);
            return 0;
        }
    }

    if (!FUNC_0(VAR_0, 1.0)) return 0;

    FUNC_5(FUNC_1(), VAR_0);
    return 1;

}
