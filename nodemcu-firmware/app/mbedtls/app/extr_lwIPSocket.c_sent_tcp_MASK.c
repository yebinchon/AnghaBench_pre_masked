
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16_t ;
struct tcp_pcb {int dummy; } ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ lwIP_netconn ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static err_t FUNC_3(void *VAR_3, struct tcp_pcb *VAR_4, u16_t VAR_5)
{
    lwIP_netconn *VAR_6 = VAR_3;
    FUNC_1(VAR_6);
    VAR_6->state = VAR_2;
 FUNC_2(FUNC_0(VAR_6), VAR_1, VAR_5);
    return VAR_0;
}
