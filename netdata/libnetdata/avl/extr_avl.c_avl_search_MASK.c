
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* compar ) (TYPE_2__*,TYPE_2__*) ;TYPE_2__* root; } ;
typedef TYPE_1__ avl_tree ;
struct TYPE_9__ {struct TYPE_9__** avl_link; } ;
typedef TYPE_2__ avl ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;

avl *FUNC_1(avl_tree *VAR_0, avl *VAR_1) {
    avl *VAR_2;



    for (VAR_2 = VAR_0->root; VAR_2 != ((void*)0); ) {
        int VAR_3 = VAR_0->compar(VAR_1, VAR_2);

        if (VAR_3 < 0)
            VAR_2 = VAR_2->avl_link[0];
        else if (VAR_3 > 0)
            VAR_2 = VAR_2->avl_link[1];
        else
            return VAR_2;
    }

    return ((void*)0);
}
