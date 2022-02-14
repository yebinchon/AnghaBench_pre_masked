
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_4 (int *,int const*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_5(LPCSTR VAR_6, const VOID *VAR_7, DWORD VAR_8)
{
    HANDLE VAR_9;
    CHAR VAR_10[VAR_4];
    BOOL VAR_11;

    VAR_9 = FUNC_1(VAR_6, VAR_2, VAR_1, ((void*)0), VAR_5, 0, 0);
    if (VAR_9 == VAR_3)
      return VAR_0;

    if(VAR_8 != FUNC_2(VAR_9, ((void*)0)) )
    {
        FUNC_0(VAR_9);
        return VAR_0;
    }

    VAR_11 = FUNC_3(VAR_9, VAR_10, VAR_8, &VAR_8, ((void*)0));
    FUNC_0(VAR_9);
    if (!VAR_11)
      return VAR_0;

    return !FUNC_4(VAR_10, VAR_7, VAR_8);
}
