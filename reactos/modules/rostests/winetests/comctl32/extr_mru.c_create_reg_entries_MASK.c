
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HKEY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,int ) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    HKEY VAR_5 = ((void*)0);

    FUNC_2(!FUNC_1(VAR_1, VAR_2, &VAR_5),
       "Couldn't create test key \"%s\"\n", VAR_3);
    if (!VAR_5) return VAR_0;
    FUNC_0(VAR_5);
    return VAR_4;
}
