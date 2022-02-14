
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* pseudorand ) (unsigned char*,int) ;} ;
typedef TYPE_1__ RAND_METHOD ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (unsigned char*,int) ;

int FUNC_2(unsigned char *VAR_0, int VAR_1)
{
    const RAND_METHOD *VAR_2 = FUNC_0();

    if (VAR_2->pseudorand != ((void*)0))
        return VAR_2->pseudorand(VAR_0, VAR_1);
    return -1;
}
