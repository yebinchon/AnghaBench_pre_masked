
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int * cmsHPROFILE ;
typedef int cmsContext ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 size_t FUNC_2 (int ,int *,int ,int ,char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;

__attribute__((used)) static
void FUNC_6(cmsContext VAR_3)
{
 cmsHPROFILE VAR_4 = FUNC_0(VAR_3, VAR_2);
 size_t VAR_5;
 char* VAR_6;

 if (VAR_4 == ((void*)0)) return;

 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_0, 0, ((void*)0), 0);
 if (VAR_5 == 0) return;

    VAR_6 = (char*) FUNC_5(VAR_5 + 1);
    if (VAR_6 != ((void*)0)) {

        FUNC_2(VAR_3, VAR_4, VAR_0, 0, VAR_6, (cmsUInt32Number) VAR_5);
        VAR_6[VAR_5] = 0;

        FUNC_3(VAR_1, "%s", VAR_6);

        FUNC_4(VAR_6);
    }

 FUNC_1(VAR_3, VAR_4);
}
