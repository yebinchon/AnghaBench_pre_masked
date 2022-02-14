
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int rax ;
struct TYPE_4__ {int flags; int client_tracking_redirection; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int tracking_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,int) ;
 TYPE_2__ VAR_5 ;
 int * FUNC_1 (int) ;

void FUNC_2(client *VAR_6, uint64_t VAR_7) {
    if (VAR_6->flags & VAR_0) return;
    VAR_6->flags |= VAR_0;
    VAR_6->flags &= ~VAR_1;
    VAR_6->client_tracking_redirection = VAR_7;
    VAR_5.tracking_clients++;
    if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_1(sizeof(rax*) * VAR_2);
        VAR_3 = FUNC_0("__redis__:invalidate",20);
    }
}
