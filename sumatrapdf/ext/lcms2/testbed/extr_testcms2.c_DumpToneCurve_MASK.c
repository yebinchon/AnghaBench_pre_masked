
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_3__ {int nEntries; int* Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsHANDLE ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (int ,int ,int,char*) ;
 int FUNC_5 (int ,int ,int,int,char*) ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (char*,char*,int) ;

void FUNC_8(cmsToneCurve* VAR_0, const char* VAR_1)
{
    cmsHANDLE VAR_2;
    cmsUInt32Number VAR_3;

    VAR_2 = FUNC_1(FUNC_0());

    FUNC_6(FUNC_0(), VAR_2, "NUMBER_OF_FIELDS", 2);
    FUNC_6(FUNC_0(), VAR_2, "NUMBER_OF_SETS", VAR_0 ->nEntries);

    FUNC_4(FUNC_0(), VAR_2, 0, "SAMPLE_ID");
    FUNC_4(FUNC_0(), VAR_2, 1, "VALUE");

    for (VAR_3=0; VAR_3 < VAR_0 ->nEntries; VAR_3++) {
        char VAR_4[30];

        FUNC_7(VAR_4, "%u", VAR_3);
        FUNC_5(FUNC_0(), VAR_2, VAR_3, 0, VAR_4);
        FUNC_7(VAR_4, "0x%x", VAR_0 ->Table16[VAR_3]);
        FUNC_5(FUNC_0(), VAR_2, VAR_3, 1, VAR_4);
    }

    FUNC_3(FUNC_0(), VAR_2, VAR_1);
    FUNC_2(FUNC_0(), VAR_2);
}
