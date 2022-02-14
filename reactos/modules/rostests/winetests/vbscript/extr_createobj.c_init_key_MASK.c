
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (int ,int *,int ,char const*,int ) ;
 int VAR_4 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static BOOL FUNC_5(const char *VAR_5, const char *VAR_6, BOOL VAR_7)
{
    HKEY VAR_8;
    DWORD VAR_9;

    if(!VAR_7) {
        FUNC_2(VAR_2, VAR_5);
        return VAR_4;
    }

    VAR_9 = FUNC_1(VAR_2, VAR_5, &VAR_8);
    if(VAR_9 != VAR_0)
        return VAR_1;

    if(VAR_6)
        VAR_9 = FUNC_3(VAR_8, ((void*)0), VAR_3, VAR_6, FUNC_4(VAR_6));

    FUNC_0(VAR_8);

    return VAR_9 == VAR_0;
}
