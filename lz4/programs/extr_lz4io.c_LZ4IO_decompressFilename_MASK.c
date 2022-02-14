
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dRess_t ;
typedef scalar_t__ clock_t ;
typedef int LZ4IO_prefs_t ;


 double VAR_0 ;
 int FUNC_0 (int,char*,double const) ;
 int FUNC_1 (int * const) ;
 int FUNC_2 (int * const,int const,char const*,char const*) ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(LZ4IO_prefs_t* const VAR_1, const char* VAR_2, const char* VAR_3)
{
    dRess_t const VAR_4 = FUNC_1(VAR_1);
    clock_t const VAR_5 = FUNC_4();

    int const VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_2, VAR_3);

    clock_t const VAR_7 = FUNC_4();
    double const VAR_8 = (double)(VAR_7 - VAR_5) / VAR_0;
    FUNC_0(4, "Done in %.2f sec  \n", VAR_8);

    FUNC_3(VAR_4);
    return VAR_6;
}
