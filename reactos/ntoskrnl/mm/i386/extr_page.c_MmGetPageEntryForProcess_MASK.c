
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PVOID ;
typedef int * PULONG ;
typedef int PEPROCESS ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ULONG FUNC_2(PEPROCESS VAR_1, PVOID VAR_2)
{
    ULONG VAR_3;
    PULONG VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);
    if (VAR_4)
    {
        VAR_3 = *VAR_4;
        FUNC_1(VAR_4);
        return VAR_3;
    }
    return 0;
}
