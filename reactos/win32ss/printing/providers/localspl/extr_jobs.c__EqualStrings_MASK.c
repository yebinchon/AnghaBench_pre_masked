
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline BOOL
FUNC_1(PCWSTR VAR_2, PCWSTR VAR_3)
{
    if (!VAR_2 && !VAR_3)
        return VAR_1;

    if (VAR_2 && !VAR_3)
        return VAR_0;

    if (!VAR_2 && VAR_3)
        return VAR_0;

    return (FUNC_0(VAR_2, VAR_3) == 0);
}
