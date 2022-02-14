
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int USBDriver ;
struct TYPE_4__ {TYPE_1__* array; } ;
struct TYPE_3__ {int driver; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(USBDriver *VAR_2) {
    FUNC_0(VAR_2);
    FUNC_1();
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        FUNC_3(&VAR_1.array[VAR_3].driver);
    }
    FUNC_2();
}
