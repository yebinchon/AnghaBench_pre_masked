
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(bool VAR_7) {
    uint32_t VAR_8 = VAR_7 ? VAR_5 : VAR_4;
    if (FUNC_4(VAR_8)) {
        FUNC_0("Could not initialize SDL: %s", FUNC_3());
        return 0;
    }

    FUNC_6(VAR_6);

    if (!VAR_7) {
        return 1;
    }


    if (!FUNC_5(VAR_1, "2")) {
        FUNC_1("Could not enable bilinear filtering");
    }
    if (!FUNC_5(VAR_2, "0")) {
        FUNC_1("Could not disable minimize on focus loss");
    }


    FUNC_2();

    return 1;
}
