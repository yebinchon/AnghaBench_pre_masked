
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pmeth; } ;
struct TYPE_5__ {int (* ctrl ) (TYPE_2__*,int,long,unsigned char*) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 long VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (char const*,long*) ;
 int FUNC_2 (TYPE_2__*,int,long,unsigned char*) ;

int FUNC_3(EVP_PKEY_CTX *VAR_1, int VAR_2, const char *VAR_3)
{
    unsigned char *VAR_4;
    long VAR_5;
    int VAR_6 = -1;

    VAR_4 = FUNC_1(VAR_3, &VAR_5);
    if (VAR_4 == ((void*)0))
        return 0;
    if (VAR_5 <= VAR_0)
        VAR_6 = VAR_1->pmeth->ctrl(VAR_1, VAR_2, VAR_5, VAR_4);
    FUNC_0(VAR_4);
    return VAR_6;
}
