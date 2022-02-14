
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_deletes; int num_sets; int num_hits; int num_gets; int prefix; struct TYPE_3__* next; } ;
typedef TYPE_1__ PREFIX_STATS ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 TYPE_1__** VAR_2 ;
 size_t FUNC_6 (char*,size_t,char const*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (char const*) ;
 int VAR_3 ;

char *FUNC_8(int *VAR_4) {
    const char *VAR_5 = "PREFIX %s get %llu hit %llu set %llu del %llu\r\n";
    PREFIX_STATS *VAR_6;
    char *VAR_7;
    int VAR_8, VAR_9;
    size_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;







    FUNC_0();
    VAR_10 = FUNC_7(VAR_5) + VAR_3 +
           VAR_1 * (FUNC_7(VAR_5) - 2
                           + 4 * (20 - 4))
                           + sizeof("END\r\n");
    VAR_7 = FUNC_3(VAR_10);
    if (((void*)0) == VAR_7) {
        FUNC_5("Can't allocate stats response: malloc");
        FUNC_1();
        return ((void*)0);
    }

    VAR_9 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        for (VAR_6 = VAR_2[VAR_8]; ((void*)0) != VAR_6; VAR_6 = VAR_6->next) {
            VAR_11 = FUNC_6(VAR_7 + VAR_9, VAR_10-VAR_9, VAR_5,
                           VAR_6->prefix, VAR_6->num_gets, VAR_6->num_hits,
                           VAR_6->num_sets, VAR_6->num_deletes);
            VAR_9 += VAR_11;
            VAR_12 += VAR_11;
            FUNC_2(VAR_12 < VAR_10);
        }
    }

    FUNC_1();
    FUNC_4(VAR_7 + VAR_9, "END\r\n", 6);

    *VAR_4 = VAR_9 + 5;
    return VAR_7;
}
