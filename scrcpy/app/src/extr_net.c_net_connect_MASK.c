
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ socket_t ;
typedef int sin ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef TYPE_2__ SOCKADDR_IN ;
typedef int SOCKADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

socket_t
FUNC_6(uint32_t VAR_4, uint16_t VAR_5) {
    socket_t VAR_6 = FUNC_5(VAR_0, VAR_3, 0);
    if (VAR_6 == VAR_1) {
        FUNC_4("socket");
        return VAR_1;
    }

    SOCKADDR_IN VAR_7;
    VAR_7.sin_family = VAR_0;
    VAR_7.sin_addr.s_addr = FUNC_1(VAR_4);
    VAR_7.sin_port = FUNC_2(VAR_5);

    if (FUNC_0(VAR_6, (SOCKADDR *) &VAR_7, sizeof(VAR_7)) == VAR_2) {
        FUNC_4("connect");
        FUNC_3(VAR_6);
        return VAR_1;
    }

    return VAR_6;
}
