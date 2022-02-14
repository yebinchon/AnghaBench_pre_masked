
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ec; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EC_KEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

EC_KEY *FUNC_1(const EVP_PKEY *VAR_3)
{
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }
    return VAR_3->pkey.ec;
}
