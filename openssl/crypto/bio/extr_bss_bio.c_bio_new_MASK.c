
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bio_bio_st {int size; } ;
struct TYPE_3__ {struct bio_bio_st* ptr; } ;
typedef TYPE_1__ BIO ;


 struct bio_bio_st* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0)
{
    struct bio_bio_st *VAR_1 = FUNC_0(sizeof(*VAR_1));

    if (VAR_1 == ((void*)0))
        return 0;


    VAR_1->size = 17 * 1024;

    VAR_0->ptr = VAR_1;
    return 1;
}
