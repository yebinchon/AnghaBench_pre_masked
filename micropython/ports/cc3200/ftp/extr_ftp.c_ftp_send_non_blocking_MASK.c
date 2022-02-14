
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
typedef int ftp_result_t ;
typedef int _i16 ;
struct TYPE_2__ {scalar_t__ txRetries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,void*,int ,int ) ;

__attribute__((used)) static ftp_result_t FUNC_2 (_i16 VAR_6, void *VAR_7, _i16 VAR_8) {
    int16_t VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8, 0);

    if (VAR_9 > 0) {
        VAR_5.txRetries = 0;
        return VAR_2;
    }
    else if ((VAR_3 >= ++VAR_5.txRetries) && (VAR_9 == VAR_4)) {
        return VAR_0;
    }
    else {

        FUNC_0();
        return VAR_1;
    }
}
