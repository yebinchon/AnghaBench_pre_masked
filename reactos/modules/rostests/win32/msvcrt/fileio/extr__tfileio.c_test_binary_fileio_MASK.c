
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(TCHAR* VAR_0, TCHAR* VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 0;

    VAR_4 = FUNC_2(VAR_0, FUNC_0("wb"), FUNC_0("rb"), VAR_1);
    VAR_4 = FUNC_1(VAR_0, FUNC_0("r"), VAR_2);
    VAR_4 = FUNC_1(VAR_0, FUNC_0("rb"), VAR_3);
    return VAR_4;
}
