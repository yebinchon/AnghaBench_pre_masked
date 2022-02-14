
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* compar ) (TYPE_2__*,TYPE_2__*) ;int root; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_9__ {int avl_balance; struct TYPE_9__** avl_link; } ;
typedef TYPE_2__ avl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;

avl *FUNC_1(avl_tree *VAR_1, avl *VAR_2) {

    avl *VAR_3[VAR_0];
    unsigned char VAR_4[VAR_0];
    int VAR_5;

    avl *VAR_6;
    int VAR_7;



    VAR_5 = 0;
    VAR_6 = (avl *) &VAR_1->root;
    for(VAR_7 = -1; VAR_7 != 0; VAR_7 = VAR_1->compar(VAR_2, VAR_6)) {
        unsigned char VAR_8 = (unsigned char)(VAR_7 > 0);

        VAR_3[VAR_5] = VAR_6;
        VAR_4[VAR_5++] = VAR_8;

        VAR_6 = VAR_6->avl_link[VAR_8];
        if(VAR_6 == ((void*)0)) return ((void*)0);
    }

    VAR_2 = VAR_6;

    if (VAR_6->avl_link[1] == ((void*)0))
        VAR_3[VAR_5 - 1]->avl_link[VAR_4[VAR_5 - 1]] = VAR_6->avl_link[0];
    else {
        avl *VAR_9 = VAR_6->avl_link[1];
        if (VAR_9->avl_link[0] == ((void*)0)) {
            VAR_9->avl_link[0] = VAR_6->avl_link[0];
            VAR_9->avl_balance = VAR_6->avl_balance;
            VAR_3[VAR_5 - 1]->avl_link[VAR_4[VAR_5 - 1]] = VAR_9;
            VAR_4[VAR_5] = 1;
            VAR_3[VAR_5++] = VAR_9;
        }
        else {
            avl *VAR_10;
            int VAR_11 = VAR_5++;

            for (;;) {
                VAR_4[VAR_5] = 0;
                VAR_3[VAR_5++] = VAR_9;
                VAR_10 = VAR_9->avl_link[0];
                if (VAR_10->avl_link[0] == ((void*)0)) break;

                VAR_9 = VAR_10;
            }

            VAR_10->avl_link[0] = VAR_6->avl_link[0];
            VAR_9->avl_link[0] = VAR_10->avl_link[1];
            VAR_10->avl_link[1] = VAR_6->avl_link[1];
            VAR_10->avl_balance = VAR_6->avl_balance;

            VAR_3[VAR_11 - 1]->avl_link[VAR_4[VAR_11 - 1]] = VAR_10;
            VAR_4[VAR_11] = 1;
            VAR_3[VAR_11] = VAR_10;
        }
    }


    while (--VAR_5 > 0) {
        avl *VAR_12 = VAR_3[VAR_5];

        if (VAR_4[VAR_5] == 0) {
            VAR_12->avl_balance++;
            if (VAR_12->avl_balance == +1) break;
            else if (VAR_12->avl_balance == +2) {
                avl *VAR_13 = VAR_12->avl_link[1];
                if (VAR_13->avl_balance == -1) {
                    avl *VAR_14;

                    VAR_14 = VAR_13->avl_link[0];
                    VAR_13->avl_link[0] = VAR_14->avl_link[1];
                    VAR_14->avl_link[1] = VAR_13;
                    VAR_12->avl_link[1] = VAR_14->avl_link[0];
                    VAR_14->avl_link[0] = VAR_12;
                    if (VAR_14->avl_balance == +1)
                        VAR_13->avl_balance = 0, VAR_12->avl_balance = -1;
                    else if (VAR_14->avl_balance == 0)
                        VAR_13->avl_balance = VAR_12->avl_balance = 0;
                    else
                        VAR_13->avl_balance = +1, VAR_12->avl_balance = 0;
                    VAR_14->avl_balance = 0;
                    VAR_3[VAR_5 - 1]->avl_link[VAR_4[VAR_5 - 1]] = VAR_14;
                }
                else {
                    VAR_12->avl_link[1] = VAR_13->avl_link[0];
                    VAR_13->avl_link[0] = VAR_12;
                    VAR_3[VAR_5 - 1]->avl_link[VAR_4[VAR_5 - 1]] = VAR_13;
                    if (VAR_13->avl_balance == 0) {
                        VAR_13->avl_balance = -1;
                        VAR_12->avl_balance = +1;
                        break;
                    }
                    else VAR_13->avl_balance = VAR_12->avl_balance = 0;
                }
            }
        }
        else
        {
            VAR_12->avl_balance--;
            if (VAR_12->avl_balance == -1) break;
            else if (VAR_12->avl_balance == -2) {
                avl *VAR_15 = VAR_12->avl_link[0];
                if (VAR_15->avl_balance == +1) {
                    avl *VAR_16;

                    VAR_16 = VAR_15->avl_link[1];
                    VAR_15->avl_link[1] = VAR_16->avl_link[0];
                    VAR_16->avl_link[0] = VAR_15;
                    VAR_12->avl_link[0] = VAR_16->avl_link[1];
                    VAR_16->avl_link[1] = VAR_12;
                    if (VAR_16->avl_balance == -1)
                        VAR_15->avl_balance = 0, VAR_12->avl_balance = +1;
                    else if (VAR_16->avl_balance == 0)
                        VAR_15->avl_balance = VAR_12->avl_balance = 0;
                    else
                        VAR_15->avl_balance = -1, VAR_12->avl_balance = 0;
                    VAR_16->avl_balance = 0;
                    VAR_3[VAR_5 - 1]->avl_link[VAR_4[VAR_5 - 1]] = VAR_16;
                }
                else {
                    VAR_12->avl_link[0] = VAR_15->avl_link[1];
                    VAR_15->avl_link[1] = VAR_12;
                    VAR_3[VAR_5 - 1]->avl_link[VAR_4[VAR_5 - 1]] = VAR_15;
                    if (VAR_15->avl_balance == 0) {
                        VAR_15->avl_balance = +1;
                        VAR_12->avl_balance = -1;
                        break;
                    }
                    else VAR_15->avl_balance = VAR_12->avl_balance = 0;
                }
            }
        }
    }



    return VAR_2;
}
