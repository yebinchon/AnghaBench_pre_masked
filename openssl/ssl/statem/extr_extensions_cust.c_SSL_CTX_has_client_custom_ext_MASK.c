
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cert; } ;
struct TYPE_4__ {int custext; } ;
typedef TYPE_2__ SSL_CTX ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,unsigned int,int *) ;

int FUNC_1(const SSL_CTX *VAR_1, unsigned int VAR_2)
{
    return FUNC_0(&VAR_1->cert->custext, VAR_0, VAR_2,
                           ((void*)0)) != ((void*)0);
}
