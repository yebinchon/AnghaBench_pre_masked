
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int telnet_result_t ;
typedef scalar_t__ _i16 ;
struct TYPE_2__ {scalar_t__ timeout; int n_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (void*,scalar_t__*) ;
 int FUNC_2 () ;

__attribute__((used)) static telnet_result_t FUNC_3 (void *VAR_5, _i16 VAR_6, _i16 *VAR_7) {
    *VAR_7 = FUNC_0(VAR_4.n_sd, VAR_5, VAR_6, 0);

    if (*VAR_7 > 0) {
        VAR_4.timeout = 0;
        FUNC_1 (VAR_5, VAR_7);
        if (*VAR_7 > 0) {
            return VAR_2;
        }
    }
    else if (*VAR_7 != VAR_3) {

        FUNC_2();
        return VAR_1;
    }
    return VAR_0;
}
