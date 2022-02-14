
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_7(LPCWSTR VAR_5, LPCWSTR VAR_6, int VAR_7)
{
    BOOL VAR_8;

    if (FUNC_1(VAR_5) == VAR_1 ||
        FUNC_1(VAR_6) == VAR_1)
    {
        FUNC_5("Source or dest is directory, not moving\n");
        return VAR_0;
    }

    if (VAR_7 == VAR_4)
    {
        FUNC_4("moving %s -> %s\n", FUNC_6(VAR_5), FUNC_6(VAR_6));
        VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_2);
        if (!VAR_8)
        {
            FUNC_5("MoveFile failed: %d\n", FUNC_2());
            return VAR_0;
        }
    }
    else
    {
        FUNC_4("copying %s -> %s\n", FUNC_6(VAR_5), FUNC_6(VAR_6));
        VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_0);
        if (!VAR_8)
        {
            FUNC_5("CopyFile failed: %d\n", FUNC_2());
            return VAR_0;
        }
    }

    return VAR_3;
}
