
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
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;

BIO_ADDR *FUNC_2(void)
{
    BIO_ADDR *VAR_3 = FUNC_1(sizeof(*VAR_3));

    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2);
        return ((void*)0);
    }

    VAR_3->sa.sa_family = VAR_0;
    return VAR_3;
}
