
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,char*) ;
 int * FUNC_4 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static
void FUNC_6(cmsContext VAR_6, int VAR_7, char *VAR_8[])
{
    int VAR_9 = VAR_7 - VAR_5;

    if (VAR_9 >= 1) {

        VAR_2 = FUNC_4(0, VAR_8[VAR_5]);

        if (VAR_2 == ((void*)0))
            FUNC_0("'%s' is not recognized as a CGATS file", VAR_8[VAR_5]);

        VAR_4 = (int) FUNC_3(VAR_6, VAR_2, "NUMBER_OF_SETS");
    }

    if (VAR_9 == 2) {

        VAR_3 = FUNC_2(((void*)0));
        FUNC_1(VAR_6);
        FUNC_5(VAR_0, VAR_8[VAR_5+1], VAR_1-1);
    }

    if (VAR_9 > 2) FUNC_0("Too many CGATS files");
}
