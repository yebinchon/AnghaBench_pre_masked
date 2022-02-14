
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t cmsUInt32Number ;


 int FUNC_0 () ;
 size_t FUNC_1 (int ,int,size_t*,char**) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static
void FUNC_3(void)
{
    cmsUInt32Number VAR_0, VAR_1;
    cmsUInt32Number VAR_2[200];
    char* VAR_3[200];

    VAR_0 = FUNC_1(FUNC_0(), 200, VAR_2, VAR_3);

    FUNC_2("Supported intents:\n");
    for (VAR_1=0; VAR_1 < VAR_0; VAR_1++) {
        FUNC_2("\t%u - %s\n", VAR_2[VAR_1], VAR_3[VAR_1]);
    }
    FUNC_2("\n");
}
