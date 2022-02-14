
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dest; scalar_t__ dest_limit; int btype; int bfinal; int dtree; int ltree; } ;
typedef TYPE_1__ TINF_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;

int FUNC_7(TINF_DATA *VAR_3)
{
    do {
        int VAR_4;


        if (VAR_3->btype == -1) {
next_blk:

            VAR_3->bfinal = FUNC_3(VAR_3);

            VAR_3->btype = FUNC_6(VAR_3, 2, 0);





            if (VAR_3->btype == 1) {

                FUNC_1(&VAR_3->ltree, &VAR_3->dtree);
            } else if (VAR_3->btype == 2) {

                VAR_4 = FUNC_2(VAR_3, &VAR_3->ltree, &VAR_3->dtree);
                if (VAR_4 != VAR_2) {
                    return VAR_4;
                }
            }
        }


        switch (VAR_3->btype)
        {
        case 0:

            VAR_4 = FUNC_5(VAR_3);
            break;
        case 1:
        case 2:


            VAR_4 = FUNC_4(VAR_3, &VAR_3->ltree, &VAR_3->dtree);
            break;
        default:
            return VAR_0;
        }

        if (VAR_4 == VAR_1 && !VAR_3->bfinal) {


            goto next_blk;
        }

        if (VAR_4 != VAR_2) {
            return VAR_4;
        }

    } while (VAR_3->dest < VAR_3->dest_limit);

    return VAR_2;
}
