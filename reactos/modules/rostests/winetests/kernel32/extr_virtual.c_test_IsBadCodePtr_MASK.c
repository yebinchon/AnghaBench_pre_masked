
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
    BOOL VAR_2;
    void *VAR_3 = (void *)0xdeadbeef;
    char VAR_4;

    VAR_2 = FUNC_0(((void*)0));
    FUNC_1(VAR_2 == VAR_1, "Expected IsBadCodePtr to return TRUE, got %d\n", VAR_2);

    VAR_2 = FUNC_0(VAR_3);
    FUNC_1(VAR_2 == VAR_1, "Expected IsBadCodePtr to return TRUE, got %d\n", VAR_2);

    VAR_2 = FUNC_0((void *)&VAR_4);
    FUNC_1(VAR_2 == VAR_0, "Expected IsBadCodePtr to return FALSE, got %d\n", VAR_2);
}
