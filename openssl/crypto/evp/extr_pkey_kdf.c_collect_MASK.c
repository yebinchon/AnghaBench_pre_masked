
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t length; scalar_t__ data; } ;
typedef TYPE_1__ BUF_MEM ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,void*,size_t) ;

__attribute__((used)) static int FUNC_4(BUF_MEM **VAR_2, void *VAR_3, size_t VAR_4)
{
    size_t VAR_5;

    if (*VAR_2 == ((void*)0))
        *VAR_2 = FUNC_1();
    if (*VAR_2 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_3 != ((void*)0) && VAR_4 > 0) {
        VAR_5 = (*VAR_2)->length;

        if (!FUNC_0(*VAR_2, VAR_5 + VAR_4))
            return 0;
        FUNC_3((*VAR_2)->data + VAR_5, VAR_3, VAR_4);
    }
    return 1;
}
