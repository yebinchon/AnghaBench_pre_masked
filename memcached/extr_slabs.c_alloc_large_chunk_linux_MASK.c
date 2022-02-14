
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int verbose; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,size_t const,int ) ;
 int FUNC_6 (void**,size_t,size_t const) ;
 TYPE_1__ VAR_1 ;
 int FUNC_7 (char*,char*,size_t*) ;
 int VAR_2 ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static void * FUNC_9(const size_t VAR_3)
{
    size_t VAR_4 = 0;
    void *VAR_5 = ((void*)0);
    FILE *VAR_6;
    int VAR_7;


    VAR_6 = FUNC_2("/proc/meminfo", "r");
    if (VAR_6 != ((void*)0)) {
        char VAR_8[64];

        while ((FUNC_1(VAR_8, sizeof(VAR_8), VAR_6)))
            if (!FUNC_8(VAR_8, "Hugepagesize:", 13)) {
                VAR_7 = FUNC_7(VAR_8 + 13, "%zu\n", &VAR_4);


                VAR_4 <<= 10;
            }
        FUNC_0(VAR_6);
    }

    if (!VAR_4) {
        FUNC_3(VAR_2, "Failed to get supported huge page size\n");
        return ((void*)0);
    }

    if (VAR_1.verbose > 1)
        FUNC_3(VAR_2, "huge page size: %zu\n", VAR_4);



    VAR_7 = FUNC_6(&VAR_5, VAR_4, VAR_3);
    if (VAR_7 != 0) {
        FUNC_3(VAR_2, "Failed to get aligned memory chunk: %d\n", VAR_7);
        return ((void*)0);
    }

    VAR_7 = FUNC_5(VAR_5, VAR_3, VAR_0);
    if (VAR_7 < 0) {
        FUNC_3(VAR_2, "Failed to set transparent hugepage hint: %d\n", VAR_7);
        FUNC_4(VAR_5);
        VAR_5 = ((void*)0);
    }

    return VAR_5;
}
