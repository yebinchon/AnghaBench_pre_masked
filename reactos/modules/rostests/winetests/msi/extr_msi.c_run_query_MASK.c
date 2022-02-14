
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static UINT FUNC_4(MSIHANDLE VAR_1, const char *VAR_2)
{
    MSIHANDLE VAR_3 = 0;
    UINT VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
    if (VAR_4 != VAR_0)
        return VAR_4;

    VAR_4 = FUNC_3(VAR_3, 0);
    if (VAR_4 == VAR_0)
        VAR_4 = FUNC_2(VAR_3);
    FUNC_0(VAR_3);
    return VAR_4;
}
