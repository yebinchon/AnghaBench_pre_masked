
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char*,int const) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(const BYTE *VAR_0, int VAR_1, const BYTE *VAR_2, int VAR_3)
{
    char VAR_4[512], *VAR_5;
    int VAR_6;

    VAR_6 = VAR_1 == VAR_3 && !FUNC_0(VAR_0, VAR_2, VAR_3);
    FUNC_1(VAR_6, "Unexpected output\n");
    if(VAR_6)
        return;

    for(VAR_6=0, VAR_5=VAR_4; VAR_6<VAR_1; VAR_6++)
        VAR_5 += FUNC_2(VAR_5, "%x ", VAR_0[VAR_6]);
    FUNC_3("Got: %s\n", VAR_4);
    for(VAR_6=0, VAR_5=VAR_4; VAR_6<VAR_3; VAR_6++)
        VAR_5 += FUNC_2(VAR_5, "%x ", VAR_2[VAR_6]);
    FUNC_3("Exp: %s\n", VAR_4);
}
