
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int count; int magic; char* name; int pos; int type; int hash; } ;
typedef int FD_FILETYPE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (void*) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline int FUNC_10(const char *VAR_3, uint32_t VAR_4, FD_FILETYPE VAR_5) {

    if(!VAR_0 || VAR_1 == VAR_2)
        FUNC_0();

    FUNC_1("  >> searching for empty slot.");



    static int VAR_6 = 0;
    int VAR_7, VAR_8;
    for(VAR_7 = 0, VAR_8 = VAR_6 ; VAR_7 < VAR_2 ; VAR_7++, VAR_8++) {
        if(VAR_8 >= VAR_2) VAR_8 = 0;
        if(VAR_8 == 0) continue;

        if(!VAR_0[VAR_8].count) {
            FUNC_1("  >> Examining slot %d.", VAR_8);






            FUNC_1("  >> %s fd position %d for %s (last name: %s)", VAR_0[VAR_8].name?"re-using":"using", VAR_8, VAR_3, VAR_0[VAR_8].name);

            FUNC_7((void *)VAR_0[VAR_8].name);
            VAR_0[VAR_8].name = ((void*)0);
            VAR_6 = VAR_8;
            break;
        }
    }

    VAR_1++;

    if(VAR_7 == VAR_2) {
        FUNC_4("We should find an empty slot, but there isn't any");
        FUNC_3(1);
    }


    FUNC_1("  >> updating slot %d.", VAR_8);

    VAR_0[VAR_8].name = FUNC_8(VAR_3);
    VAR_0[VAR_8].hash = VAR_4;
    VAR_0[VAR_8].type = VAR_5;
    VAR_0[VAR_8].pos = VAR_8;
    VAR_0[VAR_8].count = 1;



    if(FUNC_9(FUNC_5(&VAR_0[VAR_8]) != (void *)&VAR_0[VAR_8]))
        FUNC_2("INTERNAL ERROR: duplicate indexing of fd.");

    FUNC_1("using fd position %d (name: %s)", VAR_8, VAR_0[VAR_8].name);

    return VAR_8;
}
