
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t cmsUInt32Number ;
typedef int cmsContext ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int,size_t*,char**) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_2(cmsContext VAR_2)
{
    cmsUInt32Number VAR_3[200];
    char* VAR_4[200];
    cmsUInt32Number VAR_5, VAR_6;

    FUNC_1(VAR_1, "%ct<n> rendering intent:\n\n", VAR_0);

    VAR_5 = FUNC_0(VAR_2, 200, VAR_3, VAR_4);

    for (VAR_6=0; VAR_6 < VAR_5; VAR_6++) {
        FUNC_1(VAR_1, "\t%zu - %s\n", VAR_3[VAR_6], VAR_4[VAR_6]);
    }
    FUNC_1(VAR_1, "\n");
}
