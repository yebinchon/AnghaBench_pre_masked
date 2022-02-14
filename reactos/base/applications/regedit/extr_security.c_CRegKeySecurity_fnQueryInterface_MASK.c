
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int * PVOID ;
typedef int PCRegKeySecurity ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static __inline HRESULT
FUNC_3(PCRegKeySecurity VAR_10,
                                 REFIID VAR_11,
                                 PVOID *VAR_12)
{
    PVOID VAR_13 = ((void*)0);

    if (FUNC_1(VAR_11,
                    &VAR_3))
    {
        VAR_13 = (PVOID)FUNC_2(VAR_10,
                                         VAR_6);
    }
    else if (FUNC_1(VAR_11,
                         &VAR_2))
    {
        VAR_13 = (PVOID)FUNC_2(VAR_10,
                                         VAR_1);
    }
    else if (FUNC_1(VAR_11,
                         &VAR_5))
    {
        VAR_13 = (PVOID)FUNC_2(VAR_10,
                                         VAR_8);
    }

    if (VAR_13 == ((void*)0))
    {
        return VAR_0;
    }

    *VAR_12 = VAR_13;
    FUNC_0(VAR_10);

    return VAR_9;
}
