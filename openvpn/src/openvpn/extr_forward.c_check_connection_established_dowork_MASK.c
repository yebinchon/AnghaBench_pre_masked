
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wait_for_connect; int push_request_interval; scalar_t__ tls_multi; int timeval; } ;
struct TYPE_3__ {scalar_t__ pull; } ;
struct context {TYPE_2__ c2; TYPE_1__ options; } ;


 scalar_t__ FUNC_0 (struct context*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct context*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__,int ,int *,int *,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (struct context*) ;

void
FUNC_7(struct context *VAR_4)
{
    if (FUNC_4(&VAR_4->c2.wait_for_connect, &VAR_4->c2.timeval, VAR_0))
    {
        if (FUNC_0(VAR_4))
        {
            {
                FUNC_1(VAR_4, 0, 0);
            }

            FUNC_2(&VAR_4->c2.wait_for_connect);
        }
    }
}
