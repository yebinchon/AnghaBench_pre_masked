
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long usRCA; } ;
typedef TYPE_1__ DiskInfo_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3 (DiskInfo_t *VAR_3) {
    unsigned long VAR_4;
    unsigned long VAR_5;

    VAR_4 = VAR_3->usRCA;


    VAR_5 = FUNC_0(VAR_0, (VAR_4 << 16));

    if (VAR_5 == 0) {
        while (!(FUNC_1(VAR_1) & VAR_2));
    }


    FUNC_2(250);

    return VAR_5;
}
