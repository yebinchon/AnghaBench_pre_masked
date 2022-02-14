
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sServerAddress ;
typedef int nonBlockingOption ;
typedef int _i16 ;
struct TYPE_9__ {scalar_t__ sd; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_8__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_7__ {int NonblockingEnabled; } ;
typedef TYPE_2__ SlSockNonblocking_t ;
typedef int SlSockAddr_t ;
typedef TYPE_3__ SlSockAddrIn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__,int const*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ,int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 TYPE_4__ VAR_9 ;

__attribute__((used)) static bool FUNC_8 (void) {
    SlSockNonblocking_t VAR_10;
    SlSockAddrIn_t VAR_11;
    _i16 VAR_12;


    FUNC_0 ((VAR_9.sd = FUNC_7(VAR_0, VAR_3, VAR_2)) > 0);
    if (VAR_9.sd > 0) {

        FUNC_1(VAR_9.sd, 0);


        VAR_10.NonblockingEnabled = 1;
        FUNC_0 ((VAR_12 = FUNC_6(VAR_9.sd, VAR_5, VAR_6, &VAR_10, sizeof(VAR_10))) == VAR_4);


        VAR_11.sin_family = VAR_0;
        VAR_11.sin_addr.s_addr = VAR_1;
        VAR_11.sin_port = FUNC_4(VAR_8);

        FUNC_0 ((VAR_12 |= FUNC_3(VAR_9.sd, (const SlSockAddr_t *)&VAR_11, sizeof(VAR_11))) == VAR_4);


        FUNC_0 ((VAR_12 |= FUNC_5 (VAR_9.sd, VAR_7)) == VAR_4);

        if (VAR_12 == VAR_4) {
            return 1;
        }
        FUNC_2(&VAR_9.sd);
    }

    return 0;
}
