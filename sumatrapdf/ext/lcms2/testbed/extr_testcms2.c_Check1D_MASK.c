
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
struct TYPE_6__ {int (* Lerp16 ) (int ,scalar_t__*,scalar_t__*,TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_1__ Interpolation; } ;
typedef TYPE_2__ cmsInterpParams ;
typedef int cmsInt32Number ;
typedef int cmsBool ;


 int FUNC_0 (int,scalar_t__*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_3 (int ,int,int,int,scalar_t__*,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,scalar_t__*,scalar_t__*,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_9(cmsInt32Number VAR_1, cmsBool VAR_2, cmsInt32Number VAR_3)
{
    cmsUInt32Number VAR_4;
    cmsUInt16Number VAR_5, VAR_6;
    cmsInterpParams* VAR_7;
    cmsUInt16Number* VAR_8;

    VAR_8 = (cmsUInt16Number*) FUNC_7(sizeof(cmsUInt16Number)* VAR_1);
    if (VAR_8 == ((void*)0)) return 0;

    VAR_7 = FUNC_3(FUNC_1(), VAR_1, 1, 1, VAR_8, VAR_0);
    if (VAR_7 == ((void*)0)) return 0;

    FUNC_0(VAR_1, VAR_8, VAR_2);

    for (VAR_4=0; VAR_4 <= 0xffff; VAR_4++) {

        VAR_5 = (cmsUInt16Number) VAR_4;
        VAR_6 = 0;

        VAR_7 ->Interpolation.Lerp16(FUNC_1(), &VAR_5, &VAR_6, VAR_7);

        if (VAR_2) VAR_6 = 0xffff - VAR_6;

        if (FUNC_5(VAR_6 - VAR_5) > VAR_3) {

            FUNC_2("(%dp): Must be %x, But is %x : ", VAR_1, VAR_5, VAR_6);
            FUNC_4(FUNC_1(), VAR_7);
            FUNC_6(VAR_8);
            return 0;
        }
    }

    FUNC_4(FUNC_1(), VAR_7);
    FUNC_6(VAR_8);
    return 1;
}
