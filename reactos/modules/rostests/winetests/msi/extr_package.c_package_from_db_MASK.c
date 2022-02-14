
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static UINT FUNC_3(MSIHANDLE VAR_1, MSIHANDLE *VAR_2)
{
    UINT VAR_3;
    CHAR VAR_4[12];
    MSIHANDLE VAR_5;

    FUNC_2(VAR_4, "#%u", VAR_1);
    VAR_3 = FUNC_1(VAR_4, &VAR_5);
    if (VAR_3 != VAR_0)
    {
        FUNC_0(VAR_1);
        return VAR_3;
    }

    VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 != VAR_0)
    {
        FUNC_0(VAR_5);
        return VAR_3;
    }

    *VAR_2 = VAR_5;
    return VAR_0;
}
