
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int frame_fragment; int frame_fragment_initial; int frame_fragment_omit; int frame; } ;
struct TYPE_4__ {scalar_t__ fragment; scalar_t__ mssfix; int proto; int tun_mtu_extra; scalar_t__ tun_mtu_extra_defined; scalar_t__ socks_proxy_server; } ;
struct TYPE_5__ {TYPE_1__ ce; scalar_t__ mtu_test; int comp; } ;
struct context {TYPE_3__ c2; TYPE_2__ options; } ;


 scalar_t__ FUNC_0 (struct context*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct context*,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void
FUNC_15(struct context *VAR_5)
{
    if (VAR_5->options.ce.socks_proxy_server)
    {
        FUNC_13(&VAR_5->c2.frame, VAR_5->options.ce.proto);
    }




    if (VAR_5->options.ce.tun_mtu_extra_defined)
    {
        FUNC_14(&VAR_5->c2.frame, VAR_5->options.ce.tun_mtu_extra);
    }






    FUNC_12(&VAR_5->c2.frame, VAR_5->options.ce.proto);





    FUNC_8(VAR_5, ((void*)0));
    FUNC_7(&VAR_5->c2.frame, 3);
}
