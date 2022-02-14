
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;

BOOL FUNC_3(LPTSTR VAR_3)
{
    FILE* VAR_4 = FUNC_1(VAR_3, FUNC_0("r"));

    if (VAR_4) {
        FUNC_2(VAR_4, VAR_2);
        return VAR_1;
    }
    return VAR_0;
}
