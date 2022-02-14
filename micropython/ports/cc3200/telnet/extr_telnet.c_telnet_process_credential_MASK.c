
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ _i16 ;
struct TYPE_2__ {scalar_t__ rxWindex; scalar_t__* rxBuffer; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_1 (scalar_t__*,char,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,scalar_t__*,int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4 (char *VAR_2, _i16 VAR_3) {
    VAR_1.rxWindex += VAR_3;
    if (VAR_1.rxWindex >= VAR_0) {
        VAR_1.rxWindex = VAR_0;
    }

    uint8_t *VAR_4 = VAR_1.rxBuffer + VAR_0;

    if ((VAR_4 = FUNC_1(VAR_1.rxBuffer, '\r', VAR_1.rxWindex)) || (VAR_1.rxWindex >= VAR_0)) {
        uint8_t VAR_5 = VAR_4 - VAR_1.rxBuffer;

        VAR_1.rxWindex = 0;
        if ((VAR_5 > 0) && (FUNC_2(VAR_2, VAR_1.rxBuffer, FUNC_0(VAR_5, FUNC_3(VAR_2))) == 0)) {
            return 1;
        }
        return -1;
    }
    return 0;
}
