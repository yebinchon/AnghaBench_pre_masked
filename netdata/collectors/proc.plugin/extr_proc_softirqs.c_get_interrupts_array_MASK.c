
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct interrupt {char* name; TYPE_1__* cpu; int * rd; } ;
struct TYPE_2__ {int * rd; } ;


 struct interrupt* FUNC_0 (struct interrupt*,size_t,int) ;
 scalar_t__ FUNC_1 (struct interrupt*,size_t) ;
 size_t FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline struct interrupt *FUNC_4(size_t VAR_0, int VAR_1) {
    static struct interrupt *VAR_2 = ((void*)0);
    static size_t VAR_3 = 0;

    if(FUNC_3(VAR_0 != VAR_3)) {
        uint32_t VAR_4;
        int VAR_5;

        VAR_2 = (struct interrupt *)FUNC_1(VAR_2, VAR_0 * FUNC_2(VAR_1));


        for(VAR_4 = 0; VAR_4 < VAR_0 ;VAR_4++) {
            struct interrupt *VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_1);
            VAR_6->rd = ((void*)0);
            VAR_6->name[0] = '\0';
            for(VAR_5 = 0; VAR_5 < VAR_1 ;VAR_5++)
                VAR_6->cpu[VAR_5].rd = ((void*)0);
        }

        VAR_3 = VAR_0;
    }

    return VAR_2;
}
