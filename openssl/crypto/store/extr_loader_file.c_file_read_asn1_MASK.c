
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ data; } ;
typedef TYPE_1__ BUF_MEM ;
typedef int BIO ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__**) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0, unsigned char **VAR_1, long *VAR_2)
{
    BUF_MEM *VAR_3 = ((void*)0);

    if (FUNC_1(VAR_0, &VAR_3) < 0)
        return 0;

    *VAR_1 = (unsigned char *)VAR_3->data;
    *VAR_2 = (long)VAR_3->length;
    FUNC_0(VAR_3);

    return 1;
}
