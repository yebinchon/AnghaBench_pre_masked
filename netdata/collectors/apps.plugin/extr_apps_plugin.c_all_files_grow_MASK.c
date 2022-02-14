
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file_descriptor {int dummy; } ;
struct TYPE_7__ {int * root; } ;
struct TYPE_6__ {int magic; int pos; int * name; scalar_t__ count; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5() {
    void *VAR_5 = VAR_1;
    int VAR_6;


    FUNC_0("extending fd array to %d entries", VAR_4 + VAR_0);

    VAR_1 = FUNC_3(VAR_1, (VAR_4 + VAR_0) * sizeof(struct file_descriptor));




    if(FUNC_4(VAR_5 && VAR_5 != (void *)VAR_1)) {
        FUNC_0("  >> re-indexing.");

        VAR_2.root = ((void*)0);
        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
            if(!VAR_1[VAR_6].count) continue;
            if(FUNC_4(FUNC_2(&VAR_1[VAR_6]) != (void *)&VAR_1[VAR_6]))
                FUNC_1("INTERNAL ERROR: duplicate indexing of fd during realloc.");
        }

        FUNC_0("  >> re-indexing done.");
    }



    for(VAR_6 = VAR_4; VAR_6 < (VAR_4 + VAR_0); VAR_6++) {
        VAR_1[VAR_6].count = 0;
        VAR_1[VAR_6].name = ((void*)0);



        VAR_1[VAR_6].pos = VAR_6;
    }

    if(FUNC_4(!VAR_4)) VAR_3 = 1;
    VAR_4 += VAR_0;
}
