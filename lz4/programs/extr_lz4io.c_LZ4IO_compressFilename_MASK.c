
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;
typedef int cRess_t ;
typedef int UTIL_time_t ;
typedef scalar_t__ U64 ;
typedef int LZ4IO_prefs_t ;


 double VAR_0 ;
 int FUNC_0 (int,char*,double const,double const) ;
 int FUNC_1 (int * const,int const,char const*,char const*,int) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

int FUNC_7(LZ4IO_prefs_t* const VAR_1, const char* VAR_2, const char* VAR_3, int VAR_4)
{
    UTIL_time_t const VAR_5 = FUNC_5();
    clock_t const VAR_6 = FUNC_6();
    cRess_t const VAR_7 = FUNC_2(VAR_1);

    int const VAR_8 = FUNC_1(VAR_1, VAR_7, VAR_2, VAR_3, VAR_4);


    FUNC_3(VAR_7);


    { clock_t const VAR_9 = FUNC_6();
        double const VAR_10 = (double)(VAR_9 - VAR_6) / VAR_0;
        U64 const VAR_11 = FUNC_4(VAR_5);
        double const VAR_12 = (double)VAR_11 / 1000000000;
        FUNC_0(4, "Completed in %.2f sec  (cpu load : %.0f%%)\n",
                        VAR_12, (VAR_10 / VAR_12) * 100);
    }

    return VAR_8;
}
