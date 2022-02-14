
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; int sin_family; } ;
union socket_address {int sa; TYPE_2__ sin; } ;
typedef int socklen_t ;
typedef scalar_t__ sock_t ;
typedef int sa ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (union socket_address*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,union socket_address*,int) ;
 int FUNC_8 (scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int,int ) ;

int FUNC_10(sock_t VAR_4[2], int VAR_5) {
  union socket_address VAR_6, VAR_7;
  sock_t VAR_8;
  socklen_t VAR_9 = sizeof(VAR_6.sin);
  int VAR_10 = 0;

  VAR_8 = VAR_4[0] = VAR_4[1] = VAR_1;

  (void) FUNC_5(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.sin.sin_family = VAR_0;
  VAR_6.sin.sin_addr.s_addr = FUNC_3(0x7f000001);
  VAR_7 = VAR_6;

  if ((VAR_8 = FUNC_9(VAR_0, VAR_5, 0)) == VAR_1) {
  } else if (FUNC_0(VAR_8, &VAR_6.sa, VAR_9) != 0) {
  } else if (VAR_5 == VAR_3 && FUNC_4(VAR_8, 1) != 0) {
  } else if (FUNC_2(VAR_8, &VAR_6.sa, &VAR_9) != 0) {
  } else if ((VAR_4[0] = FUNC_9(VAR_0, VAR_5, 0)) == VAR_1) {
  } else if (VAR_5 == VAR_3 && FUNC_1(VAR_4[0], &VAR_6.sa, VAR_9) != 0) {
  } else if (VAR_5 == VAR_2 &&
             (FUNC_0(VAR_4[0], &VAR_7, VAR_9) != 0 ||
              FUNC_2(VAR_4[0], &VAR_7, &VAR_9) != 0 ||
              FUNC_1(VAR_4[0], &VAR_6.sa, VAR_9) != 0 ||
              FUNC_1(VAR_8, &VAR_7, VAR_9) != 0)) {
  } else if ((VAR_4[1] = (VAR_5 == VAR_2 ? VAR_8 : FUNC_7(
                                                            VAR_8, &VAR_6, VAR_9))) ==
             VAR_1) {
  } else {
    FUNC_6(VAR_4[0]);
    FUNC_6(VAR_4[1]);
    if (VAR_5 == VAR_3) FUNC_8(&VAR_8);
    VAR_10 = 1;
  }

  if (!VAR_10) {
    if (VAR_4[0] != VAR_1) FUNC_8(&VAR_4[0]);
    if (VAR_4[1] != VAR_1) FUNC_8(&VAR_4[1]);
    if (VAR_8 != VAR_1) FUNC_8(&VAR_8);
  }

  return VAR_10;
}
