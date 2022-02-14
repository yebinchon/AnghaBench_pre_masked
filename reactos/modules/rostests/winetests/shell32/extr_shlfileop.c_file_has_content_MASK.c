
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef size_t DWORD ;
typedef scalar_t__ CHAR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,scalar_t__*,int,size_t*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__ const*) ;

__attribute__((used)) static BOOL FUNC_4(const CHAR *VAR_5, const CHAR *VAR_6)
{
    CHAR VAR_7[VAR_3];
    HANDLE VAR_8;
    DWORD VAR_9;

    VAR_8 = FUNC_1(VAR_5, VAR_1, 0, ((void*)0), VAR_4, 0, ((void*)0));
    if (VAR_8 == VAR_2)
        return VAR_0;
    FUNC_2(VAR_8, VAR_7, VAR_3 - 1, &VAR_9, ((void*)0));
    VAR_7[VAR_9] = 0;
    FUNC_0(VAR_8);
    return FUNC_3(VAR_7, VAR_6)==0;
}
