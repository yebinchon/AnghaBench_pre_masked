
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ftp_result_t ;
typedef scalar_t__ _i16 ;
typedef int SlSocklen_t ;
typedef int SlSockAddr_t ;
typedef int SlSockAddrIn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int *) ;

__attribute__((used)) static ftp_result_t FUNC_3 (_i16 VAR_4, _i16 *VAR_5) {
    SlSockAddrIn_t VAR_6;
    SlSocklen_t VAR_7;


    *VAR_5 = FUNC_2(VAR_4, (SlSockAddr_t *)&VAR_6, (SlSocklen_t *)&VAR_7);
    _i16 VAR_8 = *VAR_5;
    if (VAR_8 == VAR_3) {
        return VAR_0;
    }
    else if (VAR_8 < 0) {

        FUNC_0();
        return VAR_1;
    }


    FUNC_1(VAR_8, 0);


    return VAR_2;
}
