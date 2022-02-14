
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Path; void* Len; int ImageBase; } ;
typedef TYPE_1__ TEST_MODULE_INFO ;
typedef char* LPCSTR ;
typedef char CHAR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static BOOLEAN FUNC_7(LPCSTR VAR_2, BOOLEAN VAR_3, BOOLEAN VAR_4, BOOLEAN VAR_5, TEST_MODULE_INFO * VAR_6)
{
    CHAR VAR_7[255];
    UINT VAR_8;

    FUNC_2(VAR_6, 0, sizeof(TEST_MODULE_INFO));


    VAR_8 = FUNC_0(VAR_7, 255);
    if (VAR_8 > 255 || VAR_8 == 0)
    {
        FUNC_3("GetSystemWindowsDirectory failed\n");
        return VAR_0;
    }


    FUNC_4(VAR_7, "\\system32\\");
    if (VAR_3) FUNC_4(VAR_7, "drivers\\");
    FUNC_4(VAR_7, VAR_2);


    if (VAR_4)
    {
        VAR_6->ImageBase = FUNC_1(VAR_7);
        if (!VAR_6->ImageBase)
        {
            FUNC_3("IntGetImageBase failed\n");
            return VAR_0;
        }
    }
    else
    {

        FUNC_3("Not supported yet!\n");
        return VAR_0;
    }

    if (VAR_5)
    {
        FUNC_5(VAR_6->Path, VAR_2);
        VAR_6->Len = FUNC_6(VAR_6->Path);
    }
    else
    {

        FUNC_5(VAR_6->Path, VAR_7 + 2);
        VAR_6->Len = FUNC_6(VAR_6->Path);
    }

    return VAR_1;
}
