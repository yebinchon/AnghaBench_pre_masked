
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * dstFile; } ;
typedef TYPE_1__ dRess_t ;
struct TYPE_8__ {scalar_t__ removeSrcFile; } ;
typedef TYPE_2__ LZ4IO_prefs_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,char const*,...) ;
 unsigned long long const VAR_0 ;
 int FUNC_1 (int,char*,char const*,int ) ;
 int * FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (int * const) ;
 scalar_t__ FUNC_4 (char const*) ;
 unsigned long long FUNC_5 (TYPE_2__* const,TYPE_1__,int * const,int * const) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(LZ4IO_prefs_t* const VAR_2, dRess_t VAR_3, const char* VAR_4, const char* VAR_5)
{
    FILE* const VAR_6 = VAR_3.dstFile;
    unsigned long long VAR_7 = 0;


    FILE* const VAR_8 = FUNC_2(VAR_4);
    if (VAR_8==((void*)0)) return 1;


    for ( ; ; ) {
        unsigned long long const VAR_9 =
                        FUNC_5(VAR_2, VAR_3, VAR_8, VAR_6);
        if (VAR_9 == VAR_0) break;
        VAR_7 += VAR_9;
    }


    FUNC_3(VAR_8);
    if (VAR_2->removeSrcFile) {
        if (FUNC_4(VAR_4))
            FUNC_1(45, "Remove error : %s: %s", VAR_4, FUNC_6(VAR_1));
    }


    FUNC_0(2, "\r%79s\r", "");
    FUNC_0(2, "%-20.20s : decoded %llu bytes \n", VAR_4, VAR_7);
    (void)VAR_5;

    return 0;
}
