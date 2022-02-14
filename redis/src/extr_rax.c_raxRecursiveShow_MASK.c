
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; int * data; scalar_t__ iscompr; scalar_t__ iskey; } ;
typedef TYPE_1__ raxNode ;
typedef int child ;


 int FUNC_0 (TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__** FUNC_4 (TYPE_1__*) ;

void FUNC_5(int VAR_0, int VAR_1, raxNode *VAR_2) {
    char VAR_3 = VAR_2->iscompr ? '"' : '[';
    char VAR_4 = VAR_2->iscompr ? '"' : ']';

    int VAR_5 = FUNC_1("%c%.*s%c", VAR_3, VAR_2->size, VAR_2->data, VAR_4);
    if (VAR_2->iskey) {
        VAR_5 += FUNC_1("=%p",FUNC_3(VAR_2));
    }

    int VAR_6 = VAR_2->iscompr ? 1 : VAR_2->size;


    if (VAR_0) {
        VAR_1 += (VAR_6 > 1) ? 7 : 4;
        if (VAR_6 == 1) VAR_1 += VAR_5;
    }
    raxNode **VAR_7 = FUNC_4(VAR_2);
    for (int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        char *VAR_9 = " `-(%c) ";
        if (VAR_6 > 1) {
            FUNC_1("\n");
            for (int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) FUNC_2(' ');
            FUNC_1(VAR_9,VAR_2->data[VAR_8]);
        } else {
            FUNC_1(" -> ");
        }
        raxNode *VAR_11;
        FUNC_0(&VAR_11,VAR_7,sizeof(VAR_11));
        FUNC_5(VAR_0+1,VAR_1,VAR_11);
        VAR_7++;
    }
}
