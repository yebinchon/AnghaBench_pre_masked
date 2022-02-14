
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int cmsMLU ;
typedef int cmsIOHANDLER ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,char*,...) ;
 int FUNC_2 (int ,int *,int ,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static
void FUNC_6(cmsContext VAR_4, cmsIOHANDLER* VAR_5, const char* VAR_6, cmsHPROFILE VAR_7)
{
    time_t VAR_8;
    cmsMLU *VAR_9, *VAR_10;
    char VAR_11[256], VAR_12[256];

    FUNC_5(&VAR_8);

    VAR_9 = (cmsMLU*) FUNC_3(VAR_4, VAR_7, VAR_3);
    VAR_10 = (cmsMLU*) FUNC_3(VAR_4, VAR_7, VAR_2);

    VAR_11[0] = VAR_11[255] = 0;
    VAR_12[0] = VAR_12[255] = 0;

    if (VAR_9 != ((void*)0)) FUNC_2(VAR_4, VAR_9, VAR_1, VAR_0, VAR_11, 255);
    if (VAR_10 != ((void*)0)) FUNC_2(VAR_4, VAR_10, VAR_1, VAR_0, VAR_12, 255);

    FUNC_1(VAR_4, VAR_5, "%%!PS-Adobe-3.0\n");
    FUNC_1(VAR_4, VAR_5, "%%\n");
    FUNC_1(VAR_4, VAR_5, "%% %s\n", VAR_6);
    FUNC_1(VAR_4, VAR_5, "%% Source: %s\n", FUNC_0(VAR_11));
    FUNC_1(VAR_4, VAR_5, "%%         %s\n", FUNC_0(VAR_12));
    FUNC_1(VAR_4, VAR_5, "%% Created: %s", FUNC_4(&VAR_8));
    FUNC_1(VAR_4, VAR_5, "%%\n");
    FUNC_1(VAR_4, VAR_5, "%%%%BeginResource\n");

}
