
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int telnet_result_t ;
typedef scalar_t__ int16_t ;
typedef int _i16 ;
struct TYPE_2__ {scalar_t__ txRetries; int n_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,void*,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 () ;

__attribute__((used)) static telnet_result_t FUNC_2 (void *VAR_6, _i16 VAR_7) {
    int16_t VAR_8 = FUNC_0(VAR_5.n_sd, VAR_6, VAR_7, 0);

    if (VAR_8 > 0) {
        VAR_5.txRetries = 0;
        return VAR_2;
    }
    else if ((VAR_4 >= ++VAR_5.txRetries) && (VAR_8 == VAR_3)) {
        return VAR_0;
    }
    else {

        FUNC_1();
        return VAR_1;
    }
}
