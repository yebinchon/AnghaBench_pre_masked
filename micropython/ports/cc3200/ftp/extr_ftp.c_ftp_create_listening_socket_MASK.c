
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sServerAddress ;
typedef int nonBlockingOption ;
typedef int _u8 ;
typedef int _u16 ;
typedef scalar_t__ _i16 ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_7__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_6__ {int NonblockingEnabled; } ;
typedef TYPE_2__ SlSockNonblocking_t ;
typedef int SlSockAddr_t ;
typedef TYPE_3__ SlSockAddrIn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int const*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_8 (_i16 *VAR_7, _u16 VAR_8, _u8 VAR_9) {
    SlSockNonblocking_t VAR_10;
    SlSockAddrIn_t VAR_11;
    _i16 VAR_12;
    _i16 VAR_13;


    FUNC_0 ((*VAR_7 = FUNC_7(VAR_0, VAR_3, VAR_2)) > 0);
    VAR_12 = *VAR_7;

    if (VAR_12 > 0) {

        FUNC_1(VAR_12, 0);


        VAR_10.NonblockingEnabled = 1;
        FUNC_0 ((VAR_13 = FUNC_6(VAR_12, VAR_5, VAR_6, &VAR_10, sizeof(VAR_10))) == VAR_4);


        VAR_11.sin_family = VAR_0;
        VAR_11.sin_addr.s_addr = VAR_1;
        VAR_11.sin_port = FUNC_4(VAR_8);

        FUNC_0 ((VAR_13 |= FUNC_3(VAR_12, (const SlSockAddr_t *)&VAR_11, sizeof(VAR_11))) == VAR_4);


        FUNC_0 ((VAR_13 |= FUNC_5 (VAR_12, VAR_9)) == VAR_4);

        if (VAR_13 == VAR_4) {
            return 1;
        }
        FUNC_2(VAR_7);
    }
    return 0;
}
