
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int file; } ;
typedef TYPE_1__ file_crit ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 () ;
 int * VAR_5 ;
 TYPE_1__* FUNC_2 (int,int) ;

__attribute__((used)) static inline FILE* FUNC_3(int VAR_6)
{
    file_crit *VAR_7;

    if(VAR_6 >= VAR_3)
        return ((void*)0);

    if(VAR_6 < VAR_4)
        return &VAR_5[VAR_6];

    VAR_7 = VAR_2[VAR_6/VAR_1];
    if(!VAR_7) {
        VAR_2[VAR_6/VAR_1] = FUNC_2(VAR_1, sizeof(file_crit));
        if(!VAR_2[VAR_6/VAR_1]) {
            FUNC_0("out of memory\n");
            *FUNC_1() = VAR_0;
            return ((void*)0);
        }

        VAR_7 = VAR_2[VAR_6/VAR_1] + (VAR_6%VAR_1);
    } else
        VAR_7 += VAR_6%VAR_1;

    return &VAR_7->file;
}
