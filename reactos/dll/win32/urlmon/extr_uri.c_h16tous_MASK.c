
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int * str; } ;
typedef TYPE_1__ h16 ;
typedef int USHORT ;
typedef size_t DWORD ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static USHORT FUNC_1(h16 VAR_0) {
    DWORD VAR_1;
    USHORT VAR_2 = 0;

    for(VAR_1 = 0; VAR_1 < VAR_0.len; ++VAR_1) {
        VAR_2 <<= 4;
        VAR_2 += FUNC_0(VAR_0.str[VAR_1]);
    }

    return VAR_2;
}
