
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMLU ;
typedef int cmsInt32Number ;
typedef int cmsBool ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,char*,char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static
cmsBool FUNC_4(cmsMLU* VAR_2, cmsInt32Number VAR_3)
{
    char VAR_4[256], VAR_5[256];


    FUNC_1(FUNC_0(), VAR_2, "en", "US", VAR_4, 255);
    FUNC_2(VAR_5, "Hello, world %d", VAR_3);
    if (FUNC_3(VAR_4, VAR_5) != 0) return VAR_0;


    FUNC_1(FUNC_0(), VAR_2, "es", "ES", VAR_4, 255);
    FUNC_2(VAR_5, "Hola, mundo %d", VAR_3);
    if (FUNC_3(VAR_4, VAR_5) != 0) return VAR_0;

    return VAR_1;
}
