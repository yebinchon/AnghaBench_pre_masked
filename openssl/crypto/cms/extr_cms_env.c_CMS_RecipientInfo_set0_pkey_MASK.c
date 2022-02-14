
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ktri; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_5__ {int * pkey; } ;
typedef int EVP_PKEY ;
typedef TYPE_3__ CMS_RecipientInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(CMS_RecipientInfo *VAR_3, EVP_PKEY *VAR_4)
{
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    FUNC_1(VAR_3->d.ktri->pkey);
    VAR_3->d.ktri->pkey = VAR_4;
    return 1;
}
