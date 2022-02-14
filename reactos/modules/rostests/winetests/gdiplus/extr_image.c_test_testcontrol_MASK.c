
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
    GpStatus VAR_2;
    DWORD VAR_3;

    VAR_3 = 0;
    VAR_2 = FUNC_0(VAR_1, &VAR_3);
    FUNC_1(VAR_0, VAR_2);
    FUNC_2(VAR_3 != 0, "Build number expected, got %u\n", VAR_3);
}
