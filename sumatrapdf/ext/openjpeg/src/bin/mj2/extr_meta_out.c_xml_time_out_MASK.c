
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int SYSTEMTIME ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,char*,int) ;
 int FUNC_1 (int ,int ,int *,int *,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*,char*,char*) ;

void FUNC_4(FILE* VAR_2, time_t VAR_3)
{

    SYSTEMTIME VAR_4;
    char VAR_5[255], VAR_6[255];
    FUNC_2(VAR_3, &VAR_4);
    FUNC_0(VAR_1, VAR_0, &VAR_4, ((void*)0), VAR_5, 255);
    FUNC_1(VAR_1, 0, &VAR_4, ((void*)0), VAR_6, 255);
    FUNC_3(VAR_2, "%s %s", VAR_5, VAR_6);
}
