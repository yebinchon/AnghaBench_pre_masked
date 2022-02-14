
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HCERTSTORE ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static BOOL FUNC_4(int VAR_1, HCERTSTORE VAR_2)
{
    BOOL VAR_3 = VAR_0;
    FILE *VAR_4;

    FUNC_0("\n");

    VAR_4 = FUNC_2(VAR_1, "r");
    if (VAR_4)
    {
        VAR_3 = FUNC_3(VAR_4, VAR_2);
        FUNC_1(VAR_4);
    }
    return VAR_3;
}
