
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ptr; } ;
struct TYPE_8__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int DSA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,unsigned char**) ;

int FUNC_5(const DSA *VAR_2, unsigned char **VAR_3)
{
    EVP_PKEY *VAR_4;
    int VAR_5;
    if (!VAR_2)
        return 0;
    VAR_4 = FUNC_3();
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }
    (void)FUNC_1(VAR_4, (DSA *)VAR_2);
    VAR_5 = FUNC_4(VAR_4, VAR_3);
    VAR_4->pkey.ptr = ((void*)0);
    FUNC_2(VAR_4);
    return VAR_5;
}
