
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa_family; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;
typedef TYPE_2__ BIO_ADDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1(BIO_ADDR *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->sa.sa_family = VAR_0;
}
