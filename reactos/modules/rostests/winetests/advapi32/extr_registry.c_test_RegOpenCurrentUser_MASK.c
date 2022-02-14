
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef scalar_t__ HKEY ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    HKEY VAR_2;
    LONG VAR_3;

    VAR_2 = VAR_0;
    VAR_3 = FUNC_2(VAR_1, &VAR_2);
    FUNC_3(!VAR_3, "got %d, error %d\n", VAR_3, FUNC_0());
    FUNC_3(VAR_2 != VAR_0, "got %p\n", VAR_2);
    FUNC_1(VAR_2);
}
