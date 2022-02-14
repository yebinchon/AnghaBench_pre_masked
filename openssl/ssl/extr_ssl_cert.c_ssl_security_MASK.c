
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cert; } ;
struct TYPE_5__ {int (* sec_cb ) (TYPE_2__ const*,int *,int,int,int,void*,int ) ;int sec_ex; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__ const*,int *,int,int,int,void*,int ) ;

int FUNC_1(const SSL *VAR_0, int VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
    return VAR_0->cert->sec_cb(VAR_0, ((void*)0), VAR_1, VAR_2, VAR_3, VAR_4, VAR_0->cert->sec_ex);
}
