
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ socket_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,char*,int) ;

__attribute__((used)) static socket_t
FUNC_3(uint16_t VAR_2) {
    socket_t VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 == VAR_0) {
        return VAR_0;
    }

    char VAR_4;


    if (FUNC_2(VAR_3, &VAR_4, 1) != 1) {

        FUNC_0(VAR_3);
        return VAR_0;
    }
    return VAR_3;
}
