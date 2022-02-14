
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INSTALLSTATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    INSTALLSTATE VAR_1;

    if (!&FUNC_2)
    {
        FUNC_3("MsiUseFeatureExA not implemented\n");
        return;
    }

    VAR_1 = FUNC_0(((void*)0), ((void*)0));
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");

    VAR_1 = FUNC_0("{9085040-6000-11d3-8cfe-0150048383c9}" ,((void*)0));
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");

    VAR_1 = FUNC_2(((void*)0),((void*)0),0,0);
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");

    VAR_1 = FUNC_2(((void*)0), "WORDVIEWFiles", -2, 1 );
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");

    VAR_1 = FUNC_2("{90850409-6000-11d3-8cfe-0150048383c9}",
                         ((void*)0), -2, 0 );
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");

    VAR_1 = FUNC_2("{9085040-6000-11d3-8cfe-0150048383c9}",
                         "WORDVIEWFiles", -2, 0 );
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");

    VAR_1 = FUNC_2("{0085040-6000-11d3-8cfe-0150048383c9}",
                         "WORDVIEWFiles", -2, 0 );
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");

    VAR_1 = FUNC_2("{90850409-6000-11d3-8cfe-0150048383c9}",
                         "WORDVIEWFiles", -2, 1 );
    FUNC_1( VAR_1 == VAR_0, "wrong return val\n");
}
