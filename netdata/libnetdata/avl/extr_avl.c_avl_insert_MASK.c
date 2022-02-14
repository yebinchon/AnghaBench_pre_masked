
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* compar ) (TYPE_2__*,TYPE_2__*) ;TYPE_2__* root; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_9__ {scalar_t__ avl_balance; struct TYPE_9__** avl_link; } ;
typedef TYPE_2__ avl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;

avl *FUNC_1(avl_tree *VAR_1, avl *VAR_2) {
    avl *VAR_3, *VAR_4;
    avl *VAR_5, *VAR_6;
    avl *VAR_7;
    avl *VAR_8;
    unsigned char VAR_9;

    unsigned char VAR_10[VAR_0];
    int VAR_11 = 0;



    VAR_4 = (avl *) &VAR_1->root;
    VAR_3 = VAR_1->root;
    VAR_9 = 0;
    for (VAR_6 = VAR_4, VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_6 = VAR_5, VAR_5 = VAR_5->avl_link[VAR_9]) {
        int VAR_12 = VAR_1->compar(VAR_2, VAR_5);
        if (VAR_12 == 0)
            return VAR_5;

        if (VAR_5->avl_balance != 0)
            VAR_4 = VAR_6, VAR_3 = VAR_5, VAR_11 = 0;
        VAR_10[VAR_11++] = VAR_9 = (unsigned char)(VAR_12 > 0);
    }

    VAR_7 = VAR_6->avl_link[VAR_9] = VAR_2;


    VAR_7->avl_link[0] = VAR_7->avl_link[1] = ((void*)0);
    VAR_7->avl_balance = 0;
    if (VAR_3 == ((void*)0)) return VAR_7;

    for (VAR_5 = VAR_3, VAR_11 = 0; VAR_5 != VAR_7; VAR_5 = VAR_5->avl_link[VAR_10[VAR_11]], VAR_11++)
        if (VAR_10[VAR_11] == 0)
            VAR_5->avl_balance--;
        else
            VAR_5->avl_balance++;

    if (VAR_3->avl_balance == -2) {
        avl *VAR_13 = VAR_3->avl_link[0];
        if (VAR_13->avl_balance == -1) {
            VAR_8 = VAR_13;
            VAR_3->avl_link[0] = VAR_13->avl_link[1];
            VAR_13->avl_link[1] = VAR_3;
            VAR_13->avl_balance = VAR_3->avl_balance = 0;
        }
        else {

            VAR_8 = VAR_13->avl_link[1];
            VAR_13->avl_link[1] = VAR_8->avl_link[0];
            VAR_8->avl_link[0] = VAR_13;
            VAR_3->avl_link[0] = VAR_8->avl_link[1];
            VAR_8->avl_link[1] = VAR_3;
            if (VAR_8->avl_balance == -1)
                VAR_13->avl_balance = 0, VAR_3->avl_balance = +1;
            else if (VAR_8->avl_balance == 0)
                VAR_13->avl_balance = VAR_3->avl_balance = 0;
            else
                VAR_13->avl_balance = -1, VAR_3->avl_balance = 0;
            VAR_8->avl_balance = 0;
        }
    }
    else if (VAR_3->avl_balance == +2) {
        avl *VAR_14 = VAR_3->avl_link[1];
        if (VAR_14->avl_balance == +1) {
            VAR_8 = VAR_14;
            VAR_3->avl_link[1] = VAR_14->avl_link[0];
            VAR_14->avl_link[0] = VAR_3;
            VAR_14->avl_balance = VAR_3->avl_balance = 0;
        }
        else {

            VAR_8 = VAR_14->avl_link[0];
            VAR_14->avl_link[0] = VAR_8->avl_link[1];
            VAR_8->avl_link[1] = VAR_14;
            VAR_3->avl_link[1] = VAR_8->avl_link[0];
            VAR_8->avl_link[0] = VAR_3;
            if (VAR_8->avl_balance == +1)
                VAR_14->avl_balance = 0, VAR_3->avl_balance = -1;
            else if (VAR_8->avl_balance == 0)
                VAR_14->avl_balance = VAR_3->avl_balance = 0;
            else
                VAR_14->avl_balance = +1, VAR_3->avl_balance = 0;
            VAR_8->avl_balance = 0;
        }
    }
    else return VAR_7;

    VAR_4->avl_link[VAR_3 != VAR_4->avl_link[0]] = VAR_8;


    return VAR_7;
}
