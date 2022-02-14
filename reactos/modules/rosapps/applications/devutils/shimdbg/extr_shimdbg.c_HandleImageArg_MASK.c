
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int APPHELPCACHESERVICECLASS ;


 int FUNC_0 (char*,int,int ,char*) ;
 int FUNC_1 (char*) ;

int FUNC_2(int VAR_0, char* VAR_1[], int* VAR_2, char VAR_3,
                    APPHELPCACHESERVICECLASS VAR_4, char* VAR_5)
{
    int VAR_6 = *VAR_2;
    if (VAR_6+1 < VAR_0)
    {
        int VAR_7 = VAR_1[VAR_6][1] == VAR_3;
        FUNC_0(VAR_1[VAR_6+1], VAR_7, VAR_4, VAR_5);
        (*VAR_2) += 1;
        return 0;
    }
    FUNC_1("Error: no image name specified\n");
    return 1;
}
