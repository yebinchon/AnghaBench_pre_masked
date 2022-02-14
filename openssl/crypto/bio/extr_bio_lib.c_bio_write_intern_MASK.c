
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int * callback_ex; int * callback; int num_write; TYPE_1__* method; int init; } ;
struct TYPE_6__ {int (* bwrite ) (TYPE_2__*,void const*,size_t,size_t*) ;} ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,void const*,size_t,int ,long,int,size_t*) ;
 int FUNC_2 (TYPE_2__*,void const*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_5, const void *VAR_6, size_t VAR_7,
                            size_t *VAR_8)
{
    int VAR_9;

    if (VAR_5 == ((void*)0))
        return 0;

    if ((VAR_5->method == ((void*)0)) || (VAR_5->method->bwrite == ((void*)0))) {
        FUNC_0(VAR_2, VAR_4);
        return -2;
    }

    if ((VAR_5->callback != ((void*)0) || VAR_5->callback_ex != ((void*)0)) &&
        ((VAR_9 = (int)FUNC_1(VAR_5, VAR_1, VAR_6, VAR_7, 0, 0L, 1L,
                                       ((void*)0))) <= 0))
        return VAR_9;

    if (!VAR_5->init) {
        FUNC_0(VAR_2, VAR_3);
        return -2;
    }

    VAR_9 = VAR_5->method->bwrite(VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_9 > 0)
        VAR_5->num_write += (uint64_t)*VAR_8;

    if (VAR_5->callback != ((void*)0) || VAR_5->callback_ex != ((void*)0))
        VAR_9 = (int)FUNC_1(VAR_5, VAR_1 | VAR_0, VAR_6,
                                     VAR_7, 0, 0L, VAR_9, VAR_8);

    return VAR_9;
}
