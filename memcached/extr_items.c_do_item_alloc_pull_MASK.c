
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int item ;
struct TYPE_4__ {int direct_reclaims; } ;
struct TYPE_3__ {scalar_t__ lru_segmented; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int const,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_5 ;
 int * FUNC_3 (size_t const,unsigned int const,int ) ;

item *FUNC_4(const size_t VAR_6, const unsigned int VAR_7) {
    item *VAR_8 = ((void*)0);
    int VAR_9;






    for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {

        if (!VAR_5.lru_segmented) {
            FUNC_0(VAR_7, VAR_0, 0, 0, 0, ((void*)0));
        }
        VAR_8 = FUNC_3(VAR_6, VAR_7, 0);

        if (VAR_8 == ((void*)0)) {



            if (FUNC_0(VAR_7, VAR_0, 0, VAR_2, 0, ((void*)0)) <= 0) {
                if (VAR_5.lru_segmented) {
                    FUNC_0(VAR_7, VAR_1, 0, 0, 0, ((void*)0));
                } else {
                    break;
                }
            }
        } else {
            break;
        }
    }

    if (VAR_9 > 0) {
        FUNC_1(&VAR_4[VAR_7]);
        VAR_3[VAR_7].direct_reclaims += VAR_9;
        FUNC_2(&VAR_4[VAR_7]);
    }

    return VAR_8;
}
