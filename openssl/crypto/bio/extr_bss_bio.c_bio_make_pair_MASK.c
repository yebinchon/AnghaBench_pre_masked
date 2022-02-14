
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio_bio_st {scalar_t__ request; scalar_t__ closed; TYPE_1__* peer; scalar_t__ offset; scalar_t__ len; int * buf; int size; } ;
struct TYPE_4__ {int init; struct bio_bio_st* ptr; } ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_3, BIO *VAR_4)
{
    struct bio_bio_st *VAR_5, *VAR_6;

    FUNC_2(VAR_3 != ((void*)0));
    FUNC_2(VAR_4 != ((void*)0));

    VAR_5 = VAR_3->ptr;
    VAR_6 = VAR_4->ptr;

    if (VAR_5->peer != ((void*)0) || VAR_6->peer != ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_5->buf == ((void*)0)) {
        VAR_5->buf = FUNC_1(VAR_5->size);
        if (VAR_5->buf == ((void*)0)) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        VAR_5->len = 0;
        VAR_5->offset = 0;
    }

    if (VAR_6->buf == ((void*)0)) {
        VAR_6->buf = FUNC_1(VAR_6->size);
        if (VAR_6->buf == ((void*)0)) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        VAR_6->len = 0;
        VAR_6->offset = 0;
    }

    VAR_5->peer = VAR_4;
    VAR_5->closed = 0;
    VAR_5->request = 0;
    VAR_6->peer = VAR_3;
    VAR_6->closed = 0;
    VAR_6->request = 0;

    VAR_3->init = 1;
    VAR_4->init = 1;

    return 1;
}
