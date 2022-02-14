
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_st {int p1; double p2; char* p4; char* p5; char* p6; int p3; } ;
struct TYPE_3__ {int return_size; scalar_t__ data; int * key; int data_size; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (int ,scalar_t__,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, OSSL_PARAM *VAR_1)
{
    struct object_st *VAR_2 = VAR_0;

    for (; VAR_1->key != ((void*)0); VAR_1++)
        if (FUNC_3(VAR_1->key, "p1") == 0) {
            VAR_1->return_size = sizeof(VAR_2->p1);
            *(int *)VAR_1->data = VAR_2->p1;
        } else if (FUNC_3(VAR_1->key, "p2") == 0) {
            VAR_1->return_size = sizeof(VAR_2->p2);
            *(double *)VAR_1->data = VAR_2->p2;
        } else if (FUNC_3(VAR_1->key, "p3") == 0) {
            size_t VAR_3 = FUNC_1(VAR_2->p3);

            VAR_1->return_size = VAR_3;
            if (!FUNC_2(VAR_1->data_size, VAR_3))
                return 0;
            FUNC_0(VAR_2->p3, VAR_1->data, VAR_3);
        } else if (FUNC_3(VAR_1->key, "p4") == 0) {
            size_t VAR_4 = FUNC_5(VAR_2->p4) + 1;

            VAR_1->return_size = VAR_4;
            if (!FUNC_2(VAR_1->data_size, VAR_4))
                return 0;
            FUNC_4(VAR_1->data, VAR_2->p4);
        } else if (FUNC_3(VAR_1->key, "p5") == 0) {
            size_t VAR_5 = FUNC_5(VAR_2->p5) + 1;

            VAR_1->return_size = VAR_5;
            if (!FUNC_2(VAR_1->data_size, VAR_5))
                return 0;
            FUNC_4(VAR_1->data, VAR_2->p5);
        } else if (FUNC_3(VAR_1->key, "p6") == 0) {






            size_t VAR_6 = FUNC_5(VAR_2->p6) + 1;

            VAR_1->return_size = VAR_6;
            *(const char **)VAR_1->data = VAR_2->p6;
        }

    return 1;
}
