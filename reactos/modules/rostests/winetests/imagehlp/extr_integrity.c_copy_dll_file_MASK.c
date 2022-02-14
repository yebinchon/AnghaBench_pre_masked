
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 scalar_t__ FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int ,int ) ;
 int FUNC_3 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_7(void)
{
    char VAR_4[VAR_1+15];
    char VAR_5[VAR_1];

    if (FUNC_1(VAR_4, VAR_1) == 0)
    {
        FUNC_6("Failed to get system directory. Skipping certificate/PE image tests.\n");
        return VAR_0;
    }

    if (VAR_4[FUNC_5(VAR_4) - 1] != '\\')
        FUNC_4(VAR_4, "\\");

    FUNC_4(VAR_4, "imagehlp.dll");


    FUNC_3(VAR_1, VAR_5);
    FUNC_2(VAR_5, "img", 0, VAR_3);

    if (FUNC_0(VAR_4, VAR_3, VAR_0) == 0)
    {
        FUNC_6("Unable to create copy of imagehlp.dll for tests.\n");
        return VAR_0;
    }

    return VAR_2;
}
