
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int,char*,int) ;
 int FUNC_6 (int ,char const*,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,int,int,int *) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static
void FUNC_11(const char* VAR_0, const char* VAR_1)
{
    cmsHPROFILE VAR_2;
    cmsUInt32Number VAR_3;
    char* VAR_4;
    cmsUInt32Number VAR_5 = 0;
    cmsContext VAR_6 = FUNC_0();


    if (VAR_0 == ((void*)0))
        VAR_2 = FUNC_4(FUNC_0(), ((void*)0));
    else
        VAR_2 = FUNC_6(FUNC_0(), VAR_0, "r");

    VAR_3 = FUNC_5(FUNC_0(), VAR_2, 0, VAR_5, ((void*)0), 0);
    if (VAR_3 == 0) return;

    VAR_4 = (char*) FUNC_2(VAR_6, VAR_3 + 1);
    FUNC_5(FUNC_0(), VAR_2, 0, VAR_5, VAR_4, VAR_3);
    VAR_4[VAR_3] = 0;

    if (VAR_1 != ((void*)0)) {
        FILE* VAR_7 = FUNC_8(VAR_1, "wb");
        FUNC_9(VAR_4, VAR_3, 1, VAR_7);
        FUNC_7(VAR_7);
    }

    FUNC_1(VAR_6, VAR_4);
    FUNC_3(FUNC_0(), VAR_2);
    if (VAR_1 != ((void*)0))
        FUNC_10(VAR_1);
}
