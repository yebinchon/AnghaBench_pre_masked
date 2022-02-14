
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT ;
typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int *,int,int ,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static VOID
FUNC_3(LPCWSTR VAR_4,
              DWORD VAR_5,
              DWORD VAR_6,
              UINT VAR_7)
{
    HANDLE VAR_8;

    VAR_8 = FUNC_1(((void*)0), VAR_3);
    if (VAR_8)
    {
        FUNC_2(VAR_8,
                     (VAR_7 & VAR_2) ? VAR_0 : VAR_1,
                     0,
                     0,
                     ((void*)0),
                     1,
                     0,
                     &VAR_4,
                     ((void*)0));

        FUNC_0(VAR_8);
    }
}
