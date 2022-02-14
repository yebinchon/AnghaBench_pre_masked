
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* async_cb ) (TYPE_1__*,int ) ;int async_cb_arg; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
    SSL *VAR_1 = (SSL *)VAR_0;

    return VAR_1->async_cb(VAR_1, VAR_1->async_cb_arg);
}
