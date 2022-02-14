
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPWSTR ;
typedef int LPSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int,int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_4(LPWSTR VAR_1, BOOL VAR_2, LPCWSTR VAR_3, BOOL VAR_4, INT VAR_5)
{
    if (VAR_2)
 if (VAR_4) FUNC_3(VAR_1, VAR_3, VAR_5);
 else FUNC_0(VAR_0, 0, (LPCSTR)VAR_3, -1, VAR_1, VAR_5);
    else
 if (VAR_4) FUNC_1(VAR_0, 0, VAR_3, -1, (LPSTR)VAR_1, VAR_5, ((void*)0), ((void*)0));
 else FUNC_2((LPSTR)VAR_1, (LPCSTR)VAR_3, VAR_5);
}
