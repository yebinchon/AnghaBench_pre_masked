
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef char* LPCSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,int ) ;
 char* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline LPCSTR FUNC_4(LPCWSTR VAR_1, BOOL VAR_2, INT VAR_3)
{
    if (VAR_1 == VAR_0) return "(callback)";
    VAR_3 = FUNC_2(FUNC_3(VAR_1, VAR_2), VAR_3);
    return VAR_2 ? FUNC_1(VAR_1, VAR_3) : FUNC_0((LPCSTR)VAR_1, VAR_3);
}
