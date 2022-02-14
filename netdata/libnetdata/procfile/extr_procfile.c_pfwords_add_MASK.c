
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* words; } ;
typedef TYPE_1__ procfile ;
struct TYPE_7__ {int len; int size; char** words; } ;
typedef TYPE_2__ pfwords ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(procfile *VAR_1, char *VAR_2) {


    pfwords *VAR_3 = VAR_1->words;
    if(FUNC_1(VAR_3->len == VAR_3->size)) {


        VAR_1->words = VAR_3 = FUNC_0(VAR_3, sizeof(pfwords) + (VAR_3->size + VAR_0) * sizeof(char *));
        VAR_3->size += VAR_0;
    }

    VAR_3->words[VAR_3->len++] = VAR_2;
}
