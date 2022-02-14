
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
typedef int reuse ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef TYPE_2__ SOCKADDR_IN ;
typedef int SOCKADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int ,int ,void const*,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

socket_t
FUNC_8(uint32_t VAR_6, uint16_t VAR_7, int VAR_8) {
    socket_t VAR_9 = FUNC_7(VAR_0, VAR_3, 0);
    if (VAR_9 == VAR_1) {
        FUNC_5("socket");
        return VAR_1;
    }

    int VAR_10 = 1;
    if (FUNC_6(VAR_9, VAR_4, VAR_5, (const void *) &VAR_10,
                   sizeof(VAR_10)) == -1) {
        FUNC_5("setsockopt(SO_REUSEADDR)");
    }

    SOCKADDR_IN VAR_11;
    VAR_11.sin_family = VAR_0;
    VAR_11.sin_addr.s_addr = FUNC_1(VAR_6);
    VAR_11.sin_port = FUNC_2(VAR_7);

    if (FUNC_0(VAR_9, (SOCKADDR *) &VAR_11, sizeof(VAR_11)) == VAR_2) {
        FUNC_5("bind");
        FUNC_4(VAR_9);
        return VAR_1;
    }

    if (FUNC_3(VAR_9, VAR_8) == VAR_2) {
        FUNC_5("listen");
        FUNC_4(VAR_9);
        return VAR_1;
    }

    return VAR_9;
}
