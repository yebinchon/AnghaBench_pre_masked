
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_st {int p1; double p2; char const* p6; int p6_l; int p5; scalar_t__ p5_l; int p4; int p3; } ;
struct TYPE_3__ {int data_size; scalar_t__ data; int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_0, const OSSL_PARAM *VAR_1)
{
    struct object_st *VAR_2 = VAR_0;

    for (; VAR_1->key != ((void*)0); VAR_1++)
        if (FUNC_5(VAR_1->key, "p1") == 0) {
            VAR_2->p1 = *(int *)VAR_1->data;
        } else if (FUNC_5(VAR_1->key, "p2") == 0) {
            VAR_2->p2 = *(double *)VAR_1->data;
        } else if (FUNC_5(VAR_1->key, "p3") == 0) {
            FUNC_0(VAR_2->p3);
            if (!FUNC_4(VAR_2->p3 = FUNC_1(VAR_1->data,
                                                 VAR_1->data_size, ((void*)0))))
                return 0;
        } else if (FUNC_5(VAR_1->key, "p4") == 0) {
            FUNC_2(VAR_2->p4);
            if (!FUNC_4(VAR_2->p4 = FUNC_3(VAR_1->data,
                                                    VAR_1->data_size)))
                return 0;
        } else if (FUNC_5(VAR_1->key, "p5") == 0) {
            FUNC_7(VAR_2->p5, VAR_1->data, VAR_1->data_size);
            VAR_2->p5_l = FUNC_6(VAR_2->p5) + 1;
        } else if (FUNC_5(VAR_1->key, "p6") == 0) {
            VAR_2->p6 = *(const char **)VAR_1->data;
            VAR_2->p6_l = VAR_1->data_size;
        }

    return 1;
}
