
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;


 int* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void) {
    if (FUNC_0(VAR_3, VAR_2)) {
        switch (VAR_3) {
            case 129:
                FUNC_1(VAR_0, 0);
                FUNC_3(0);
                break;
            case 128:
                VAR_2[0] |= 0x80;
                FUNC_1(VAR_1, 1);
                break;
        }
    }
    FUNC_2();
}
