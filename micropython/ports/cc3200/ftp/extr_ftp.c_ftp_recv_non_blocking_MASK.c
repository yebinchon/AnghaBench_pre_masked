
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ftp_result_t ;
typedef scalar_t__ _i32 ;
typedef int _i16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,void*,int ,int ) ;

__attribute__((used)) static ftp_result_t FUNC_1 (_i16 VAR_4, void *VAR_5, _i16 VAR_6, _i32 *VAR_7) {
    *VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, 0);

    if (*VAR_7 > 0) {
        return VAR_2;
    }
    else if (*VAR_7 != VAR_3) {

        return VAR_1;
    }
    return VAR_0;
}
