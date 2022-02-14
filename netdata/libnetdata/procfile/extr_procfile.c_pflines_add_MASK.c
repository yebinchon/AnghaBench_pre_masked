
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* words; TYPE_3__* lines; } ;
typedef TYPE_2__ procfile ;
struct TYPE_10__ {int len; int size; TYPE_4__* lines; } ;
typedef TYPE_3__ pflines ;
struct TYPE_11__ {size_t words; int first; } ;
typedef TYPE_4__ ffline ;
struct TYPE_8__ {int len; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline size_t *FUNC_2(procfile *VAR_1) {


    pflines *VAR_2 = VAR_1->lines;
    if(FUNC_1(VAR_2->len == VAR_2->size)) {


        VAR_1->lines = VAR_2 = FUNC_0(VAR_2, sizeof(pflines) + (VAR_2->size + VAR_0) * sizeof(ffline));
        VAR_2->size += VAR_0;
    }

    ffline *VAR_3 = &VAR_2->lines[VAR_2->len++];
    VAR_3->words = 0;
    VAR_3->first = VAR_1->words->len;

    return &VAR_3->words;
}
