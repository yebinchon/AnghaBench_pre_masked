
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int add_arg; int (* free_cb ) (int *,unsigned int,unsigned char const*,int ) ;} ;
typedef TYPE_1__ custom_ext_add_cb_wrap ;
typedef int SSL ;


 int FUNC_0 (int *,unsigned int,unsigned char const*,int ) ;

__attribute__((used)) static void FUNC_1(SSL *VAR_0, unsigned int VAR_1,
                                        unsigned int VAR_2,
                                        const unsigned char *VAR_3, void *VAR_4)
{
    custom_ext_add_cb_wrap *VAR_5 = (custom_ext_add_cb_wrap *)VAR_4;

    if (VAR_5->free_cb == ((void*)0))
        return;

    VAR_5->free_cb(VAR_0, VAR_1, VAR_3, VAR_5->add_arg);
}
