
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__* PULONG ;
typedef char* LPSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;

BOOLEAN FUNC_3(LPSTR VAR_2,PULONG VAR_3,PULONG VAR_4)
{
    LPSTR VAR_5;
    char VAR_6[64];
    LPSTR VAR_7;
    static char VAR_8[128];
    static char VAR_9[128];


    FUNC_2(VAR_6,VAR_2);
    VAR_7 = VAR_6;

    FUNC_0((0,"ConvertTokenToModuleAndName(%s)\n",VAR_7));

    VAR_5 = FUNC_1(VAR_7,'!');
    if(VAR_5)
    {
        FUNC_0((0,"ConvertTokenToModuleAndName(): module!symbol syntax detected\n"));

        *VAR_5 = 0;

        VAR_5++;
        FUNC_0((0,"ConvertTokenToModuleAndName(): module = %s symbol = %s\n",VAR_7,VAR_5));
        FUNC_2(VAR_8,VAR_7);
        FUNC_2(VAR_9,VAR_5);
        *VAR_3 = (ULONG)VAR_8;
        *VAR_4 = (ULONG)VAR_9;
        return VAR_1;

    }
    return VAR_0;
}
