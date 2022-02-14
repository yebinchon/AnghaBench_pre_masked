
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio_bio_st {struct bio_bio_st* buf; scalar_t__ peer; } ;
struct TYPE_4__ {struct bio_bio_st* ptr; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (struct bio_bio_st*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0)
{
    struct bio_bio_st *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;
    VAR_1 = VAR_0->ptr;

    FUNC_1(VAR_1 != ((void*)0));

    if (VAR_1->peer)
        FUNC_2(VAR_0);

    FUNC_0(VAR_1->buf);
    FUNC_0(VAR_1);

    return 1;
}
