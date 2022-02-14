
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef int LPCSTR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static UINT FUNC_4(MSIHANDLE VAR_1, LPCSTR VAR_2)
{
    UINT VAR_3;

    FUNC_3("temp_file", VAR_2, (FUNC_2(VAR_2) - 1) * sizeof(char));
    VAR_3 = FUNC_1(VAR_1, VAR_0, "temp_file");
    FUNC_0("temp_file");

    return VAR_3;
}
